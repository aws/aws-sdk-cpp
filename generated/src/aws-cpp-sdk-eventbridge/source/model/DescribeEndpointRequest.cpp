/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeEndpointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeEndpointRequest::DescribeEndpointRequest() : 
    m_nameHasBeenSet(false),
    m_homeRegionHasBeenSet(false)
{
}

Aws::String DescribeEndpointRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeEndpointRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSEvents.DescribeEndpoint"));
  return headers;

}




