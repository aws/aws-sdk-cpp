/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/DescribeEndpointGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEndpointGroupRequest::DescribeEndpointGroupRequest() : 
    m_endpointGroupArnHasBeenSet(false)
{
}

Aws::String DescribeEndpointGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_endpointGroupArnHasBeenSet)
  {
   payload.WithString("EndpointGroupArn", m_endpointGroupArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEndpointGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.DescribeEndpointGroup"));
  return headers;

}




