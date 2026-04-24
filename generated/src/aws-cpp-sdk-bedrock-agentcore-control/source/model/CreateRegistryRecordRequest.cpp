/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CreateRegistryRecordRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCoreControl::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRegistryRecordRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_descriptorTypeHasBeenSet) {
    payload.WithString("descriptorType", DescriptorTypeMapper::GetNameForDescriptorType(m_descriptorType));
  }

  if (m_descriptorsHasBeenSet) {
    payload.WithObject("descriptors", m_descriptors.Jsonize());
  }

  if (m_recordVersionHasBeenSet) {
    payload.WithString("recordVersion", m_recordVersion);
  }

  if (m_synchronizationTypeHasBeenSet) {
    payload.WithString("synchronizationType", SynchronizationTypeMapper::GetNameForSynchronizationType(m_synchronizationType));
  }

  if (m_synchronizationConfigurationHasBeenSet) {
    payload.WithObject("synchronizationConfiguration", m_synchronizationConfiguration.Jsonize());
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("clientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}
