/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/CreateSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateSessionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionMetadataHasBeenSet)
  {
   JsonValue sessionMetadataJsonMap;
   for(auto& sessionMetadataItem : m_sessionMetadata)
   {
     sessionMetadataJsonMap.WithString(sessionMetadataItem.first, sessionMetadataItem.second);
   }
   payload.WithObject("sessionMetadata", std::move(sessionMetadataJsonMap));

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("encryptionKeyArn", m_encryptionKeyArn);

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

  return payload.View().WriteReadable();
}




