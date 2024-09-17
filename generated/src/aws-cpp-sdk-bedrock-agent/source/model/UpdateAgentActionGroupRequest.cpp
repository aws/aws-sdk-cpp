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
    m_actionGroupExecutorHasBeenSet(false),
    m_actionGroupIdHasBeenSet(false),
    m_actionGroupNameHasBeenSet(false),
    m_actionGroupState(ActionGroupState::NOT_SET),
    m_actionGroupStateHasBeenSet(false),
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false),
    m_apiSchemaHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_functionSchemaHasBeenSet(false),
    m_parentActionGroupSignature(ActionGroupSignature::NOT_SET),
    m_parentActionGroupSignatureHasBeenSet(false)
{
}

Aws::String UpdateAgentActionGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionGroupExecutorHasBeenSet)
  {
   payload.WithObject("actionGroupExecutor", m_actionGroupExecutor.Jsonize());

  }

  if(m_actionGroupNameHasBeenSet)
  {
   payload.WithString("actionGroupName", m_actionGroupName);

  }

  if(m_actionGroupStateHasBeenSet)
  {
   payload.WithString("actionGroupState", ActionGroupStateMapper::GetNameForActionGroupState(m_actionGroupState));
  }

  if(m_apiSchemaHasBeenSet)
  {
   payload.WithObject("apiSchema", m_apiSchema.Jsonize());

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_functionSchemaHasBeenSet)
  {
   payload.WithObject("functionSchema", m_functionSchema.Jsonize());

  }

  if(m_parentActionGroupSignatureHasBeenSet)
  {
   payload.WithString("parentActionGroupSignature", ActionGroupSignatureMapper::GetNameForActionGroupSignature(m_parentActionGroupSignature));
  }

  return payload.View().WriteReadable();
}




