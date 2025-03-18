/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ConverseRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String ConverseRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_messagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> messagesJsonList(m_messages.size());
   for(unsigned messagesIndex = 0; messagesIndex < messagesJsonList.GetLength(); ++messagesIndex)
   {
     messagesJsonList[messagesIndex].AsObject(m_messages[messagesIndex].Jsonize());
   }
   payload.WithArray("messages", std::move(messagesJsonList));

  }

  if(m_systemHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> systemJsonList(m_system.size());
   for(unsigned systemIndex = 0; systemIndex < systemJsonList.GetLength(); ++systemIndex)
   {
     systemJsonList[systemIndex].AsObject(m_system[systemIndex].Jsonize());
   }
   payload.WithArray("system", std::move(systemJsonList));

  }

  if(m_inferenceConfigHasBeenSet)
  {
   payload.WithObject("inferenceConfig", m_inferenceConfig.Jsonize());

  }

  if(m_toolConfigHasBeenSet)
  {
   payload.WithObject("toolConfig", m_toolConfig.Jsonize());

  }

  if(m_guardrailConfigHasBeenSet)
  {
   payload.WithObject("guardrailConfig", m_guardrailConfig.Jsonize());

  }

  if(m_additionalModelRequestFieldsHasBeenSet)
  {
    if(!m_additionalModelRequestFields.View().IsNull())
    {
       payload.WithObject("additionalModelRequestFields", JsonValue(m_additionalModelRequestFields.View()));
    }
  }

  if(m_promptVariablesHasBeenSet)
  {
   JsonValue promptVariablesJsonMap;
   for(auto& promptVariablesItem : m_promptVariables)
   {
     promptVariablesJsonMap.WithObject(promptVariablesItem.first, promptVariablesItem.second.Jsonize());
   }
   payload.WithObject("promptVariables", std::move(promptVariablesJsonMap));

  }

  if(m_additionalModelResponseFieldPathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> additionalModelResponseFieldPathsJsonList(m_additionalModelResponseFieldPaths.size());
   for(unsigned additionalModelResponseFieldPathsIndex = 0; additionalModelResponseFieldPathsIndex < additionalModelResponseFieldPathsJsonList.GetLength(); ++additionalModelResponseFieldPathsIndex)
   {
     additionalModelResponseFieldPathsJsonList[additionalModelResponseFieldPathsIndex].AsString(m_additionalModelResponseFieldPaths[additionalModelResponseFieldPathsIndex]);
   }
   payload.WithArray("additionalModelResponseFieldPaths", std::move(additionalModelResponseFieldPathsJsonList));

  }

  if(m_requestMetadataHasBeenSet)
  {
   JsonValue requestMetadataJsonMap;
   for(auto& requestMetadataItem : m_requestMetadata)
   {
     requestMetadataJsonMap.WithString(requestMetadataItem.first, requestMetadataItem.second);
   }
   payload.WithObject("requestMetadata", std::move(requestMetadataJsonMap));

  }

  if(m_performanceConfigHasBeenSet)
  {
   payload.WithObject("performanceConfig", m_performanceConfig.Jsonize());

  }

  return payload.View().WriteReadable();
}




