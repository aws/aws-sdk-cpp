/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/UpdateDevicePolicyConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDevicePolicyConfigurationRequest::UpdateDevicePolicyConfigurationRequest() : 
    m_fleetArnHasBeenSet(false),
    m_deviceCaCertificateHasBeenSet(false)
{
}

Aws::String UpdateDevicePolicyConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetArnHasBeenSet)
  {
   payload.WithString("FleetArn", m_fleetArn);

  }

  if(m_deviceCaCertificateHasBeenSet)
  {
   payload.WithString("DeviceCaCertificate", m_deviceCaCertificate);

  }

  return payload.View().WriteReadable();
}




