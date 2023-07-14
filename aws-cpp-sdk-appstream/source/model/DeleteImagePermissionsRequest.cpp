/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DeleteImagePermissionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteImagePermissionsRequest::DeleteImagePermissionsRequest() : 
    m_nameHasBeenSet(false),
    m_sharedAccountIdHasBeenSet(false)
{
}

Aws::String DeleteImagePermissionsRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteImagePermissionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DeleteImagePermissions"));
  return headers;

}




