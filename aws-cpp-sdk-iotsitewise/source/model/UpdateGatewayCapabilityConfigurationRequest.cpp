/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/UpdateGatewayCapabilityConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateGatewayCapabilityConfigurationRequest::UpdateGatewayCapabilityConfigurationRequest() : 
    m_gatewayIdHasBeenSet(false),
    m_capabilityNamespaceHasBeenSet(false),
    m_capabilityConfigurationHasBeenSet(false)
{
}

Aws::String UpdateGatewayCapabilityConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capabilityNamespaceHasBeenSet)
  {
   payload.WithString("capabilityNamespace", m_capabilityNamespace);

  }

  if(m_capabilityConfigurationHasBeenSet)
  {
   payload.WithString("capabilityConfiguration", m_capabilityConfiguration);

  }

  return payload.View().WriteReadable();
}




