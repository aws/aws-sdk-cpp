/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/UpdateImagePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateImagePermissionsRequest::UpdateImagePermissionsRequest() : 
    m_nameHasBeenSet(false),
    m_sharedAccountIdHasBeenSet(false),
    m_imagePermissionsHasBeenSet(false)
{
}

Aws::String UpdateImagePermissionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_sharedAccountIdHasBeenSet)
  {
   payload.WithString("SharedAccountId", m_sharedAccountId);

  }

  if(m_imagePermissionsHasBeenSet)
  {
   payload.WithObject("ImagePermissions", m_imagePermissions.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateImagePermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.UpdateImagePermissions"));
  return headers;

}




