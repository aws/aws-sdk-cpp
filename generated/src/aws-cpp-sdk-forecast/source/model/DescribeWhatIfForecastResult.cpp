/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeWhatIfForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeWhatIfForecastResult::DescribeWhatIfForecastResult() : 
    m_estimatedTimeRemainingInMinutes(0)
{
}

DescribeWhatIfForecastResult::DescribeWhatIfForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_estimatedTimeRemainingInMinutes(0)
{
  *this = result;
}

DescribeWhatIfForecastResult& DescribeWhatIfForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WhatIfForecastName"))
  {
    m_whatIfForecastName = jsonValue.GetString("WhatIfForecastName");

  }

  if(jsonValue.ValueExists("WhatIfForecastArn"))
  {
    m_whatIfForecastArn = jsonValue.GetString("WhatIfForecastArn");

  }

  if(jsonValue.ValueExists("WhatIfAnalysisArn"))
  {
    m_whatIfAnalysisArn = jsonValue.GetString("WhatIfAnalysisArn");

  }

  if(jsonValue.ValueExists("EstimatedTimeRemainingInMinutes"))
  {
    m_estimatedTimeRemainingInMinutes = jsonValue.GetInt64("EstimatedTimeRemainingInMinutes");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }

  if(jsonValue.ValueExists("TimeSeriesTransformations"))
  {
    Aws::Utils::Array<JsonView> timeSeriesTransformationsJsonList = jsonValue.GetArray("TimeSeriesTransformations");
    for(unsigned timeSeriesTransformationsIndex = 0; timeSeriesTransformationsIndex < timeSeriesTransformationsJsonList.GetLength(); ++timeSeriesTransformationsIndex)
    {
      m_timeSeriesTransformations.push_back(timeSeriesTransformationsJsonList[timeSeriesTransformationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TimeSeriesReplacementsDataSource"))
  {
    m_timeSeriesReplacementsDataSource = jsonValue.GetObject("TimeSeriesReplacementsDataSource");

  }

  if(jsonValue.ValueExists("ForecastTypes"))
  {
    Aws::Utils::Array<JsonView> forecastTypesJsonList = jsonValue.GetArray("ForecastTypes");
    for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
    {
      m_forecastTypes.push_back(forecastTypesJsonList[forecastTypesIndex].AsString());
    }
  }



  return *this;
}
