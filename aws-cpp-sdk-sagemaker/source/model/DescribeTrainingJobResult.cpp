/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeTrainingJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeTrainingJobResult::DescribeTrainingJobResult() : 
    m_trainingJobStatus(TrainingJobStatus::NOT_SET),
    m_secondaryStatus(SecondaryStatus::NOT_SET),
    m_enableNetworkIsolation(false),
    m_enableInterContainerTrafficEncryption(false),
    m_enableManagedSpotTraining(false),
    m_trainingTimeInSeconds(0),
    m_billableTimeInSeconds(0),
    m_profilingStatus(ProfilingStatus::NOT_SET)
{
}

DescribeTrainingJobResult::DescribeTrainingJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_trainingJobStatus(TrainingJobStatus::NOT_SET),
    m_secondaryStatus(SecondaryStatus::NOT_SET),
    m_enableNetworkIsolation(false),
    m_enableInterContainerTrafficEncryption(false),
    m_enableManagedSpotTraining(false),
    m_trainingTimeInSeconds(0),
    m_billableTimeInSeconds(0),
    m_profilingStatus(ProfilingStatus::NOT_SET)
{
  *this = result;
}

DescribeTrainingJobResult& DescribeTrainingJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TrainingJobName"))
  {
    m_trainingJobName = jsonValue.GetString("TrainingJobName");

  }

  if(jsonValue.ValueExists("TrainingJobArn"))
  {
    m_trainingJobArn = jsonValue.GetString("TrainingJobArn");

  }

  if(jsonValue.ValueExists("TuningJobArn"))
  {
    m_tuningJobArn = jsonValue.GetString("TuningJobArn");

  }

  if(jsonValue.ValueExists("LabelingJobArn"))
  {
    m_labelingJobArn = jsonValue.GetString("LabelingJobArn");

  }

  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");

  }

  if(jsonValue.ValueExists("ModelArtifacts"))
  {
    m_modelArtifacts = jsonValue.GetObject("ModelArtifacts");

  }

  if(jsonValue.ValueExists("TrainingJobStatus"))
  {
    m_trainingJobStatus = TrainingJobStatusMapper::GetTrainingJobStatusForName(jsonValue.GetString("TrainingJobStatus"));

  }

  if(jsonValue.ValueExists("SecondaryStatus"))
  {
    m_secondaryStatus = SecondaryStatusMapper::GetSecondaryStatusForName(jsonValue.GetString("SecondaryStatus"));

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("HyperParameters"))
  {
    Aws::Map<Aws::String, JsonView> hyperParametersJsonMap = jsonValue.GetObject("HyperParameters").GetAllObjects();
    for(auto& hyperParametersItem : hyperParametersJsonMap)
    {
      m_hyperParameters[hyperParametersItem.first] = hyperParametersItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("AlgorithmSpecification"))
  {
    m_algorithmSpecification = jsonValue.GetObject("AlgorithmSpecification");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("InputDataConfig"))
  {
    Aws::Utils::Array<JsonView> inputDataConfigJsonList = jsonValue.GetArray("InputDataConfig");
    for(unsigned inputDataConfigIndex = 0; inputDataConfigIndex < inputDataConfigJsonList.GetLength(); ++inputDataConfigIndex)
    {
      m_inputDataConfig.push_back(inputDataConfigJsonList[inputDataConfigIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("OutputDataConfig"))
  {
    m_outputDataConfig = jsonValue.GetObject("OutputDataConfig");

  }

  if(jsonValue.ValueExists("ResourceConfig"))
  {
    m_resourceConfig = jsonValue.GetObject("ResourceConfig");

  }

  if(jsonValue.ValueExists("VpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("VpcConfig");

  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("TrainingStartTime"))
  {
    m_trainingStartTime = jsonValue.GetDouble("TrainingStartTime");

  }

  if(jsonValue.ValueExists("TrainingEndTime"))
  {
    m_trainingEndTime = jsonValue.GetDouble("TrainingEndTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("SecondaryStatusTransitions"))
  {
    Aws::Utils::Array<JsonView> secondaryStatusTransitionsJsonList = jsonValue.GetArray("SecondaryStatusTransitions");
    for(unsigned secondaryStatusTransitionsIndex = 0; secondaryStatusTransitionsIndex < secondaryStatusTransitionsJsonList.GetLength(); ++secondaryStatusTransitionsIndex)
    {
      m_secondaryStatusTransitions.push_back(secondaryStatusTransitionsJsonList[secondaryStatusTransitionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("FinalMetricDataList"))
  {
    Aws::Utils::Array<JsonView> finalMetricDataListJsonList = jsonValue.GetArray("FinalMetricDataList");
    for(unsigned finalMetricDataListIndex = 0; finalMetricDataListIndex < finalMetricDataListJsonList.GetLength(); ++finalMetricDataListIndex)
    {
      m_finalMetricDataList.push_back(finalMetricDataListJsonList[finalMetricDataListIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("EnableNetworkIsolation"))
  {
    m_enableNetworkIsolation = jsonValue.GetBool("EnableNetworkIsolation");

  }

  if(jsonValue.ValueExists("EnableInterContainerTrafficEncryption"))
  {
    m_enableInterContainerTrafficEncryption = jsonValue.GetBool("EnableInterContainerTrafficEncryption");

  }

  if(jsonValue.ValueExists("EnableManagedSpotTraining"))
  {
    m_enableManagedSpotTraining = jsonValue.GetBool("EnableManagedSpotTraining");

  }

  if(jsonValue.ValueExists("CheckpointConfig"))
  {
    m_checkpointConfig = jsonValue.GetObject("CheckpointConfig");

  }

  if(jsonValue.ValueExists("TrainingTimeInSeconds"))
  {
    m_trainingTimeInSeconds = jsonValue.GetInteger("TrainingTimeInSeconds");

  }

  if(jsonValue.ValueExists("BillableTimeInSeconds"))
  {
    m_billableTimeInSeconds = jsonValue.GetInteger("BillableTimeInSeconds");

  }

  if(jsonValue.ValueExists("DebugHookConfig"))
  {
    m_debugHookConfig = jsonValue.GetObject("DebugHookConfig");

  }

  if(jsonValue.ValueExists("ExperimentConfig"))
  {
    m_experimentConfig = jsonValue.GetObject("ExperimentConfig");

  }

  if(jsonValue.ValueExists("DebugRuleConfigurations"))
  {
    Aws::Utils::Array<JsonView> debugRuleConfigurationsJsonList = jsonValue.GetArray("DebugRuleConfigurations");
    for(unsigned debugRuleConfigurationsIndex = 0; debugRuleConfigurationsIndex < debugRuleConfigurationsJsonList.GetLength(); ++debugRuleConfigurationsIndex)
    {
      m_debugRuleConfigurations.push_back(debugRuleConfigurationsJsonList[debugRuleConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TensorBoardOutputConfig"))
  {
    m_tensorBoardOutputConfig = jsonValue.GetObject("TensorBoardOutputConfig");

  }

  if(jsonValue.ValueExists("DebugRuleEvaluationStatuses"))
  {
    Aws::Utils::Array<JsonView> debugRuleEvaluationStatusesJsonList = jsonValue.GetArray("DebugRuleEvaluationStatuses");
    for(unsigned debugRuleEvaluationStatusesIndex = 0; debugRuleEvaluationStatusesIndex < debugRuleEvaluationStatusesJsonList.GetLength(); ++debugRuleEvaluationStatusesIndex)
    {
      m_debugRuleEvaluationStatuses.push_back(debugRuleEvaluationStatusesJsonList[debugRuleEvaluationStatusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProfilerConfig"))
  {
    m_profilerConfig = jsonValue.GetObject("ProfilerConfig");

  }

  if(jsonValue.ValueExists("ProfilerRuleConfigurations"))
  {
    Aws::Utils::Array<JsonView> profilerRuleConfigurationsJsonList = jsonValue.GetArray("ProfilerRuleConfigurations");
    for(unsigned profilerRuleConfigurationsIndex = 0; profilerRuleConfigurationsIndex < profilerRuleConfigurationsJsonList.GetLength(); ++profilerRuleConfigurationsIndex)
    {
      m_profilerRuleConfigurations.push_back(profilerRuleConfigurationsJsonList[profilerRuleConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProfilerRuleEvaluationStatuses"))
  {
    Aws::Utils::Array<JsonView> profilerRuleEvaluationStatusesJsonList = jsonValue.GetArray("ProfilerRuleEvaluationStatuses");
    for(unsigned profilerRuleEvaluationStatusesIndex = 0; profilerRuleEvaluationStatusesIndex < profilerRuleEvaluationStatusesJsonList.GetLength(); ++profilerRuleEvaluationStatusesIndex)
    {
      m_profilerRuleEvaluationStatuses.push_back(profilerRuleEvaluationStatusesJsonList[profilerRuleEvaluationStatusesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ProfilingStatus"))
  {
    m_profilingStatus = ProfilingStatusMapper::GetProfilingStatusForName(jsonValue.GetString("ProfilingStatus"));

  }

  if(jsonValue.ValueExists("RetryStrategy"))
  {
    m_retryStrategy = jsonValue.GetObject("RetryStrategy");

  }

  if(jsonValue.ValueExists("Environment"))
  {
    Aws::Map<Aws::String, JsonView> environmentJsonMap = jsonValue.GetObject("Environment").GetAllObjects();
    for(auto& environmentItem : environmentJsonMap)
    {
      m_environment[environmentItem.first] = environmentItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("WarmPoolStatus"))
  {
    m_warmPoolStatus = jsonValue.GetObject("WarmPoolStatus");

  }



  return *this;
}
