/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/UpdateLoadBalancerAttributeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLoadBalancerAttributeRequest::UpdateLoadBalancerAttributeRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_attributeName(LoadBalancerAttributeName::NOT_SET),
    m_attributeNameHasBeenSet(false),
    m_attributeValueHasBeenSet(false)
{
}

Aws::String UpdateLoadBalancerAttributeRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("loadBalancerName", m_loadBalancerName);

  }

  if(m_attributeNameHasBeenSet)
  {
   payload.WithString("attributeName", LoadBalancerAttributeNameMapper::GetNameForLoadBalancerAttributeName(m_attributeName));
  }

  if(m_attributeValueHasBeenSet)
  {
   payload.WithString("attributeValue", m_attributeValue);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLoadBalancerAttributeRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.UpdateLoadBalancerAttribute"));
  return headers;

}




