﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/GetColumnStatisticsTaskRunsResult.h>
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

GetColumnStatisticsTaskRunsResult::GetColumnStatisticsTaskRunsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetColumnStatisticsTaskRunsResult& GetColumnStatisticsTaskRunsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ColumnStatisticsTaskRuns"))
  {
    Aws::Utils::Array<JsonView> columnStatisticsTaskRunsJsonList = jsonValue.GetArray("ColumnStatisticsTaskRuns");
    for(unsigned columnStatisticsTaskRunsIndex = 0; columnStatisticsTaskRunsIndex < columnStatisticsTaskRunsJsonList.GetLength(); ++columnStatisticsTaskRunsIndex)
    {
      m_columnStatisticsTaskRuns.push_back(columnStatisticsTaskRunsJsonList[columnStatisticsTaskRunsIndex].AsObject());
    }
    m_columnStatisticsTaskRunsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
