/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotdeviceadvisor/model/UpdateSuiteDefinitionRequest.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSuiteDefinitionRequest::SerializePayload() const {
  JsonValue payload;

  if (m_suiteDefinitionConfigurationHasBeenSet) {
    payload.WithObject("suiteDefinitionConfiguration", m_suiteDefinitionConfiguration.Jsonize());
  }

  return payload.View().WriteReadable();
}
