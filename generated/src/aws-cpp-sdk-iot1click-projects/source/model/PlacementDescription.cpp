/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-projects/model/PlacementDescription.h>
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

PlacementDescription::PlacementDescription() : 
    m_projectNameHasBeenSet(false),
    m_placementNameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false)
{
}

PlacementDescription::PlacementDescription(JsonView jsonValue) : 
    m_projectNameHasBeenSet(false),
    m_placementNameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_createdDateHasBeenSet(false),
    m_updatedDateHasBeenSet(false)
{
  *this = jsonValue;
}

PlacementDescription& PlacementDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("projectName"))
  {
    m_projectName = jsonValue.GetString("projectName");

    m_projectNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("placementName"))
  {
    m_placementName = jsonValue.GetString("placementName");

    m_placementNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributes"))
  {
    Aws::Map<Aws::String, JsonView> attributesJsonMap = jsonValue.GetObject("attributes").GetAllObjects();
    for(auto& attributesItem : attributesJsonMap)
    {
      m_attributes[attributesItem.first] = attributesItem.second.AsString();
    }
    m_attributesHasBeenSet = true;
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

  return *this;
}

JsonValue PlacementDescription::Jsonize() const
{
  JsonValue payload;

  if(m_projectNameHasBeenSet)
  {
   payload.WithString("projectName", m_projectName);

  }

  if(m_placementNameHasBeenSet)
  {
   payload.WithString("placementName", m_placementName);

  }

  if(m_attributesHasBeenSet)
  {
   JsonValue attributesJsonMap;
   for(auto& attributesItem : m_attributes)
   {
     attributesJsonMap.WithString(attributesItem.first, attributesItem.second);
   }
   payload.WithObject("attributes", std::move(attributesJsonMap));

  }

  if(m_createdDateHasBeenSet)
  {
   payload.WithDouble("createdDate", m_createdDate.SecondsWithMSPrecision());
  }

  if(m_updatedDateHasBeenSet)
  {
   payload.WithDouble("updatedDate", m_updatedDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
