/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/UpdateDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deliveryDestinationArnHasBeenSet)
  {
   payload.WithString("DeliveryDestinationArn", m_deliveryDestinationArn);

  }

  if(m_deliveryDestinationTypeHasBeenSet)
  {
   payload.WithString("DeliveryDestinationType", DeliveryDestinationTypeMapper::GetNameForDeliveryDestinationType(m_deliveryDestinationType));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload.View().WriteReadable();
}




