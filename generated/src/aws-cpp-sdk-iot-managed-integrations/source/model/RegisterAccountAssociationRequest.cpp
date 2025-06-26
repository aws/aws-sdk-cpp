/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/RegisterAccountAssociationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String RegisterAccountAssociationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_managedThingIdHasBeenSet)
  {
   payload.WithString("ManagedThingId", m_managedThingId);

  }

  if(m_accountAssociationIdHasBeenSet)
  {
   payload.WithString("AccountAssociationId", m_accountAssociationId);

  }

  if(m_deviceDiscoveryIdHasBeenSet)
  {
   payload.WithString("DeviceDiscoveryId", m_deviceDiscoveryId);

  }

  return payload.View().WriteReadable();
}




