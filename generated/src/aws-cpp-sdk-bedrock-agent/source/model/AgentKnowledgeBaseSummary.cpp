/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AgentKnowledgeBaseSummary.h>
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

AgentKnowledgeBaseSummary::AgentKnowledgeBaseSummary() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_knowledgeBaseState(KnowledgeBaseState::NOT_SET),
    m_knowledgeBaseStateHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

AgentKnowledgeBaseSummary::AgentKnowledgeBaseSummary(JsonView jsonValue) : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_knowledgeBaseState(KnowledgeBaseState::NOT_SET),
    m_knowledgeBaseStateHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

AgentKnowledgeBaseSummary& AgentKnowledgeBaseSummary::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("knowledgeBaseState"))
  {
    m_knowledgeBaseState = KnowledgeBaseStateMapper::GetKnowledgeBaseStateForName(jsonValue.GetString("knowledgeBaseState"));

    m_knowledgeBaseStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue AgentKnowledgeBaseSummary::Jsonize() const
{
  JsonValue payload;

  if(m_knowledgeBaseIdHasBeenSet)
  {
   payload.WithString("knowledgeBaseId", m_knowledgeBaseId);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_knowledgeBaseStateHasBeenSet)
  {
   payload.WithString("knowledgeBaseState", KnowledgeBaseStateMapper::GetNameForKnowledgeBaseState(m_knowledgeBaseState));
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
