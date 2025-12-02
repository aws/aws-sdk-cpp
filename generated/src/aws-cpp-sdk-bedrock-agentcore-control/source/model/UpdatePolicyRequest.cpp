/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatePolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePolicyRequest::SerializePayload() const {
  JsonValue payload;

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_definitionHasBeenSet) {
    payload.WithObject("definition", m_definition.Jsonize());
  }

  if (m_validationModeHasBeenSet) {
    payload.WithString("validationMode", PolicyValidationModeMapper::GetNameForPolicyValidationMode(m_validationMode));
  }

  return payload.View().WriteReadable();
}
