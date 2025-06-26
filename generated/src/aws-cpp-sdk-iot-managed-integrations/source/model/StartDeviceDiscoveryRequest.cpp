/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/StartDeviceDiscoveryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String StartDeviceDiscoveryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_discoveryTypeHasBeenSet)
  {
   payload.WithString("DiscoveryType", DiscoveryTypeMapper::GetNameForDiscoveryType(m_discoveryType));
  }

  if(m_customProtocolDetailHasBeenSet)
  {
   JsonValue customProtocolDetailJsonMap;
   for(auto& customProtocolDetailItem : m_customProtocolDetail)
   {
     customProtocolDetailJsonMap.WithString(customProtocolDetailItem.first, customProtocolDetailItem.second);
   }
   payload.WithObject("CustomProtocolDetail", std::move(customProtocolDetailJsonMap));

  }

  if(m_controllerIdentifierHasBeenSet)
  {
   payload.WithString("ControllerIdentifier", m_controllerIdentifier);

  }

  if(m_accountAssociationIdHasBeenSet)
  {
   payload.WithString("AccountAssociationId", m_accountAssociationId);

  }

  if(m_authenticationMaterialHasBeenSet)
  {
   payload.WithString("AuthenticationMaterial", m_authenticationMaterial);

  }

  if(m_authenticationMaterialTypeHasBeenSet)
  {
   payload.WithString("AuthenticationMaterialType", DiscoveryAuthMaterialTypeMapper::GetNameForDiscoveryAuthMaterialType(m_authenticationMaterialType));
  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




