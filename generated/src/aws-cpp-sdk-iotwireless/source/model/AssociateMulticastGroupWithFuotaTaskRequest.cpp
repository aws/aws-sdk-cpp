/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/AssociateMulticastGroupWithFuotaTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String AssociateMulticastGroupWithFuotaTaskRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_multicastGroupIdHasBeenSet)
  {
   payload.WithString("MulticastGroupId", m_multicastGroupId);

  }

  return payload.View().WriteReadable();
}




