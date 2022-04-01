/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/SecurityProfileSearchSummary.h>
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

SecurityProfileSearchSummary::SecurityProfileSearchSummary() : 
    m_idHasBeenSet(false),
    m_organizationResourceIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SecurityProfileSearchSummary::SecurityProfileSearchSummary(JsonView jsonValue) : 
    m_idHasBeenSet(false),
    m_organizationResourceIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

SecurityProfileSearchSummary& SecurityProfileSearchSummary::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue SecurityProfileSearchSummary::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
