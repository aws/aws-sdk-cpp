/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/UpdateKxEnvironmentNetworkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateKxEnvironmentNetworkRequest::UpdateKxEnvironmentNetworkRequest() : 
    m_environmentIdHasBeenSet(false),
    m_transitGatewayConfigurationHasBeenSet(false),
    m_customDNSConfigurationHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String UpdateKxEnvironmentNetworkRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transitGatewayConfigurationHasBeenSet)
  {
   payload.WithObject("transitGatewayConfiguration", m_transitGatewayConfiguration.Jsonize());

  }

  if(m_customDNSConfigurationHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customDNSConfigurationJsonList(m_customDNSConfiguration.size());
   for(unsigned customDNSConfigurationIndex = 0; customDNSConfigurationIndex < customDNSConfigurationJsonList.GetLength(); ++customDNSConfigurationIndex)
   {
     customDNSConfigurationJsonList[customDNSConfigurationIndex].AsObject(m_customDNSConfiguration[customDNSConfigurationIndex].Jsonize());
   }
   payload.WithArray("customDNSConfiguration", std::move(customDNSConfigurationJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}




