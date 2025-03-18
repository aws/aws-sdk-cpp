﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/CreateSecurityProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

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

  if(m_applicationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> applicationsJsonList(m_applications.size());
   for(unsigned applicationsIndex = 0; applicationsIndex < applicationsJsonList.GetLength(); ++applicationsIndex)
   {
     applicationsJsonList[applicationsIndex].AsObject(m_applications[applicationsIndex].Jsonize());
   }
   payload.WithArray("Applications", std::move(applicationsJsonList));

  }

  if(m_hierarchyRestrictedResourcesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hierarchyRestrictedResourcesJsonList(m_hierarchyRestrictedResources.size());
   for(unsigned hierarchyRestrictedResourcesIndex = 0; hierarchyRestrictedResourcesIndex < hierarchyRestrictedResourcesJsonList.GetLength(); ++hierarchyRestrictedResourcesIndex)
   {
     hierarchyRestrictedResourcesJsonList[hierarchyRestrictedResourcesIndex].AsString(m_hierarchyRestrictedResources[hierarchyRestrictedResourcesIndex]);
   }
   payload.WithArray("HierarchyRestrictedResources", std::move(hierarchyRestrictedResourcesJsonList));

  }

  if(m_allowedAccessControlHierarchyGroupIdHasBeenSet)
  {
   payload.WithString("AllowedAccessControlHierarchyGroupId", m_allowedAccessControlHierarchyGroupId);

  }

  return payload.View().WriteReadable();
}




