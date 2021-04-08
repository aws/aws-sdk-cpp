/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeModelResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeModelResult::DescribeModelResult() : 
    m_status(ModelStatus::NOT_SET)
{
}

DescribeModelResult::DescribeModelResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ModelStatus::NOT_SET)
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



  return *this;
}
