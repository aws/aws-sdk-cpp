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

DescribeModelVersionResult::DescribeModelVersionResult() : 
    m_modelVersion(0),
    m_status(ModelVersionStatus::NOT_SET),
    m_sourceType(ModelVersionSourceType::NOT_SET),
    m_importedDataSizeInBytes(0),
    m_retrainingAvailableDataInDays(0),
    m_autoPromotionResult(AutoPromotionResult::NOT_SET),
    m_modelQuality(ModelQuality::NOT_SET)
{
}

DescribeModelVersionResult::DescribeModelVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_modelVersion(0),
    m_status(ModelVersionStatus::NOT_SET),
    m_sourceType(ModelVersionSourceType::NOT_SET),
    m_importedDataSizeInBytes(0),
    m_retrainingAvailableDataInDays(0),
    m_autoPromotionResult(AutoPromotionResult::NOT_SET),
    m_modelQuality(ModelQuality::NOT_SET)
{
  *this = result;
}

DescribeModelVersionResult& DescribeModelVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

  }

  if(jsonValue.ValueExists("ModelArn"))
  {
    m_modelArn = jsonValue.GetString("ModelArn");

  }

  if(jsonValue.ValueExists("ModelVersion"))
  {
    m_modelVersion = jsonValue.GetInt64("ModelVersion");

  }

  if(jsonValue.ValueExists("ModelVersionArn"))
  {
    m_modelVersionArn = jsonValue.GetString("ModelVersionArn");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelVersionStatusMapper::GetModelVersionStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("SourceType"))
  {
    m_sourceType = ModelVersionSourceTypeMapper::GetModelVersionSourceTypeForName(jsonValue.GetString("SourceType"));

  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

  }

  if(jsonValue.ValueExists("LabelsInputConfiguration"))
  {
    m_labelsInputConfiguration = jsonValue.GetObject("LabelsInputConfiguration");

  }

  if(jsonValue.ValueExists("TrainingDataStartTime"))
  {
    m_trainingDataStartTime = jsonValue.GetDouble("TrainingDataStartTime");

  }

  if(jsonValue.ValueExists("TrainingDataEndTime"))
  {
    m_trainingDataEndTime = jsonValue.GetDouble("TrainingDataEndTime");

  }

  if(jsonValue.ValueExists("EvaluationDataStartTime"))
  {
    m_evaluationDataStartTime = jsonValue.GetDouble("EvaluationDataStartTime");

  }

  if(jsonValue.ValueExists("EvaluationDataEndTime"))
  {
    m_evaluationDataEndTime = jsonValue.GetDouble("EvaluationDataEndTime");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("DataPreProcessingConfiguration"))
  {
    m_dataPreProcessingConfiguration = jsonValue.GetObject("DataPreProcessingConfiguration");

  }

  if(jsonValue.ValueExists("TrainingExecutionStartTime"))
  {
    m_trainingExecutionStartTime = jsonValue.GetDouble("TrainingExecutionStartTime");

  }

  if(jsonValue.ValueExists("TrainingExecutionEndTime"))
  {
    m_trainingExecutionEndTime = jsonValue.GetDouble("TrainingExecutionEndTime");

  }

  if(jsonValue.ValueExists("FailedReason"))
  {
    m_failedReason = jsonValue.GetString("FailedReason");

  }

  if(jsonValue.ValueExists("ModelMetrics"))
  {
    m_modelMetrics = jsonValue.GetString("ModelMetrics");

  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("ServerSideKmsKeyId"))
  {
    m_serverSideKmsKeyId = jsonValue.GetString("ServerSideKmsKeyId");

  }

  if(jsonValue.ValueExists("OffCondition"))
  {
    m_offCondition = jsonValue.GetString("OffCondition");

  }

  if(jsonValue.ValueExists("SourceModelVersionArn"))
  {
    m_sourceModelVersionArn = jsonValue.GetString("SourceModelVersionArn");

  }

  if(jsonValue.ValueExists("ImportJobStartTime"))
  {
    m_importJobStartTime = jsonValue.GetDouble("ImportJobStartTime");

  }

  if(jsonValue.ValueExists("ImportJobEndTime"))
  {
    m_importJobEndTime = jsonValue.GetDouble("ImportJobEndTime");

  }

  if(jsonValue.ValueExists("ImportedDataSizeInBytes"))
  {
    m_importedDataSizeInBytes = jsonValue.GetInt64("ImportedDataSizeInBytes");

  }

  if(jsonValue.ValueExists("PriorModelMetrics"))
  {
    m_priorModelMetrics = jsonValue.GetString("PriorModelMetrics");

  }

  if(jsonValue.ValueExists("RetrainingAvailableDataInDays"))
  {
    m_retrainingAvailableDataInDays = jsonValue.GetInteger("RetrainingAvailableDataInDays");

  }

  if(jsonValue.ValueExists("AutoPromotionResult"))
  {
    m_autoPromotionResult = AutoPromotionResultMapper::GetAutoPromotionResultForName(jsonValue.GetString("AutoPromotionResult"));

  }

  if(jsonValue.ValueExists("AutoPromotionResultReason"))
  {
    m_autoPromotionResultReason = jsonValue.GetString("AutoPromotionResultReason");

  }

  if(jsonValue.ValueExists("ModelDiagnosticsOutputConfiguration"))
  {
    m_modelDiagnosticsOutputConfiguration = jsonValue.GetObject("ModelDiagnosticsOutputConfiguration");

  }

  if(jsonValue.ValueExists("ModelDiagnosticsResultsObject"))
  {
    m_modelDiagnosticsResultsObject = jsonValue.GetObject("ModelDiagnosticsResultsObject");

  }

  if(jsonValue.ValueExists("ModelQuality"))
  {
    m_modelQuality = ModelQualityMapper::GetModelQualityForName(jsonValue.GetString("ModelQuality"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
