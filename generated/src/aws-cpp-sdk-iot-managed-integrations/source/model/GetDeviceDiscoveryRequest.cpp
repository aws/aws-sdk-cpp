/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetDeviceDiscoveryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeviceDiscoveryRequest::GetDeviceDiscoveryRequest() : 
    m_identifierHasBeenSet(false)
{
}

Aws::String GetDeviceDiscoveryRequest::SerializePayload() const
{
  return {};
}




