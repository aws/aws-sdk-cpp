/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devicefarm/model/UpdateVPCEConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DeviceFarm::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateVPCEConfigurationRequest::UpdateVPCEConfigurationRequest() : 
    m_arnHasBeenSet(false),
    m_vpceConfigurationNameHasBeenSet(false),
    m_vpceServiceNameHasBeenSet(false),
    m_serviceDnsNameHasBeenSet(false),
    m_vpceConfigurationDescriptionHasBeenSet(false)
{
}

Aws::String UpdateVPCEConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_vpceConfigurationNameHasBeenSet)
  {
   payload.WithString("vpceConfigurationName", m_vpceConfigurationName);

  }

  if(m_vpceServiceNameHasBeenSet)
  {
   payload.WithString("vpceServiceName", m_vpceServiceName);

  }

  if(m_serviceDnsNameHasBeenSet)
  {
   payload.WithString("serviceDnsName", m_serviceDnsName);

  }

  if(m_vpceConfigurationDescriptionHasBeenSet)
  {
   payload.WithString("vpceConfigurationDescription", m_vpceConfigurationDescription);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateVPCEConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DeviceFarm_20150623.UpdateVPCEConfiguration"));
  return headers;

}




