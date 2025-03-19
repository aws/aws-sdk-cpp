/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeWhatIfForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWhatIfForecastResult::DescribeWhatIfForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeWhatIfForecastResult& DescribeWhatIfForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WhatIfForecastName"))
  {
    m_whatIfForecastName = jsonValue.GetString("WhatIfForecastName");
    m_whatIfForecastNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WhatIfForecastArn"))
  {
    m_whatIfForecastArn = jsonValue.GetString("WhatIfForecastArn");
    m_whatIfForecastArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WhatIfAnalysisArn"))
  {
    m_whatIfAnalysisArn = jsonValue.GetString("WhatIfAnalysisArn");
    m_whatIfAnalysisArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EstimatedTimeRemainingInMinutes"))
  {
    m_estimatedTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedTimeRemainingInMinutes");
    m_estimatedTimeRemainingInMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");
    m_lastModificationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeSeriesTransformations"))
  {
    Aws::Utils::Array<JsonView> timeSeriesTransformationsJsonList = jsonValue.GetArray("TimeSeriesTransformations");
    for(unsigned timeSeriesTransformationsIndex = 0; timeSeriesTransformationsIndex < timeSeriesTransformationsJsonList.GetLength(); ++timeSeriesTransformationsIndex)
    {
      m_timeSeriesTransformations.push_back(timeSeriesTransformationsJsonList[timeSeriesTransformationsIndex].AsObject());
    }
    m_timeSeriesTransformationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeSeriesReplacementsDataSource"))
  {
    m_timeSeriesReplacementsDataSource = jsonValue.GetObject("TimeSeriesReplacementsDataSource");
    m_timeSeriesReplacementsDataSourceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastTypes"))
  {
    Aws::Utils::Array<JsonView> forecastTypesJsonList = jsonValue.GetArray("ForecastTypes");
    for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
    {
      m_forecastTypes.push_back(forecastTypesJsonList[forecastTypesIndex].AsString());
    }
    m_forecastTypesHasBeenSet = true;
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
