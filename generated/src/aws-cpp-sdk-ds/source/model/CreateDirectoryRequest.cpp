/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ds/model/CreateDirectoryRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DirectoryService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDirectoryRequest::CreateDirectoryRequest() : 
    m_nameHasBeenSet(false),
    m_shortNameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_size(DirectorySize::NOT_SET),
    m_sizeHasBeenSet(false),
    m_vpcSettingsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDirectoryRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_shortNameHasBeenSet)
  {
   payload.WithString("ShortName", m_shortName);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("Password", m_password);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithString("Size", DirectorySizeMapper::GetNameForDirectorySize(m_size));
  }

  if(m_vpcSettingsHasBeenSet)
  {
   payload.WithObject("VpcSettings", m_vpcSettings.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDirectoryRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "DirectoryService_20150416.CreateDirectory"));
  return headers;

}




