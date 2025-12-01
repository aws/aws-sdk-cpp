/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/CreateCapabilityRequest.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCapabilityRequest::SerializePayload() const {
  JsonValue payload;

  if (m_capabilityNameHasBeenSet) {
    payload.WithString("capabilityName", m_capabilityName);
  }

  if (m_clientRequestTokenHasBeenSet) {
    payload.WithString("clientRequestToken", m_clientRequestToken);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("type", CapabilityTypeMapper::GetNameForCapabilityType(m_type));
  }

  if (m_roleArnHasBeenSet) {
    payload.WithString("roleArn", m_roleArn);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("tags", std::move(tagsJsonMap));
  }

  if (m_deletePropagationPolicyHasBeenSet) {
    payload.WithString("deletePropagationPolicy",
                       CapabilityDeletePropagationPolicyMapper::GetNameForCapabilityDeletePropagationPolicy(m_deletePropagationPolicy));
  }

  return payload.View().WriteReadable();
}
