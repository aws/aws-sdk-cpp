/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeModelResult.h>
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

DescribeModelResult::DescribeModelResult() : 
    m_status(ModelStatus::NOT_SET),
    m_activeModelVersion(0),
    m_previousActiveModelVersion(0),
    m_latestScheduledRetrainingStatus(ModelVersionStatus::NOT_SET),
    m_latestScheduledRetrainingModelVersion(0),
    m_latestScheduledRetrainingAvailableDataInDays(0),
    m_retrainingSchedulerStatus(RetrainingSchedulerStatus::NOT_SET),
    m_modelQuality(ModelQuality::NOT_SET)
{
}

DescribeModelResult::DescribeModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ModelStatus::NOT_SET),
    m_activeModelVersion(0),
    m_previousActiveModelVersion(0),
    m_latestScheduledRetrainingStatus(ModelVersionStatus::NOT_SET),
    m_latestScheduledRetrainingModelVersion(0),
    m_latestScheduledRetrainingAvailableDataInDays(0),
    m_retrainingSchedulerStatus(RetrainingSchedulerStatus::NOT_SET),
    m_modelQuality(ModelQuality::NOT_SET)
{
  *this = result;
}

DescribeModelResult& DescribeModelResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("Status"));

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

  if(jsonValue.ValueExists("ActiveModelVersion"))
  {
    m_activeModelVersion = jsonValue.GetInt64("ActiveModelVersion");

  }

  if(jsonValue.ValueExists("ActiveModelVersionArn"))
  {
    m_activeModelVersionArn = jsonValue.GetString("ActiveModelVersionArn");

  }

  if(jsonValue.ValueExists("ModelVersionActivatedAt"))
  {
    m_modelVersionActivatedAt = jsonValue.GetDouble("ModelVersionActivatedAt");

  }

  if(jsonValue.ValueExists("PreviousActiveModelVersion"))
  {
    m_previousActiveModelVersion = jsonValue.GetInt64("PreviousActiveModelVersion");

  }

  if(jsonValue.ValueExists("PreviousActiveModelVersionArn"))
  {
    m_previousActiveModelVersionArn = jsonValue.GetString("PreviousActiveModelVersionArn");

  }

  if(jsonValue.ValueExists("PreviousModelVersionActivatedAt"))
  {
    m_previousModelVersionActivatedAt = jsonValue.GetDouble("PreviousModelVersionActivatedAt");

  }

  if(jsonValue.ValueExists("PriorModelMetrics"))
  {
    m_priorModelMetrics = jsonValue.GetString("PriorModelMetrics");

  }

  if(jsonValue.ValueExists("LatestScheduledRetrainingFailedReason"))
  {
    m_latestScheduledRetrainingFailedReason = jsonValue.GetString("LatestScheduledRetrainingFailedReason");

  }

  if(jsonValue.ValueExists("LatestScheduledRetrainingStatus"))
  {
    m_latestScheduledRetrainingStatus = ModelVersionStatusMapper::GetModelVersionStatusForName(jsonValue.GetString("LatestScheduledRetrainingStatus"));

  }

  if(jsonValue.ValueExists("LatestScheduledRetrainingModelVersion"))
  {
    m_latestScheduledRetrainingModelVersion = jsonValue.GetInt64("LatestScheduledRetrainingModelVersion");

  }

  if(jsonValue.ValueExists("LatestScheduledRetrainingStartTime"))
  {
    m_latestScheduledRetrainingStartTime = jsonValue.GetDouble("LatestScheduledRetrainingStartTime");

  }

  if(jsonValue.ValueExists("LatestScheduledRetrainingAvailableDataInDays"))
  {
    m_latestScheduledRetrainingAvailableDataInDays = jsonValue.GetInteger("LatestScheduledRetrainingAvailableDataInDays");

  }

  if(jsonValue.ValueExists("NextScheduledRetrainingStartDate"))
  {
    m_nextScheduledRetrainingStartDate = jsonValue.GetDouble("NextScheduledRetrainingStartDate");

  }

  if(jsonValue.ValueExists("AccumulatedInferenceDataStartTime"))
  {
    m_accumulatedInferenceDataStartTime = jsonValue.GetDouble("AccumulatedInferenceDataStartTime");

  }

  if(jsonValue.ValueExists("AccumulatedInferenceDataEndTime"))
  {
    m_accumulatedInferenceDataEndTime = jsonValue.GetDouble("AccumulatedInferenceDataEndTime");

  }

  if(jsonValue.ValueExists("RetrainingSchedulerStatus"))
  {
    m_retrainingSchedulerStatus = RetrainingSchedulerStatusMapper::GetRetrainingSchedulerStatusForName(jsonValue.GetString("RetrainingSchedulerStatus"));

  }

  if(jsonValue.ValueExists("ModelDiagnosticsOutputConfiguration"))
  {
    m_modelDiagnosticsOutputConfiguration = jsonValue.GetObject("ModelDiagnosticsOutputConfiguration");

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
