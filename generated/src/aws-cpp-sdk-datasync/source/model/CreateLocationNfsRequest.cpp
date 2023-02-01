/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateLocationNfsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLocationNfsRequest::CreateLocationNfsRequest() : 
    m_subdirectoryHasBeenSet(false),
    m_serverHostnameHasBeenSet(false),
    m_onPremConfigHasBeenSet(false),
    m_mountOptionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLocationNfsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_serverHostnameHasBeenSet)
  {
   payload.WithString("ServerHostname", m_serverHostname);

  }

  if(m_onPremConfigHasBeenSet)
  {
   payload.WithObject("OnPremConfig", m_onPremConfig.Jsonize());

  }

  if(m_mountOptionsHasBeenSet)
  {
   payload.WithObject("MountOptions", m_mountOptions.Jsonize());

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

Aws::Http::HeaderValueCollection CreateLocationNfsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateLocationNfs"));
  return headers;

}




