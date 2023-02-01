/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/CreateBuildRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GameLift::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBuildRequest::CreateBuildRequest() : 
    m_nameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_storageLocationHasBeenSet(false),
    m_operatingSystem(OperatingSystem::NOT_SET),
    m_operatingSystemHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_serverSdkVersionHasBeenSet(false)
{
}

Aws::String CreateBuildRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", m_version);

  }

  if(m_storageLocationHasBeenSet)
  {
   payload.WithObject("StorageLocation", m_storageLocation.Jsonize());

  }

  if(m_operatingSystemHasBeenSet)
  {
   payload.WithString("OperatingSystem", OperatingSystemMapper::GetNameForOperatingSystem(m_operatingSystem));
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

  if(m_serverSdkVersionHasBeenSet)
  {
   payload.WithString("ServerSdkVersion", m_serverSdkVersion);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateBuildRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GameLift.CreateBuild"));
  return headers;

}




