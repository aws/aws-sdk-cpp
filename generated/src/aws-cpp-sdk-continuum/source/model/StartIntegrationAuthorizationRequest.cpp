/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/StartIntegrationAuthorizationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartIntegrationAuthorizationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_providerTypeHasBeenSet) {
    payload.WithString("providerType",
                       IntegrationAuthorizationProviderTypeMapper::GetNameForIntegrationAuthorizationProviderType(m_providerType));
  }

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  return payload.View().WriteReadable();
}
