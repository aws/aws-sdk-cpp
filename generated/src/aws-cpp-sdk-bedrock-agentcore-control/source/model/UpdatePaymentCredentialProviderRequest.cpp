/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/UpdatePaymentCredentialProviderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdatePaymentCredentialProviderRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_credentialProviderVendorHasBeenSet) {
    payload.WithString("credentialProviderVendor", PaymentCredentialProviderVendorTypeMapper::GetNameForPaymentCredentialProviderVendorType(
                                                       m_credentialProviderVendor));
  }

  if (m_providerConfigurationInputHasBeenSet) {
    payload.WithObject("providerConfigurationInput", m_providerConfigurationInput.Jsonize());
  }

  return payload.View().WriteReadable();
}
