/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateResourceEventConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateResourceEventConfigurationRequest::UpdateResourceEventConfigurationRequest() : 
    m_identifierHasBeenSet(false),
    m_identifierType(IdentifierType::NOT_SET),
    m_identifierTypeHasBeenSet(false),
    m_partnerType(EventNotificationPartnerType::NOT_SET),
    m_partnerTypeHasBeenSet(false),
    m_deviceRegistrationStateHasBeenSet(false),
    m_proximityHasBeenSet(false),
    m_joinHasBeenSet(false),
    m_connectionStatusHasBeenSet(false),
    m_messageDeliveryStatusHasBeenSet(false)
{
}

Aws::String UpdateResourceEventConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_deviceRegistrationStateHasBeenSet)
  {
   payload.WithObject("DeviceRegistrationState", m_deviceRegistrationState.Jsonize());

  }

  if(m_proximityHasBeenSet)
  {
   payload.WithObject("Proximity", m_proximity.Jsonize());

  }

  if(m_joinHasBeenSet)
  {
   payload.WithObject("Join", m_join.Jsonize());

  }

  if(m_connectionStatusHasBeenSet)
  {
   payload.WithObject("ConnectionStatus", m_connectionStatus.Jsonize());

  }

  if(m_messageDeliveryStatusHasBeenSet)
  {
   payload.WithObject("MessageDeliveryStatus", m_messageDeliveryStatus.Jsonize());

  }

  return payload.View().WriteReadable();
}

void UpdateResourceEventConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_identifierTypeHasBeenSet)
    {
      ss << IdentifierTypeMapper::GetNameForIdentifierType(m_identifierType);
      uri.AddQueryStringParameter("identifierType", ss.str());
      ss.str("");
    }

    if(m_partnerTypeHasBeenSet)
    {
      ss << EventNotificationPartnerTypeMapper::GetNameForEventNotificationPartnerType(m_partnerType);
      uri.AddQueryStringParameter("partnerType", ss.str());
      ss.str("");
    }

}



