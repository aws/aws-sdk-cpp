/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/PutHubConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutHubConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hubTokenTimerExpirySettingInSecondsHasBeenSet)
  {
   payload.WithInt64("HubTokenTimerExpirySettingInSeconds", m_hubTokenTimerExpirySettingInSeconds);

  }

  return payload.View().WriteReadable();
}




