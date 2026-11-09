/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/UpdateIntegrationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateIntegrationRequest::SerializePayload() const {
  JsonValue payload;

  if (m_providerConfigurationHasBeenSet) {
    payload.WithObject("providerConfiguration", m_providerConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
