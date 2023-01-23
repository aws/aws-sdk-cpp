/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateSecurityProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSecurityProfileRequest::CreateSecurityProfileRequest() : 
    m_securityProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_permissionsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_allowedAccessControlTagsHasBeenSet(false),
    m_tagRestrictedResourcesHasBeenSet(false)
{
}

Aws::String CreateSecurityProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_securityProfileNameHasBeenSet)
  {
   payload.WithString("SecurityProfileName", m_securityProfileName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_permissionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsString(m_permissions[permissionsIndex]);
   }
   payload.WithArray("Permissions", std::move(permissionsJsonList));

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

  if(m_allowedAccessControlTagsHasBeenSet)
  {
   JsonValue allowedAccessControlTagsJsonMap;
   for(auto& allowedAccessControlTagsItem : m_allowedAccessControlTags)
   {
     allowedAccessControlTagsJsonMap.WithString(allowedAccessControlTagsItem.first, allowedAccessControlTagsItem.second);
   }
   payload.WithObject("AllowedAccessControlTags", std::move(allowedAccessControlTagsJsonMap));

  }

  if(m_tagRestrictedResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagRestrictedResourcesJsonList(m_tagRestrictedResources.size());
   for(unsigned tagRestrictedResourcesIndex = 0; tagRestrictedResourcesIndex < tagRestrictedResourcesJsonList.GetLength(); ++tagRestrictedResourcesIndex)
   {
     tagRestrictedResourcesJsonList[tagRestrictedResourcesIndex].AsString(m_tagRestrictedResources[tagRestrictedResourcesIndex]);
   }
   payload.WithArray("TagRestrictedResources", std::move(tagRestrictedResourcesJsonList));

  }

  return payload.View().WriteReadable();
}




