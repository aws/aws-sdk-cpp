/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/CreatePublishingDestinationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreatePublishingDestinationRequest::CreatePublishingDestinationRequest() : 
    m_detectorIdHasBeenSet(false),
    m_destinationType(DestinationType::NOT_SET),
    m_destinationTypeHasBeenSet(false),
    m_destinationPropertiesHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String CreatePublishingDestinationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_destinationTypeHasBeenSet)
  {
   payload.WithString("destinationType", DestinationTypeMapper::GetNameForDestinationType(m_destinationType));
  }

  if(m_destinationPropertiesHasBeenSet)
  {
   payload.WithObject("destinationProperties", m_destinationProperties.Jsonize());

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




