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

#include <aws/inspector/model/AgentAlreadyRunningAssessment.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector
{
namespace Model
{

AgentAlreadyRunningAssessment::AgentAlreadyRunningAssessment() : 
    m_agentIdHasBeenSet(false),
    m_assessmentRunArnHasBeenSet(false)
{
}

AgentAlreadyRunningAssessment::AgentAlreadyRunningAssessment(const JsonValue& jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_assessmentRunArnHasBeenSet(false)
{
  *this = jsonValue;
}

AgentAlreadyRunningAssessment& AgentAlreadyRunningAssessment::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("assessmentRunArn"))
  {
    m_assessmentRunArn = jsonValue.GetString("assessmentRunArn");

    m_assessmentRunArnHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentAlreadyRunningAssessment::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_assessmentRunArnHasBeenSet)
  {
   payload.WithString("assessmentRunArn", m_assessmentRunArn);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
