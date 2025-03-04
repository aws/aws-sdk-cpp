/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/DeleteNotificationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteNotificationConfigurationRequest::DeleteNotificationConfigurationRequest() : 
    m_eventType(EventType::NOT_SET),
    m_eventTypeHasBeenSet(false)
{
}

Aws::String DeleteNotificationConfigurationRequest::SerializePayload() const
{
  return {};
}




