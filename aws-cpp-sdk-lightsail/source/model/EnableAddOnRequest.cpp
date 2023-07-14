/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/EnableAddOnRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EnableAddOnRequest::EnableAddOnRequest() : 
    m_resourceNameHasBeenSet(false),
    m_addOnRequestHasBeenSet(false)
{
}

Aws::String EnableAddOnRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  if(m_addOnRequestHasBeenSet)
  {
   payload.WithObject("addOnRequest", m_addOnRequest.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection EnableAddOnRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.EnableAddOn"));
  return headers;

}




