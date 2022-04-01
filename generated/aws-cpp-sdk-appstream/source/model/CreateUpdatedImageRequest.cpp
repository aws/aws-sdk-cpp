/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateUpdatedImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateUpdatedImageRequest::CreateUpdatedImageRequest() : 
    m_existingImageNameHasBeenSet(false),
    m_newImageNameHasBeenSet(false),
    m_newImageDescriptionHasBeenSet(false),
    m_newImageDisplayNameHasBeenSet(false),
    m_newImageTagsHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String CreateUpdatedImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_existingImageNameHasBeenSet)
  {
   payload.WithString("existingImageName", m_existingImageName);

  }

  if(m_newImageNameHasBeenSet)
  {
   payload.WithString("newImageName", m_newImageName);

  }

  if(m_newImageDescriptionHasBeenSet)
  {
   payload.WithString("newImageDescription", m_newImageDescription);

  }

  if(m_newImageDisplayNameHasBeenSet)
  {
   payload.WithString("newImageDisplayName", m_newImageDisplayName);

  }

  if(m_newImageTagsHasBeenSet)
  {
   JsonValue newImageTagsJsonMap;
   for(auto& newImageTagsItem : m_newImageTags)
   {
     newImageTagsJsonMap.WithString(newImageTagsItem.first, newImageTagsItem.second);
   }
   payload.WithObject("newImageTags", std::move(newImageTagsJsonMap));

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("dryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateUpdatedImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateUpdatedImage"));
  return headers;

}




