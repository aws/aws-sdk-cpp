/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3outposts/model/CreateEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::S3Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateEndpointRequest::CreateEndpointRequest() : 
    m_outpostIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_securityGroupIdHasBeenSet(false),
    m_accessType(EndpointAccessType::NOT_SET),
    m_accessTypeHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false)
{
}

Aws::String CreateEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_outpostIdHasBeenSet)
  {
   payload.WithString("OutpostId", m_outpostId);

  }

  if(m_subnetIdHasBeenSet)
  {
   payload.WithString("SubnetId", m_subnetId);

  }

  if(m_securityGroupIdHasBeenSet)
  {
   payload.WithString("SecurityGroupId", m_securityGroupId);

  }

  if(m_accessTypeHasBeenSet)
  {
   payload.WithString("AccessType", EndpointAccessTypeMapper::GetNameForEndpointAccessType(m_accessType));
  }

  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
   payload.WithString("CustomerOwnedIpv4Pool", m_customerOwnedIpv4Pool);

  }

  return payload.View().WriteReadable();
}




