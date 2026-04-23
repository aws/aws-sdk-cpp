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

#include <aws/workspaces/model/ImportWorkspaceImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ImportWorkspaceImageRequest::ImportWorkspaceImageRequest() : 
    m_ec2ImageIdHasBeenSet(false),
    m_ingestionProcess(WorkspaceImageIngestionProcess::NOT_SET),
    m_ingestionProcessHasBeenSet(false),
    m_imageNameHasBeenSet(false),
    m_imageDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String ImportWorkspaceImageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_ec2ImageIdHasBeenSet)
  {
   payload.WithString("Ec2ImageId", m_ec2ImageId);

  }

  if(m_ingestionProcessHasBeenSet)
  {
   payload.WithString("IngestionProcess", WorkspaceImageIngestionProcessMapper::GetNameForWorkspaceImageIngestionProcess(m_ingestionProcess));
  }

  if(m_imageNameHasBeenSet)
  {
   payload.WithString("ImageName", m_imageName);

  }

  if(m_imageDescriptionHasBeenSet)
  {
   payload.WithString("ImageDescription", m_imageDescription);

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

Aws::Http::HeaderValueCollection ImportWorkspaceImageRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "WorkspacesService.ImportWorkspaceImage"));
  return headers;

}




