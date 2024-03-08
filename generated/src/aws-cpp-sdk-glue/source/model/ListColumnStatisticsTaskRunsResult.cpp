/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/ListColumnStatisticsTaskRunsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListColumnStatisticsTaskRunsResult::ListColumnStatisticsTaskRunsResult()
{
}

ListColumnStatisticsTaskRunsResult::ListColumnStatisticsTaskRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListColumnStatisticsTaskRunsResult& ListColumnStatisticsTaskRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ColumnStatisticsTaskRunIds"))
  {
    Aws::Utils::Array<JsonView> columnStatisticsTaskRunIdsJsonList = jsonValue.GetArray("ColumnStatisticsTaskRunIds");
    for(unsigned columnStatisticsTaskRunIdsIndex = 0; columnStatisticsTaskRunIdsIndex < columnStatisticsTaskRunIdsJsonList.GetLength(); ++columnStatisticsTaskRunIdsIndex)
    {
      m_columnStatisticsTaskRunIds.push_back(columnStatisticsTaskRunIdsJsonList[columnStatisticsTaskRunIdsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
