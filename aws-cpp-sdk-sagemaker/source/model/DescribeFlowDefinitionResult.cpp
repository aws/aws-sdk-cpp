/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/DescribeFlowDefinitionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFlowDefinitionResult::DescribeFlowDefinitionResult() : 
    m_flowDefinitionStatus(FlowDefinitionStatus::NOT_SET)
{
}

DescribeFlowDefinitionResult::DescribeFlowDefinitionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_flowDefinitionStatus(FlowDefinitionStatus::NOT_SET)
{
  *this = result;
}

DescribeFlowDefinitionResult& DescribeFlowDefinitionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FlowDefinitionArn"))
  {
    m_flowDefinitionArn = jsonValue.GetString("FlowDefinitionArn");

  }

  if(jsonValue.ValueExists("FlowDefinitionName"))
  {
    m_flowDefinitionName = jsonValue.GetString("FlowDefinitionName");

  }

  if(jsonValue.ValueExists("FlowDefinitionStatus"))
  {
    m_flowDefinitionStatus = FlowDefinitionStatusMapper::GetFlowDefinitionStatusForName(jsonValue.GetString("FlowDefinitionStatus"));

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("HumanLoopRequestSource"))
  {
    m_humanLoopRequestSource = jsonValue.GetObject("HumanLoopRequestSource");

  }

  if(jsonValue.ValueExists("HumanLoopActivationConfig"))
  {
    m_humanLoopActivationConfig = jsonValue.GetObject("HumanLoopActivationConfig");

  }

  if(jsonValue.ValueExists("HumanLoopConfig"))
  {
    m_humanLoopConfig = jsonValue.GetObject("HumanLoopConfig");

  }

  if(jsonValue.ValueExists("OutputConfig"))
  {
    m_outputConfig = jsonValue.GetObject("OutputConfig");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }



  return *this;
}
