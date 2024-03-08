/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/AssociateAgentKnowledgeBaseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AssociateAgentKnowledgeBaseRequest::AssociateAgentKnowledgeBaseRequest() : 
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_knowledgeBaseState(KnowledgeBaseState::NOT_SET),
    m_knowledgeBaseStateHasBeenSet(false)
{
}

Aws::String AssociateAgentKnowledgeBaseRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




