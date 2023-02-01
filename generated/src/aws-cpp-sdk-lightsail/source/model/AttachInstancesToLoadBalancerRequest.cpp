/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AttachInstancesToLoadBalancerRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

AttachInstancesToLoadBalancerRequest::AttachInstancesToLoadBalancerRequest() : 
    m_loadBalancerNameHasBeenSet(false),
    m_instanceNamesHasBeenSet(false)
{
}

Aws::String AttachInstancesToLoadBalancerRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_loadBalancerNameHasBeenSet)
  {
   payload.WithString("loadBalancerName", m_loadBalancerName);

  }

  if(m_instanceNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceNamesJsonList(m_instanceNames.size());
   for(unsigned instanceNamesIndex = 0; instanceNamesIndex < instanceNamesJsonList.GetLength(); ++instanceNamesIndex)
   {
     instanceNamesJsonList[instanceNamesIndex].AsString(m_instanceNames[instanceNamesIndex]);
   }
   payload.WithArray("instanceNames", std::move(instanceNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection AttachInstancesToLoadBalancerRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.AttachInstancesToLoadBalancer"));
  return headers;

}




