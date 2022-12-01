/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/RegisterComputeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RegisterComputeRequest::RegisterComputeRequest() : 
    m_fleetIdHasBeenSet(false),
    m_computeNameHasBeenSet(false),
    m_certificatePathHasBeenSet(false),
    m_dnsNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_locationHasBeenSet(false)
{
}

Aws::String RegisterComputeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("FleetId", m_fleetId);

  }

  if(m_computeNameHasBeenSet)
  {
   payload.WithString("ComputeName", m_computeName);

  }

  if(m_certificatePathHasBeenSet)
  {
   payload.WithString("CertificatePath", m_certificatePath);

  }

  if(m_dnsNameHasBeenSet)
  {
   payload.WithString("DnsName", m_dnsName);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("IpAddress", m_ipAddress);

  }

  if(m_locationHasBeenSet)
  {
   payload.WithString("Location", m_location);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RegisterComputeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.RegisterCompute"));
  return headers;

}




