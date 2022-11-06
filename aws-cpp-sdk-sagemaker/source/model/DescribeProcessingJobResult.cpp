/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeProcessingJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProcessingJobResult::DescribeProcessingJobResult() : 
    m_processingJobStatus(ProcessingJobStatus::NOT_SET)
{
}

DescribeProcessingJobResult::DescribeProcessingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_processingJobStatus(ProcessingJobStatus::NOT_SET)
{
  *this = result;
}

DescribeProcessingJobResult& DescribeProcessingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProcessingInputs"))
  {
    Aws::Utils::Array<JsonView> processingInputsJsonList = jsonValue.GetArray("ProcessingInputs");
    for(unsigned processingInputsIndex = 0; processingInputsIndex < processingInputsJsonList.GetLength(); ++processingInputsIndex)
    {
      m_processingInputs.push_back(processingInputsJsonList[processingInputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProcessingOutputConfig"))
  {
    m_processingOutputConfig = jsonValue.GetObject("ProcessingOutputConfig");

  }

  if(jsonValue.ValueExists("ProcessingJobName"))
  {
    m_processingJobName = jsonValue.GetString("ProcessingJobName");

  }

  if(jsonValue.ValueExists("ProcessingResources"))
  {
    m_processingResources = jsonValue.GetObject("ProcessingResources");

  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

  }

  if(jsonValue.ValueExists("AppSpecification"))
  {
    m_appSpecification = jsonValue.GetObject("AppSpecification");

  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("NetworkConfig"))
  {
    m_networkConfig = jsonValue.GetObject("NetworkConfig");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("ExperimentConfig"))
  {
    m_experimentConfig = jsonValue.GetObject("ExperimentConfig");

  }

  if(jsonValue.ValueExists("ProcessingJobArn"))
  {
    m_processingJobArn = jsonValue.GetString("ProcessingJobArn");

  }

  if(jsonValue.ValueExists("ProcessingJobStatus"))
  {
    m_processingJobStatus = ProcessingJobStatusMapper::GetProcessingJobStatusForName(jsonValue.GetString("ProcessingJobStatus"));

  }

  if(jsonValue.ValueExists("ExitMessage"))
  {
    m_exitMessage = jsonValue.GetString("ExitMessage");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("ProcessingEndTime"))
  {
    m_processingEndTime = jsonValue.GetDouble("ProcessingEndTime");

  }

  if(jsonValue.ValueExists("ProcessingStartTime"))
  {
    m_processingStartTime = jsonValue.GetDouble("ProcessingStartTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("MonitoringScheduleArn"))
  {
    m_monitoringScheduleArn = jsonValue.GetString("MonitoringScheduleArn");

  }

  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");

  }

  if(jsonValue.ValueExists("TrainingJobArn"))
  {
    m_trainingJobArn = jsonValue.GetString("TrainingJobArn");

  }



  return *this;
}
