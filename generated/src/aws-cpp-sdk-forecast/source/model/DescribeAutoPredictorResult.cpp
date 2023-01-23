/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeAutoPredictorResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAutoPredictorResult::DescribeAutoPredictorResult() : 
    m_forecastHorizon(0),
    m_estimatedTimeRemainingInMinutes(0),
    m_optimizationMetric(OptimizationMetric::NOT_SET)
{
}

DescribeAutoPredictorResult::DescribeAutoPredictorResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_forecastHorizon(0),
    m_estimatedTimeRemainingInMinutes(0),
    m_optimizationMetric(OptimizationMetric::NOT_SET)
{
  *this = result;
}

DescribeAutoPredictorResult& DescribeAutoPredictorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PredictorArn"))
  {
    m_predictorArn = jsonValue.GetString("PredictorArn");

  }

  if(jsonValue.ValueExists("PredictorName"))
  {
    m_predictorName = jsonValue.GetString("PredictorName");

  }

  if(jsonValue.ValueExists("ForecastHorizon"))
  {
    m_forecastHorizon = jsonValue.GetInteger("ForecastHorizon");

  }

  if(jsonValue.ValueExists("ForecastTypes"))
  {
    Aws::Utils::Array<JsonView> forecastTypesJsonList = jsonValue.GetArray("ForecastTypes");
    for(unsigned forecastTypesIndex = 0; forecastTypesIndex < forecastTypesJsonList.GetLength(); ++forecastTypesIndex)
    {
      m_forecastTypes.push_back(forecastTypesJsonList[forecastTypesIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("ForecastFrequency"))
  {
    m_forecastFrequency = jsonValue.GetString("ForecastFrequency");

  }

  if(jsonValue.ValueExists("ForecastDimensions"))
  {
    Aws::Utils::Array<JsonView> forecastDimensionsJsonList = jsonValue.GetArray("ForecastDimensions");
    for(unsigned forecastDimensionsIndex = 0; forecastDimensionsIndex < forecastDimensionsJsonList.GetLength(); ++forecastDimensionsIndex)
    {
      m_forecastDimensions.push_back(forecastDimensionsJsonList[forecastDimensionsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("DatasetImportJobArns"))
  {
    Aws::Utils::Array<JsonView> datasetImportJobArnsJsonList = jsonValue.GetArray("DatasetImportJobArns");
    for(unsigned datasetImportJobArnsIndex = 0; datasetImportJobArnsIndex < datasetImportJobArnsJsonList.GetLength(); ++datasetImportJobArnsIndex)
    {
      m_datasetImportJobArns.push_back(datasetImportJobArnsJsonList[datasetImportJobArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("DataConfig"))
  {
    m_dataConfig = jsonValue.GetObject("DataConfig");

  }

  if(jsonValue.ValueExists("EncryptionConfig"))
  {
    m_encryptionConfig = jsonValue.GetObject("EncryptionConfig");

  }

  if(jsonValue.ValueExists("ReferencePredictorSummary"))
  {
    m_referencePredictorSummary = jsonValue.GetObject("ReferencePredictorSummary");

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

  if(jsonValue.ValueExists("OptimizationMetric"))
  {
    m_optimizationMetric = OptimizationMetricMapper::GetOptimizationMetricForName(jsonValue.GetString("OptimizationMetric"));

  }

  if(jsonValue.ValueExists("ExplainabilityInfo"))
  {
    m_explainabilityInfo = jsonValue.GetObject("ExplainabilityInfo");

  }

  if(jsonValue.ValueExists("MonitorInfo"))
  {
    m_monitorInfo = jsonValue.GetObject("MonitorInfo");

  }

  if(jsonValue.ValueExists("TimeAlignmentBoundary"))
  {
    m_timeAlignmentBoundary = jsonValue.GetObject("TimeAlignmentBoundary");

  }



  return *this;
}
