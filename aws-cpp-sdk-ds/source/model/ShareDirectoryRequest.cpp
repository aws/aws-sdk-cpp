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




