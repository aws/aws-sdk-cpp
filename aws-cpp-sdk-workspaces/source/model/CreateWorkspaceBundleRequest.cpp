/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/CreateWorkspaceBundleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateWorkspaceBundleRequest::CreateWorkspaceBundleRequest() : 
    m_bundleNameHasBeenSet(false),
    m_bundleDescriptionHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_computeTypeHasBeenSet(false),
    m_userStorageHasBeenSet(false),
    m_rootStorageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateWorkspaceBundleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_bundleNameHasBeenSet)
  {
   payload.WithString("BundleName", m_bundleName);

  }

  if(m_bundleDescriptionHasBeenSet)
  {
   payload.WithString("BundleDescription", m_bundleDescription);

  }

  if(m_imageIdHasBeenSet)
  {
   payload.WithString("ImageId", m_imageId);

  }

  if(m_computeTypeHasBeenSet)
  {
   payload.WithObject("ComputeType", m_computeType.Jsonize());

  }

  if(m_userStorageHasBeenSet)
  {
   payload.WithObject("UserStorage", m_userStorage.Jsonize());

  }

  if(m_rootStorageHasBeenSet)
  {
   payload.WithObject("RootStorage", m_rootStorage.Jsonize());

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

Aws::Http::HeaderValueCollection CreateWorkspaceBundleRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.CreateWorkspaceBundle"));
  return headers;

}




