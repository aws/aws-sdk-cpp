/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PutResourcePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutResourcePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_policyHasBeenSet) {
    payload.WithString("policy", m_policy);
  }

  if (m_expectedRevisionIdHasBeenSet) {
    payload.WithString("expectedRevisionId", m_expectedRevisionId);
  }

  return payload.View().WriteReadable();
}
