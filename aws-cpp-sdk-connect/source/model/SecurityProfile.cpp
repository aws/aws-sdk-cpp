/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SecurityProfile.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

SecurityProfile::SecurityProfile() : 
    m_idHasBeenSet(false),
    m_organizationResourceIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_allowedAccessControlTagsHasBeenSet(false),
    m_tagRestrictedResourcesHasBeenSet(false)
{
}

SecurityProfile::SecurityProfile(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_organizationResourceIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_allowedAccessControlTagsHasBeenSet(false),
    m_tagRestrictedResourcesHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityProfile& SecurityProfile::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OrganizationResourceId"))
  {
    m_organizationResourceId = jsonValue.GetString("OrganizationResourceId");

    m_organizationResourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityProfileName"))
  {
    m_securityProfileName = jsonValue.GetString("SecurityProfileName");

    m_securityProfileNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllowedAccessControlTags"))
  {
    Aws::Map<Aws::String, JsonView> allowedAccessControlTagsJsonMap = jsonValue.GetObject("AllowedAccessControlTags").GetAllObjects();
    for(auto& allowedAccessControlTagsItem : allowedAccessControlTagsJsonMap)
    {
      m_allowedAccessControlTags[allowedAccessControlTagsItem.first] = allowedAccessControlTagsItem.second.AsString();
    }
    m_allowedAccessControlTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagRestrictedResources"))
  {
    Aws::Utils::Array<JsonView> tagRestrictedResourcesJsonList = jsonValue.GetArray("TagRestrictedResources");
    for(unsigned tagRestrictedResourcesIndex = 0; tagRestrictedResourcesIndex < tagRestrictedResourcesJsonList.GetLength(); ++tagRestrictedResourcesIndex)
    {
      m_tagRestrictedResources.push_back(tagRestrictedResourcesJsonList[tagRestrictedResourcesIndex].AsString());
    }
    m_tagRestrictedResourcesHasBeenSet = true;
  }

  return *this;
}

JsonValue SecurityProfile::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_organizationResourceIdHasBeenSet)
  {
   payload.WithString("OrganizationResourceId", m_organizationResourceId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_securityProfileNameHasBeenSet)
  {
   payload.WithString("SecurityProfileName", m_securityProfileName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
