/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/globalaccelerator/model/CreateAcceleratorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAcceleratorRequest::CreateAcceleratorRequest() : 
    m_nameHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false),
    m_ipAddressesHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_idempotencyToken(Aws::Utils::UUID::RandomUUID()),
    m_idempotencyTokenHasBeenSet(true),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAcceleratorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ipAddressTypeHasBeenSet)
  {
   payload.WithString("IpAddressType", IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType));
  }

  if(m_ipAddressesHasBeenSet)
  {
   Array<JsonValue> ipAddressesJsonList(m_ipAddresses.size());
   for(unsigned ipAddressesIndex = 0; ipAddressesIndex < ipAddressesJsonList.GetLength(); ++ipAddressesIndex)
   {
     ipAddressesJsonList[ipAddressesIndex].AsString(m_ipAddresses[ipAddressesIndex]);
   }
   payload.WithArray("IpAddresses", std::move(ipAddressesJsonList));

  }

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("Enabled", m_enabled);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAcceleratorRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.CreateAccelerator"));
  return headers;

}




