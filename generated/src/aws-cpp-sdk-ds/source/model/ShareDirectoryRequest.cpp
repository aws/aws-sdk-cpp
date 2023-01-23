/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/ShareDirectoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ShareDirectoryRequest::ShareDirectoryRequest() : 
    m_directoryIdHasBeenSet(false),
    m_shareNotesHasBeenSet(false),
    m_shareTargetHasBeenSet(false),
    m_shareMethod(ShareMethod::NOT_SET),
    m_shareMethodHasBeenSet(false)
{
}

Aws::String ShareDirectoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_directoryIdHasBeenSet)
  {
   payload.WithString("DirectoryId", m_directoryId);

  }

  if(m_shareNotesHasBeenSet)
  {
   payload.WithString("ShareNotes", m_shareNotes);

  }

  if(m_shareTargetHasBeenSet)
  {
   payload.WithObject("ShareTarget", m_shareTarget.Jsonize());

  }

  if(m_shareMethodHasBeenSet)
  {
   payload.WithString("ShareMethod", ShareMethodMapper::GetNameForShareMethod(m_shareMethod));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ShareDirectoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.ShareDirectory"));
  return headers;

}




