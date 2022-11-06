/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeAutoMLJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAutoMLJobResult::DescribeAutoMLJobResult() : 
    m_problemType(ProblemType::NOT_SET),
    m_autoMLJobStatus(AutoMLJobStatus::NOT_SET),
    m_autoMLJobSecondaryStatus(AutoMLJobSecondaryStatus::NOT_SET),
    m_generateCandidateDefinitionsOnly(false)
{
}

DescribeAutoMLJobResult::DescribeAutoMLJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_problemType(ProblemType::NOT_SET),
    m_autoMLJobStatus(AutoMLJobStatus::NOT_SET),
    m_autoMLJobSecondaryStatus(AutoMLJobSecondaryStatus::NOT_SET),
    m_generateCandidateDefinitionsOnly(false)
{
  *this = result;
}

DescribeAutoMLJobResult& DescribeAutoMLJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AutoMLJobName"))
  {
    m_autoMLJobName = jsonValue.GetString("AutoMLJobName");

  }

  if(jsonValue.ValueExists("AutoMLJobArn"))
  {
    m_autoMLJobArn = jsonValue.GetString("AutoMLJobArn");

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

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("AutoMLJobObjective"))
  {
    m_autoMLJobObjective = jsonValue.GetObject("AutoMLJobObjective");

  }

  if(jsonValue.ValueExists("ProblemType"))
  {
    m_problemType = ProblemTypeMapper::GetProblemTypeForName(jsonValue.GetString("ProblemType"));

  }

  if(jsonValue.ValueExists("AutoMLJobConfig"))
  {
    m_autoMLJobConfig = jsonValue.GetObject("AutoMLJobConfig");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("EndTime"))
  {
    m_endTime = jsonValue.GetDouble("EndTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("PartialFailureReasons"))
  {
    Aws::Utils::Array<JsonView> partialFailureReasonsJsonList = jsonValue.GetArray("PartialFailureReasons");
    for(unsigned partialFailureReasonsIndex = 0; partialFailureReasonsIndex < partialFailureReasonsJsonList.GetLength(); ++partialFailureReasonsIndex)
    {
      m_partialFailureReasons.push_back(partialFailureReasonsJsonList[partialFailureReasonsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("BestCandidate"))
  {
    m_bestCandidate = jsonValue.GetObject("BestCandidate");

  }

  if(jsonValue.ValueExists("AutoMLJobStatus"))
  {
    m_autoMLJobStatus = AutoMLJobStatusMapper::GetAutoMLJobStatusForName(jsonValue.GetString("AutoMLJobStatus"));

  }

  if(jsonValue.ValueExists("AutoMLJobSecondaryStatus"))
  {
    m_autoMLJobSecondaryStatus = AutoMLJobSecondaryStatusMapper::GetAutoMLJobSecondaryStatusForName(jsonValue.GetString("AutoMLJobSecondaryStatus"));

  }

  if(jsonValue.ValueExists("GenerateCandidateDefinitionsOnly"))
  {
    m_generateCandidateDefinitionsOnly = jsonValue.GetBool("GenerateCandidateDefinitionsOnly");

  }

  if(jsonValue.ValueExists("AutoMLJobArtifacts"))
  {
    m_autoMLJobArtifacts = jsonValue.GetObject("AutoMLJobArtifacts");

  }

  if(jsonValue.ValueExists("ResolvedAttributes"))
  {
    m_resolvedAttributes = jsonValue.GetObject("ResolvedAttributes");

  }

  if(jsonValue.ValueExists("ModelDeployConfig"))
  {
    m_modelDeployConfig = jsonValue.GetObject("ModelDeployConfig");

  }

  if(jsonValue.ValueExists("ModelDeployResult"))
  {
    m_modelDeployResult = jsonValue.GetObject("ModelDeployResult");

  }



  return *this;
}
