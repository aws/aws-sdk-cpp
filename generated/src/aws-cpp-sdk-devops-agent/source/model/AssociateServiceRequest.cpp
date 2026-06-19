/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-agent/model/AssociateServiceRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateServiceRequest::SerializePayload() const {
  JsonValue payload;

  if (m_serviceIdHasBeenSet) {
    payload.WithString("serviceId", m_serviceId);
  }

  if (m_configurationHasBeenSet) {
    payload.WithObject("configuration", m_configuration.Jsonize());
  }

  if (m_capabilitiesHasBeenSet) {
    JsonValue capabilitiesJsonMap;
    for (auto& capabilitiesItem : m_capabilities) {
      capabilitiesJsonMap.WithObject(CapabilityTypeMapper::GetNameForCapabilityType(capabilitiesItem.first),
                                     capabilitiesItem.second.Jsonize());
    }
    payload.WithObject("capabilities", std::move(capabilitiesJsonMap));
  }

  return payload.View().WriteReadable();
}
