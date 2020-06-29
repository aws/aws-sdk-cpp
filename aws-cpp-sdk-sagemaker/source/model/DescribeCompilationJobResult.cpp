/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeCompilationJobResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeCompilationJobResult::DescribeCompilationJobResult() : 
    m_compilationJobStatus(CompilationJobStatus::NOT_SET)
{
}

DescribeCompilationJobResult::DescribeCompilationJobResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_compilationJobStatus(CompilationJobStatus::NOT_SET)
{
  *this = result;
}

DescribeCompilationJobResult& DescribeCompilationJobResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CompilationJobName"))
  {
    m_compilationJobName = jsonValue.GetString("CompilationJobName");

  }

  if(jsonValue.ValueExists("CompilationJobArn"))
  {
    m_compilationJobArn = jsonValue.GetString("CompilationJobArn");

  }

  if(jsonValue.ValueExists("CompilationJobStatus"))
  {
    m_compilationJobStatus = CompilationJobStatusMapper::GetCompilationJobStatusForName(jsonValue.GetString("CompilationJobStatus"));

  }

  if(jsonValue.ValueExists("CompilationStartTime"))
  {
    m_compilationStartTime = jsonValue.GetDouble("CompilationStartTime");

  }

  if(jsonValue.ValueExists("CompilationEndTime"))
  {
    m_compilationEndTime = jsonValue.GetDouble("CompilationEndTime");

  }

  if(jsonValue.ValueExists("StoppingCondition"))
  {
    m_stoppingCondition = jsonValue.GetObject("StoppingCondition");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("ModelArtifacts"))
  {
    m_modelArtifacts = jsonValue.GetObject("ModelArtifacts");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("InputConfig"))
  {
    m_inputConfig = jsonValue.GetObject("InputConfig");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }



  return *this;
}
