/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

AgentAlreadyRunningAssessment::AgentAlreadyRunningAssessment(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_assessmentRunArnHasBeenSet(false)
{
  *this = jsonValue;
}

AgentAlreadyRunningAssessment& AgentAlreadyRunningAssessment::operator =(JsonView jsonValue)
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
