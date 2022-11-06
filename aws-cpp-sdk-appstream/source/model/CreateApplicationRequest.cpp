/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateApplicationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateApplicationRequest::CreateApplicationRequest() : 
    m_nameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_iconS3LocationHasBeenSet(false),
    m_launchPathHasBeenSet(false),
    m_workingDirectoryHasBeenSet(false),
    m_launchParametersHasBeenSet(false),
    m_platformsHasBeenSet(false),
    m_instanceFamiliesHasBeenSet(false),
    m_appBlockArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateApplicationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("DisplayName", m_displayName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_iconS3LocationHasBeenSet)
  {
   payload.WithObject("IconS3Location", m_iconS3Location.Jsonize());

  }

  if(m_launchPathHasBeenSet)
  {
   payload.WithString("LaunchPath", m_launchPath);

  }

  if(m_workingDirectoryHasBeenSet)
  {
   payload.WithString("WorkingDirectory", m_workingDirectory);

  }

  if(m_launchParametersHasBeenSet)
  {
   payload.WithString("LaunchParameters", m_launchParameters);

  }

  if(m_platformsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> platformsJsonList(m_platforms.size());
   for(unsigned platformsIndex = 0; platformsIndex < platformsJsonList.GetLength(); ++platformsIndex)
   {
     platformsJsonList[platformsIndex].AsString(PlatformTypeMapper::GetNameForPlatformType(m_platforms[platformsIndex]));
   }
   payload.WithArray("Platforms", std::move(platformsJsonList));

  }

  if(m_instanceFamiliesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceFamiliesJsonList(m_instanceFamilies.size());
   for(unsigned instanceFamiliesIndex = 0; instanceFamiliesIndex < instanceFamiliesJsonList.GetLength(); ++instanceFamiliesIndex)
   {
     instanceFamiliesJsonList[instanceFamiliesIndex].AsString(m_instanceFamilies[instanceFamiliesIndex]);
   }
   payload.WithArray("InstanceFamilies", std::move(instanceFamiliesJsonList));

  }

  if(m_appBlockArnHasBeenSet)
  {
   payload.WithString("AppBlockArn", m_appBlockArn);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateApplicationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateApplication"));
  return headers;

}




