/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/xray/model/GetTimeSeriesServiceStatisticsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::XRay::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTimeSeriesServiceStatisticsResult::GetTimeSeriesServiceStatisticsResult() : 
    m_containsOldGroupVersions(false)
{
}

GetTimeSeriesServiceStatisticsResult::GetTimeSeriesServiceStatisticsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_containsOldGroupVersions(false)
{
  *this = result;
}

GetTimeSeriesServiceStatisticsResult& GetTimeSeriesServiceStatisticsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TimeSeriesServiceStatistics"))
  {
    Aws::Utils::Array<JsonView> timeSeriesServiceStatisticsJsonList = jsonValue.GetArray("TimeSeriesServiceStatistics");
    for(unsigned timeSeriesServiceStatisticsIndex = 0; timeSeriesServiceStatisticsIndex < timeSeriesServiceStatisticsJsonList.GetLength(); ++timeSeriesServiceStatisticsIndex)
    {
      m_timeSeriesServiceStatistics.push_back(timeSeriesServiceStatisticsJsonList[timeSeriesServiceStatisticsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ContainsOldGroupVersions"))
  {
    m_containsOldGroupVersions = jsonValue.GetBool("ContainsOldGroupVersions");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
