/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutmetrics/model/ListAnomalyGroupTimeSeriesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutMetrics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAnomalyGroupTimeSeriesResult::ListAnomalyGroupTimeSeriesResult()
{
}

ListAnomalyGroupTimeSeriesResult::ListAnomalyGroupTimeSeriesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAnomalyGroupTimeSeriesResult& ListAnomalyGroupTimeSeriesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AnomalyGroupId"))
  {
    m_anomalyGroupId = jsonValue.GetString("AnomalyGroupId");

  }

  if(jsonValue.ValueExists("MetricName"))
  {
    m_metricName = jsonValue.GetString("MetricName");

  }

  if(jsonValue.ValueExists("TimestampList"))
  {
    Aws::Utils::Array<JsonView> timestampListJsonList = jsonValue.GetArray("TimestampList");
    for(unsigned timestampListIndex = 0; timestampListIndex < timestampListJsonList.GetLength(); ++timestampListIndex)
    {
      m_timestampList.push_back(timestampListJsonList[timestampListIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TimeSeriesList"))
  {
    Aws::Utils::Array<JsonView> timeSeriesListJsonList = jsonValue.GetArray("TimeSeriesList");
    for(unsigned timeSeriesListIndex = 0; timeSeriesListIndex < timeSeriesListJsonList.GetLength(); ++timeSeriesListIndex)
    {
      m_timeSeriesList.push_back(timeSeriesListJsonList[timeSeriesListIndex].AsObject());
    }
  }



  return *this;
}
