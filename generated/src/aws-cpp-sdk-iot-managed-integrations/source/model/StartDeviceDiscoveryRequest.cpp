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

StartDeviceDiscoveryRequest::StartDeviceDiscoveryRequest() : 
    m_discoveryType(DiscoveryType::NOT_SET),
    m_discoveryTypeHasBeenSet(false),
    m_controllerIdentifierHasBeenSet(false),
    m_connectorAssociationIdentifierHasBeenSet(false),
    m_authenticationMaterialHasBeenSet(false),
    m_authenticationMaterialType(DiscoveryAuthMaterialType::NOT_SET),
    m_authenticationMaterialTypeHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String StartDeviceDiscoveryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_discoveryTypeHasBeenSet)
  {
   payload.WithString("DiscoveryType", DiscoveryTypeMapper::GetNameForDiscoveryType(m_discoveryType));
  }

  if(m_controllerIdentifierHasBeenSet)
  {
   payload.WithString("ControllerIdentifier", m_controllerIdentifier);

  }

  if(m_connectorAssociationIdentifierHasBeenSet)
  {
   payload.WithString("ConnectorAssociationIdentifier", m_connectorAssociationIdentifier);

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




