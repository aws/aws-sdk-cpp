/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CreateAgentActionGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateAgentActionGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_actionGroupNameHasBeenSet)
  {
   payload.WithString("actionGroupName", m_actionGroupName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_parentActionGroupSignatureHasBeenSet)
  {
   payload.WithString("parentActionGroupSignature", ActionGroupSignatureMapper::GetNameForActionGroupSignature(m_parentActionGroupSignature));
  }

  if(m_parentActionGroupSignatureParamsHasBeenSet)
  {
   JsonValue parentActionGroupSignatureParamsJsonMap;
   for(auto& parentActionGroupSignatureParamsItem : m_parentActionGroupSignatureParams)
   {
     parentActionGroupSignatureParamsJsonMap.WithString(parentActionGroupSignatureParamsItem.first, parentActionGroupSignatureParamsItem.second);
   }
   payload.WithObject("parentActionGroupSignatureParams", std::move(parentActionGroupSignatureParamsJsonMap));

  }

  if(m_actionGroupExecutorHasBeenSet)
  {
   payload.WithObject("actionGroupExecutor", m_actionGroupExecutor.Jsonize());

  }

  if(m_apiSchemaHasBeenSet)
  {
   payload.WithObject("apiSchema", m_apiSchema.Jsonize());

  }

  if(m_actionGroupStateHasBeenSet)
  {
   payload.WithString("actionGroupState", ActionGroupStateMapper::GetNameForActionGroupState(m_actionGroupState));
  }

  if(m_functionSchemaHasBeenSet)
  {
   payload.WithObject("functionSchema", m_functionSchema.Jsonize());

  }

  return payload.View().WriteReadable();
}




