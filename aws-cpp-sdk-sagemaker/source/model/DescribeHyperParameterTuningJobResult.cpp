﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sagemaker/model/DescribeHyperParameterTuningJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHyperParameterTuningJobResult::DescribeHyperParameterTuningJobResult() : 
    m_hyperParameterTuningJobStatus(HyperParameterTuningJobStatus::NOT_SET)
{
}

DescribeHyperParameterTuningJobResult::DescribeHyperParameterTuningJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_hyperParameterTuningJobStatus(HyperParameterTuningJobStatus::NOT_SET)
{
  *this = result;
}

DescribeHyperParameterTuningJobResult& DescribeHyperParameterTuningJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HyperParameterTuningJobName"))
  {
    m_hyperParameterTuningJobName = jsonValue.GetString("HyperParameterTuningJobName");

  }

  if(jsonValue.ValueExists("HyperParameterTuningJobArn"))
  {
    m_hyperParameterTuningJobArn = jsonValue.GetString("HyperParameterTuningJobArn");

  }

  if(jsonValue.ValueExists("HyperParameterTuningJobConfig"))
  {
    m_hyperParameterTuningJobConfig = jsonValue.GetObject("HyperParameterTuningJobConfig");

  }

  if(jsonValue.ValueExists("TrainingJobDefinition"))
  {
    m_trainingJobDefinition = jsonValue.GetObject("TrainingJobDefinition");

  }

  if(jsonValue.ValueExists("HyperParameterTuningJobStatus"))
  {
    m_hyperParameterTuningJobStatus = HyperParameterTuningJobStatusMapper::GetHyperParameterTuningJobStatusForName(jsonValue.GetString("HyperParameterTuningJobStatus"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("HyperParameterTuningEndTime"))
  {
    m_hyperParameterTuningEndTime = jsonValue.GetDouble("HyperParameterTuningEndTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("TrainingJobStatusCounters"))
  {
    m_trainingJobStatusCounters = jsonValue.GetObject("TrainingJobStatusCounters");

  }

  if(jsonValue.ValueExists("ObjectiveStatusCounters"))
  {
    m_objectiveStatusCounters = jsonValue.GetObject("ObjectiveStatusCounters");

  }

  if(jsonValue.ValueExists("BestTrainingJob"))
  {
    m_bestTrainingJob = jsonValue.GetObject("BestTrainingJob");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }



  return *this;
}
