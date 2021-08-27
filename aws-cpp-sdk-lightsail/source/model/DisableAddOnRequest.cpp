/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/DisableAddOnRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Lightsail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DisableAddOnRequest::DisableAddOnRequest() : 
    m_addOnType(AddOnType::NOT_SET),
    m_addOnTypeHasBeenSet(false),
    m_resourceNameHasBeenSet(false)
{
}

Aws::String DisableAddOnRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_addOnTypeHasBeenSet)
  {
   payload.WithString("addOnType", AddOnTypeMapper::GetNameForAddOnType(m_addOnType));
  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("resourceName", m_resourceName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DisableAddOnRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "Lightsail_20161128.DisableAddOn"));
  return headers;

}




