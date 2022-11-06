/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector/model/AgentsAlreadyRunningAssessmentException.h>
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

AgentsAlreadyRunningAssessmentException::AgentsAlreadyRunningAssessmentException() : 
    m_messageHasBeenSet(false),
    m_agentsHasBeenSet(false),
    m_agentsTruncated(false),
    m_agentsTruncatedHasBeenSet(false),
    m_canRetry(false),
    m_canRetryHasBeenSet(false)
{
}

AgentsAlreadyRunningAssessmentException::AgentsAlreadyRunningAssessmentException(JsonView jsonValue) : 
    m_messageHasBeenSet(false),
    m_agentsHasBeenSet(false),
    m_agentsTruncated(false),
    m_agentsTruncatedHasBeenSet(false),
    m_canRetry(false),
    m_canRetryHasBeenSet(false)
{
  *this = jsonValue;
}

AgentsAlreadyRunningAssessmentException& AgentsAlreadyRunningAssessmentException::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("message"))
  {
    m_message = jsonValue.GetString("message");

    m_messageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agents"))
  {
    Aws::Utils::Array<JsonView> agentsJsonList = jsonValue.GetArray("agents");
    for(unsigned agentsIndex = 0; agentsIndex < agentsJsonList.GetLength(); ++agentsIndex)
    {
      m_agents.push_back(agentsJsonList[agentsIndex].AsObject());
    }
    m_agentsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentsTruncated"))
  {
    m_agentsTruncated = jsonValue.GetBool("agentsTruncated");

    m_agentsTruncatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("canRetry"))
  {
    m_canRetry = jsonValue.GetBool("canRetry");

    m_canRetryHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentsAlreadyRunningAssessmentException::Jsonize() const
{
  JsonValue payload;

  if(m_messageHasBeenSet)
  {
   payload.WithString("message", m_message);

  }

  if(m_agentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> agentsJsonList(m_agents.size());
   for(unsigned agentsIndex = 0; agentsIndex < agentsJsonList.GetLength(); ++agentsIndex)
   {
     agentsJsonList[agentsIndex].AsObject(m_agents[agentsIndex].Jsonize());
   }
   payload.WithArray("agents", std::move(agentsJsonList));

  }

  if(m_agentsTruncatedHasBeenSet)
  {
   payload.WithBool("agentsTruncated", m_agentsTruncated);

  }

  if(m_canRetryHasBeenSet)
  {
   payload.WithBool("canRetry", m_canRetry);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector
} // namespace Aws
