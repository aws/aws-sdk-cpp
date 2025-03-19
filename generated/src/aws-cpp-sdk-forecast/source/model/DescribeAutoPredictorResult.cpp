/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeAutoPredictorResult.h>
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

DescribeAutoPredictorResult::DescribeAutoPredictorResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAutoPredictorResult& DescribeAutoPredictorResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PredictorArn"))
  {
    m_predictorArn = jsonValue.GetString("PredictorArn");
    m_predictorArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PredictorName"))
  {
    m_predictorName = jsonValue.GetString("PredictorName");
    m_predictorNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastHorizon"))
  {
    m_forecastHorizon = jsonValue.GetInteger("ForecastHorizon");
    m_forecastHorizonHasBeenSet = true;
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
  if(jsonValue.ValueExists("ForecastFrequency"))
  {
    m_forecastFrequency = jsonValue.GetString("ForecastFrequency");
    m_forecastFrequencyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ForecastDimensions"))
  {
    Aws::Utils::Array<JsonView> forecastDimensionsJsonList = jsonValue.GetArray("ForecastDimensions");
    for(unsigned forecastDimensionsIndex = 0; forecastDimensionsIndex < forecastDimensionsJsonList.GetLength(); ++forecastDimensionsIndex)
    {
      m_forecastDimensions.push_back(forecastDimensionsJsonList[forecastDimensionsIndex].AsString());
    }
    m_forecastDimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetImportJobArns"))
  {
    Aws::Utils::Array<JsonView> datasetImportJobArnsJsonList = jsonValue.GetArray("DatasetImportJobArns");
    for(unsigned datasetImportJobArnsIndex = 0; datasetImportJobArnsIndex < datasetImportJobArnsJsonList.GetLength(); ++datasetImportJobArnsIndex)
    {
      m_datasetImportJobArns.push_back(datasetImportJobArnsJsonList[datasetImportJobArnsIndex].AsString());
    }
    m_datasetImportJobArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataConfig"))
  {
    m_dataConfig = jsonValue.GetObject("DataConfig");
    m_dataConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionConfig"))
  {
    m_encryptionConfig = jsonValue.GetObject("EncryptionConfig");
    m_encryptionConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReferencePredictorSummary"))
  {
    m_referencePredictorSummary = jsonValue.GetObject("ReferencePredictorSummary");
    m_referencePredictorSummaryHasBeenSet = true;
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
  if(jsonValue.ValueExists("OptimizationMetric"))
  {
    m_optimizationMetric = OptimizationMetricMapper::GetOptimizationMetricForName(jsonValue.GetString("OptimizationMetric"));
    m_optimizationMetricHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExplainabilityInfo"))
  {
    m_explainabilityInfo = jsonValue.GetObject("ExplainabilityInfo");
    m_explainabilityInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("MonitorInfo"))
  {
    m_monitorInfo = jsonValue.GetObject("MonitorInfo");
    m_monitorInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TimeAlignmentBoundary"))
  {
    m_timeAlignmentBoundary = jsonValue.GetObject("TimeAlignmentBoundary");
    m_timeAlignmentBoundaryHasBeenSet = true;
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
