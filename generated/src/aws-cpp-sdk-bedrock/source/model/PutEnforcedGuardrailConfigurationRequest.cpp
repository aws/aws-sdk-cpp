/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/PutEnforcedGuardrailConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutEnforcedGuardrailConfigurationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_configIdHasBeenSet) {
    payload.WithString("configId", m_configId);
  }

  if (m_guardrailInferenceConfigHasBeenSet) {
    payload.WithObject("guardrailInferenceConfig", m_guardrailInferenceConfig.Jsonize());
  }

  return payload.View().WriteReadable();
}
