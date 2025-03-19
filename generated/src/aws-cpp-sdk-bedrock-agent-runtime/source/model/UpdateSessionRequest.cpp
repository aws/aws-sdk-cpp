/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/UpdateSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSessionRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}




