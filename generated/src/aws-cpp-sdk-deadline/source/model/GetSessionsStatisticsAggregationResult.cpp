/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/GetSessionsStatisticsAggregationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSessionsStatisticsAggregationResult::GetSessionsStatisticsAggregationResult() : 
    m_status(SessionsStatisticsAggregationStatus::NOT_SET)
{
}

GetSessionsStatisticsAggregationResult::GetSessionsStatisticsAggregationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(SessionsStatisticsAggregationStatus::NOT_SET)
{
  *this = result;
}

GetSessionsStatisticsAggregationResult& GetSessionsStatisticsAggregationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("statistics"))
  {
    Aws::Utils::Array<JsonView> statisticsJsonList = jsonValue.GetArray("statistics");
    for(unsigned statisticsIndex = 0; statisticsIndex < statisticsJsonList.GetLength(); ++statisticsIndex)
    {
      m_statistics.push_back(statisticsJsonList[statisticsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = SessionsStatisticsAggregationStatusMapper::GetSessionsStatisticsAggregationStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
