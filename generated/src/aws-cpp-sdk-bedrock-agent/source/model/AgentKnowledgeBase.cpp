/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentKnowledgeBase.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

AgentKnowledgeBase::AgentKnowledgeBase() : 
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_knowledgeBaseState(KnowledgeBaseState::NOT_SET),
    m_knowledgeBaseStateHasBeenSet(false)
{
}

AgentKnowledgeBase::AgentKnowledgeBase(JsonView jsonValue) : 
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false),
    m_knowledgeBaseState(KnowledgeBaseState::NOT_SET),
    m_knowledgeBaseStateHasBeenSet(false)
{
  *this = jsonValue;
}

AgentKnowledgeBase& AgentKnowledgeBase::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("agentId"))
  {
    m_agentId = jsonValue.GetString("agentId");

    m_agentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("agentVersion"))
  {
    m_agentVersion = jsonValue.GetString("agentVersion");

    m_agentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseId"))
  {
    m_knowledgeBaseId = jsonValue.GetString("knowledgeBaseId");

    m_knowledgeBaseIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("knowledgeBaseState"))
  {
    m_knowledgeBaseState = KnowledgeBaseStateMapper::GetKnowledgeBaseStateForName(jsonValue.GetString("knowledgeBaseState"));

    m_knowledgeBaseStateHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentKnowledgeBase::Jsonize() const
{
  JsonValue payload;

  if(m_agentIdHasBeenSet)
  {
   payload.WithString("agentId", m_agentId);

  }

  if(m_agentVersionHasBeenSet)
  {
   payload.WithString("agentVersion", m_agentVersion);

  }

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_knowledgeBaseStateHasBeenSet)
  {
   payload.WithString("knowledgeBaseState", KnowledgeBaseStateMapper::GetNameForKnowledgeBaseState(m_knowledgeBaseState));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
