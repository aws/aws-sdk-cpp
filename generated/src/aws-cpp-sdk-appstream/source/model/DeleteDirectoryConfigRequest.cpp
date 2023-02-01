/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/DeleteDirectoryConfigRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDirectoryConfigRequest::DeleteDirectoryConfigRequest() : 
    m_directoryNameHasBeenSet(false)
{
}

Aws::String DeleteDirectoryConfigRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryNameHasBeenSet)
  {
   payload.WithString("DirectoryName", m_directoryName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteDirectoryConfigRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.DeleteDirectoryConfig"));
  return headers;

}




