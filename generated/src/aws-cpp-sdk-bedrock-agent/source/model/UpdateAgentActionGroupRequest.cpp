/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/UpdateAgentActionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAgentActionGroupRequest::UpdateAgentActionGroupRequest() : 
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_actionGroupIdHasBeenSet(false),
    m_actionGroupNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_parentActionGroupSignature(ActionGroupSignature::NOT_SET),
    m_parentActionGroupSignatureHasBeenSet(false),
    m_actionGroupExecutorHasBeenSet(false),
    m_actionGroupState(ActionGroupState::NOT_SET),
    m_actionGroupStateHasBeenSet(false),
    m_apiSchemaHasBeenSet(false)
{
}

Aws::String UpdateAgentActionGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionGroupNameHasBeenSet)
  {
   payload.WithString("actionGroupName", m_actionGroupName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_parentActionGroupSignatureHasBeenSet)
  {
   payload.WithString("parentActionGroupSignature", ActionGroupSignatureMapper::GetNameForActionGroupSignature(m_parentActionGroupSignature));
  }

  if(m_actionGroupExecutorHasBeenSet)
  {
   payload.WithObject("actionGroupExecutor", m_actionGroupExecutor.Jsonize());

  }

  if(m_actionGroupStateHasBeenSet)
  {
   payload.WithString("actionGroupState", ActionGroupStateMapper::GetNameForActionGroupState(m_actionGroupState));
  }

  if(m_apiSchemaHasBeenSet)
  {
   payload.WithObject("apiSchema", m_apiSchema.Jsonize());

  }

  return payload.View().WriteReadable();
}




