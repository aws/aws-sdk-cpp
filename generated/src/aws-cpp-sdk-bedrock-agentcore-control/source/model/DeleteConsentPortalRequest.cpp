/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/DeleteConsentPortalRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteConsentPortalRequest::SerializePayload() const {
  JsonValue payload;

  if (m_consentPortalIdentifierHasBeenSet) {
    payload.WithString("consentPortalIdentifier", m_consentPortalIdentifier);
  }

  return payload.View().WriteReadable();
}
