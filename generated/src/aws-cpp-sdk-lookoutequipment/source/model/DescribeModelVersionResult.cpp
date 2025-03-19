/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeModelVersionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelVersionResult::DescribeModelVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeModelVersionResult& DescribeModelVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");
    m_modelNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetInt64("ModelVersion");
    m_modelVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelVersionArn"))
  {
    m_modelVersionArn = jsonValue.GetString("ModelVersionArn");
    m_modelVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelVersionStatusMapper::GetModelVersionStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = ModelVersionSourceTypeMapper::GetModelVersionSourceTypeForName(jsonValue.GetString("SourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");
    m_datasetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");
    m_datasetArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");
    m_schemaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LabelsInputConfiguration"))
  {
    m_labelsInputConfiguration = jsonValue.GetObject("LabelsInputConfiguration");
    m_labelsInputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingDataStartTime"))
  {
    m_trainingDataStartTime = jsonValue.GetDouble("TrainingDataStartTime");
    m_trainingDataStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingDataEndTime"))
  {
    m_trainingDataEndTime = jsonValue.GetDouble("TrainingDataEndTime");
    m_trainingDataEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationDataStartTime"))
  {
    m_evaluationDataStartTime = jsonValue.GetDouble("EvaluationDataStartTime");
    m_evaluationDataStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EvaluationDataEndTime"))
  {
    m_evaluationDataEndTime = jsonValue.GetDouble("EvaluationDataEndTime");
    m_evaluationDataEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataPreProcessingConfiguration"))
  {
    m_dataPreProcessingConfiguration = jsonValue.GetObject("DataPreProcessingConfiguration");
    m_dataPreProcessingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingExecutionStartTime"))
  {
    m_trainingExecutionStartTime = jsonValue.GetDouble("TrainingExecutionStartTime");
    m_trainingExecutionStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("TrainingExecutionEndTime"))
  {
    m_trainingExecutionEndTime = jsonValue.GetDouble("TrainingExecutionEndTime");
    m_trainingExecutionEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FailedReason"))
  {
    m_failedReason = jsonValue.GetString("FailedReason");
    m_failedReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelMetrics"))
  {
    m_modelMetrics = jsonValue.GetString("ModelMetrics");
    m_modelMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ServerSideKmsKeyId"))
  {
    m_serverSideKmsKeyId = jsonValue.GetString("ServerSideKmsKeyId");
    m_serverSideKmsKeyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("OffCondition"))
  {
    m_offCondition = jsonValue.GetString("OffCondition");
    m_offConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SourceModelVersionArn"))
  {
    m_sourceModelVersionArn = jsonValue.GetString("SourceModelVersionArn");
    m_sourceModelVersionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportJobStartTime"))
  {
    m_importJobStartTime = jsonValue.GetDouble("ImportJobStartTime");
    m_importJobStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportJobEndTime"))
  {
    m_importJobEndTime = jsonValue.GetDouble("ImportJobEndTime");
    m_importJobEndTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ImportedDataSizeInBytes"))
  {
    m_importedDataSizeInBytes = jsonValue.GetInt64("ImportedDataSizeInBytes");
    m_importedDataSizeInBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PriorModelMetrics"))
  {
    m_priorModelMetrics = jsonValue.GetString("PriorModelMetrics");
    m_priorModelMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetrainingAvailableDataInDays"))
  {
    m_retrainingAvailableDataInDays = jsonValue.GetInteger("RetrainingAvailableDataInDays");
    m_retrainingAvailableDataInDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoPromotionResult"))
  {
    m_autoPromotionResult = AutoPromotionResultMapper::GetAutoPromotionResultForName(jsonValue.GetString("AutoPromotionResult"));
    m_autoPromotionResultHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AutoPromotionResultReason"))
  {
    m_autoPromotionResultReason = jsonValue.GetString("AutoPromotionResultReason");
    m_autoPromotionResultReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelDiagnosticsOutputConfiguration"))
  {
    m_modelDiagnosticsOutputConfiguration = jsonValue.GetObject("ModelDiagnosticsOutputConfiguration");
    m_modelDiagnosticsOutputConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelDiagnosticsResultsObject"))
  {
    m_modelDiagnosticsResultsObject = jsonValue.GetObject("ModelDiagnosticsResultsObject");
    m_modelDiagnosticsResultsObjectHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ModelQuality"))
  {
    m_modelQuality = ModelQualityMapper::GetModelQualityForName(jsonValue.GetString("ModelQuality"));
    m_modelQualityHasBeenSet = true;
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
