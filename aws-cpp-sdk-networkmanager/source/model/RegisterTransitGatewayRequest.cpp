/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/networkmanager/model/RegisterTransitGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::NetworkManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterTransitGatewayRequest::RegisterTransitGatewayRequest() : 
    m_globalNetworkIdHasBeenSet(false),
    m_transitGatewayArnHasBeenSet(false)
{
}

Aws::String RegisterTransitGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_transitGatewayArnHasBeenSet)
  {
   payload.WithString("TransitGatewayArn", m_transitGatewayArn);

  }

  return payload.View().WriteReadable();
}




