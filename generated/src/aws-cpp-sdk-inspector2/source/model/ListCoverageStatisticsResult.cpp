/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCoverageStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCoverageStatisticsResult::ListCoverageStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCoverageStatisticsResult& ListCoverageStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("countsByGroup"))
  {
    Aws::Utils::Array<JsonView> countsByGroupJsonList = jsonValue.GetArray("countsByGroup");
    for(unsigned countsByGroupIndex = 0; countsByGroupIndex < countsByGroupJsonList.GetLength(); ++countsByGroupIndex)
    {
      m_countsByGroup.push_back(countsByGroupJsonList[countsByGroupIndex].AsObject());
    }
    m_countsByGroupHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalCounts"))
  {
    m_totalCounts = jsonValue.GetInt64("totalCounts");
    m_totalCountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");
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
