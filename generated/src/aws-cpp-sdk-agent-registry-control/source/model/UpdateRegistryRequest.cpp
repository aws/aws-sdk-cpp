/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/UpdateRegistryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AgentRegistryControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateRegistryRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithObject("description", m_description.Jsonize());
  }

  if (m_discoveryConfigurationHasBeenSet) {
    payload.WithObject("discoveryConfiguration", m_discoveryConfiguration.Jsonize());
  }

  if (m_approvalConfigurationHasBeenSet) {
    payload.WithObject("approvalConfiguration", m_approvalConfiguration.Jsonize());
  }

  if (m_autoDetectionConfigurationHasBeenSet) {
    payload.WithObject("autoDetectionConfiguration", m_autoDetectionConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
