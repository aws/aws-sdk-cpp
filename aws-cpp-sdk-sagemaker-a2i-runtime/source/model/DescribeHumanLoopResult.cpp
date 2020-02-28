/*
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

#include <aws/sagemaker-a2i-runtime/model/DescribeHumanLoopResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AugmentedAIRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeHumanLoopResult::DescribeHumanLoopResult() : 
    m_humanLoopStatus(HumanLoopStatus::NOT_SET)
{
}

DescribeHumanLoopResult::DescribeHumanLoopResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_humanLoopStatus(HumanLoopStatus::NOT_SET)
{
  *this = result;
}

DescribeHumanLoopResult& DescribeHumanLoopResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("FailureReason"))
  {
    m_failureReason = jsonValue.GetString("FailureReason");

  }

  if(jsonValue.ValueExists("FailureCode"))
  {
    m_failureCode = jsonValue.GetString("FailureCode");

  }

  if(jsonValue.ValueExists("HumanLoopStatus"))
  {
    m_humanLoopStatus = HumanLoopStatusMapper::GetHumanLoopStatusForName(jsonValue.GetString("HumanLoopStatus"));

  }

  if(jsonValue.ValueExists("HumanLoopName"))
  {
    m_humanLoopName = jsonValue.GetString("HumanLoopName");

  }

  if(jsonValue.ValueExists("HumanLoopArn"))
  {
    m_humanLoopArn = jsonValue.GetString("HumanLoopArn");

  }

  if(jsonValue.ValueExists("FlowDefinitionArn"))
  {
    m_flowDefinitionArn = jsonValue.GetString("FlowDefinitionArn");

  }

  if(jsonValue.ValueExists("HumanLoopOutput"))
  {
    m_humanLoopOutput = jsonValue.GetObject("HumanLoopOutput");

  }



  return *this;
}
