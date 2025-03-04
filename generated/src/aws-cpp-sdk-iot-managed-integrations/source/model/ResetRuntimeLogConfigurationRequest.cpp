/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ResetRuntimeLogConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ResetRuntimeLogConfigurationRequest::ResetRuntimeLogConfigurationRequest() : 
    m_managedThingIdHasBeenSet(false)
{
}

Aws::String ResetRuntimeLogConfigurationRequest::SerializePayload() const
{
  return {};
}




