/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/CreateCapacityProviderRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateCapacityProviderRequest::SerializePayload() const {
  JsonValue payload;

  if (m_capacityProviderNameHasBeenSet) {
    payload.WithString("CapacityProviderName", m_capacityProviderName);
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_permissionsConfigHasBeenSet) {
    payload.WithObject("PermissionsConfig", m_permissionsConfig.Jsonize());
  }

  if (m_instanceRequirementsHasBeenSet) {
    payload.WithObject("InstanceRequirements", m_instanceRequirements.Jsonize());
  }

  if (m_capacityProviderScalingConfigHasBeenSet) {
    payload.WithObject("CapacityProviderScalingConfig", m_capacityProviderScalingConfig.Jsonize());
  }

  if (m_kmsKeyArnHasBeenSet) {
    payload.WithString("KmsKeyArn", m_kmsKeyArn);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
