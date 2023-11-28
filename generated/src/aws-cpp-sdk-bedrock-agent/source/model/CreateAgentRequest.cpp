/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/CreateAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAgentRequest::CreateAgentRequest() : 
    m_agentNameHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_instructionHasBeenSet(false),
    m_foundationModelHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_idleSessionTTLInSeconds(0),
    m_idleSessionTTLInSecondsHasBeenSet(false),
    m_agentResourceRoleArnHasBeenSet(false),
    m_customerEncryptionKeyArnHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_promptOverrideConfigurationHasBeenSet(false)
{
}

Aws::String CreateAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentNameHasBeenSet)
  {
   payload.WithString("agentName", m_agentName);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  if(m_instructionHasBeenSet)
  {
   payload.WithString("instruction", m_instruction);

  }

  if(m_foundationModelHasBeenSet)
  {
   payload.WithString("foundationModel", m_foundationModel);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_idleSessionTTLInSecondsHasBeenSet)
  {
   payload.WithInteger("idleSessionTTLInSeconds", m_idleSessionTTLInSeconds);

  }

  if(m_agentResourceRoleArnHasBeenSet)
  {
   payload.WithString("agentResourceRoleArn", m_agentResourceRoleArn);

  }

  if(m_customerEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("customerEncryptionKeyArn", m_customerEncryptionKeyArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_promptOverrideConfigurationHasBeenSet)
  {
   payload.WithObject("promptOverrideConfiguration", m_promptOverrideConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




