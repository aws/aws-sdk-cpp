/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wisdom/model/UpdateContentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ConnectWisdomService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateContentRequest::UpdateContentRequest() : 
    m_contentIdHasBeenSet(false),
    m_knowledgeBaseIdHasBeenSet(false),
    m_metadataHasBeenSet(false),
    m_overrideLinkOutUriHasBeenSet(false),
    m_removeOverrideLinkOutUri(false),
    m_removeOverrideLinkOutUriHasBeenSet(false),
    m_revisionIdHasBeenSet(false),
    m_titleHasBeenSet(false),
    m_uploadIdHasBeenSet(false)
{
}

Aws::String UpdateContentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_metadataHasBeenSet)
  {
   JsonValue metadataJsonMap;
   for(auto& metadataItem : m_metadata)
   {
     metadataJsonMap.WithString(metadataItem.first, metadataItem.second);
   }
   payload.WithObject("metadata", std::move(metadataJsonMap));

  }

  if(m_overrideLinkOutUriHasBeenSet)
  {
   payload.WithString("overrideLinkOutUri", m_overrideLinkOutUri);

  }

  if(m_removeOverrideLinkOutUriHasBeenSet)
  {
   payload.WithBool("removeOverrideLinkOutUri", m_removeOverrideLinkOutUri);

  }

  if(m_revisionIdHasBeenSet)
  {
   payload.WithString("revisionId", m_revisionId);

  }

  if(m_titleHasBeenSet)
  {
   payload.WithString("title", m_title);

  }

  if(m_uploadIdHasBeenSet)
  {
   payload.WithString("uploadId", m_uploadId);

  }

  return payload.View().WriteReadable();
}




