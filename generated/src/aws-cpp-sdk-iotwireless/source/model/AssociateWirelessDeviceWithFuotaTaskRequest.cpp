/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iotwireless/model/AssociateWirelessDeviceWithFuotaTaskRequest.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateWirelessDeviceWithFuotaTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_wirelessDeviceIdHasBeenSet) {
    payload.WithString("WirelessDeviceId", m_wirelessDeviceId);
  }

  return payload.View().WriteReadable();
}
