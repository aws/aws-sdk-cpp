/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeForecastResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeForecastResult::DescribeForecastResult() : 
    m_estimatedTimeRemainingInMinutes(0)
{
}

DescribeForecastResult::DescribeForecastResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_estimatedTimeRemainingInMinutes(0)
{
  *this = result;
}

DescribeForecastResult& DescribeForecastResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ForecastArn"))
  {
    m_forecastArn = jsonValue.GetString("ForecastArn");

  }

  if(jsonValue.ValueExists("ForecastName"))
  {
    m_forecastName = jsonValue.GetString("ForecastName");

  }

  if(jsonValue.ValueExists("ForecastTypes"))
  {
    Aws::Utils::Array<JsonView> forecastTypesJsonList = jsonValue.GetArray("ForecastTypes");
    for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
    {
      m_forecastTypes.push_back(forecastTypesJsonList[forecastTypesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("PredictorArn"))
  {
    m_predictorArn = jsonValue.GetString("PredictorArn");

  }

  if(jsonValue.ValueExists("DatasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("DatasetGroupArn");

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

  if(jsonValue.ValueExists("TimeSeriesSelector"))
  {
    m_timeSeriesSelector = jsonValue.GetObject("TimeSeriesSelector");

  }



  return *this;
}
