/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/CompleteResourceTokenAuthRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CompleteResourceTokenAuthRequest::SerializePayload() const {
  JsonValue payload;

  if (m_userIdentifierHasBeenSet) {
    payload.WithObject("userIdentifier", m_userIdentifier.Jsonize());
  }

  if (m_sessionUriHasBeenSet) {
    payload.WithString("sessionUri", m_sessionUri);
  }

  return payload.View().WriteReadable();
}
