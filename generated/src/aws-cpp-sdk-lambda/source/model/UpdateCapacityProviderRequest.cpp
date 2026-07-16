/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda/model/UpdateCapacityProviderRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateCapacityProviderRequest::SerializePayload() const {
  JsonValue payload;

  if (m_capacityProviderScalingConfigHasBeenSet) {
    payload.WithObject("CapacityProviderScalingConfig", m_capacityProviderScalingConfig.Jsonize());
  }

  if (m_propagateTagsHasBeenSet) {
    payload.WithObject("PropagateTags", m_propagateTags.Jsonize());
  }

  if (m_telemetryConfigHasBeenSet) {
    payload.WithObject("TelemetryConfig", m_telemetryConfig.Jsonize());
  }

  return payload.View().WriteReadable();
}
