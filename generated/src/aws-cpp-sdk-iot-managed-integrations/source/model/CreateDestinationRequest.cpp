/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CreateDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDestinationRequest::CreateDestinationRequest() : 
    m_deliveryDestinationArnHasBeenSet(false),
    m_deliveryDestinationType(DeliveryDestinationType::NOT_SET),
    m_deliveryDestinationTypeHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDestinationRequest::SerializePayload() const
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

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}




