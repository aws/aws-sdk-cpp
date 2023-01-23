/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateGatewayRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGatewayRequest::UpdateGatewayRequest() : 
    m_gatewayIdHasBeenSet(false),
    m_gatewayNameHasBeenSet(false)
{
}

Aws::String UpdateGatewayRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_gatewayNameHasBeenSet)
  {
   payload.WithString("gatewayName", m_gatewayName);

  }

  return payload.View().WriteReadable();
}




