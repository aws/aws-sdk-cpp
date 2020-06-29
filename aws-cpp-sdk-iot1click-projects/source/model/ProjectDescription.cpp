/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/ProjectDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT1ClickProjects
{
namespace Model
{

ProjectDescription::ProjectDescription() : 
    m_arnHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false),
    m_placementTemplateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ProjectDescription::ProjectDescription(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false),
    m_placementTemplateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

ProjectDescription& ProjectDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdDate"))
  {
    m_createdDate = jsonValue.GetDouble("createdDate");

    m_createdDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedDate"))
  {
    m_updatedDate = jsonValue.GetDouble("updatedDate");

    m_updatedDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("placementTemplate"))
  {
    m_placementTemplate = jsonValue.GetObject("placementTemplate");

    m_placementTemplateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProjectDescription::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_updatedDateHasBeenSet)
  {
   payload.WithDouble("updatedDate", m_updatedDate.SecondsWithMSPrecision());
  }

  if(m_placementTemplateHasBeenSet)
  {
   payload.WithObject("placementTemplate", m_placementTemplate.Jsonize());

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
