/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/IngestDataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String IngestDataRequest::SerializePayload() const {
  JsonValue payload;

  if (m_sourceHasBeenSet) {
    payload.WithObject("source", m_source.Jsonize());
  }

  if (m_contentTimestampHasBeenSet) {
    payload.WithDouble("contentTimestamp", m_contentTimestamp.SecondsWithMSPrecision());
  }

  if (m_actorIdHasBeenSet) {
    payload.WithString("actorId", m_actorId);
  }

  if (m_sessionIdHasBeenSet) {
    payload.WithString("sessionId", m_sessionId);
  }

  if (m_extractionConfigHasBeenSet) {
    payload.WithObject("extractionConfig", m_extractionConfig.Jsonize());
  }

  if (m_metadataHasBeenSet) {
    JsonValue metadataJsonMap;
    for (auto& metadataItem : m_metadata) {
      metadataJsonMap.WithObject(metadataItem.first, metadataItem.second.Jsonize());
    }
    payload.WithObject("metadata", std::move(metadataJsonMap));
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
