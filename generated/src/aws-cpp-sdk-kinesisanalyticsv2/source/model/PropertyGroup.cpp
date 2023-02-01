/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisanalyticsv2/model/PropertyGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

PropertyGroup::PropertyGroup() : 
    m_propertyGroupIdHasBeenSet(false),
    m_propertyMapHasBeenSet(false)
{
}

PropertyGroup::PropertyGroup(JsonView jsonValue) : 
    m_propertyGroupIdHasBeenSet(false),
    m_propertyMapHasBeenSet(false)
{
  *this = jsonValue;
}

PropertyGroup& PropertyGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PropertyGroupId"))
  {
    m_propertyGroupId = jsonValue.GetString("PropertyGroupId");

    m_propertyGroupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PropertyMap"))
  {
    Aws::Map<Aws::String, JsonView> propertyMapJsonMap = jsonValue.GetObject("PropertyMap").GetAllObjects();
    for(auto& propertyMapItem : propertyMapJsonMap)
    {
      m_propertyMap[propertyMapItem.first] = propertyMapItem.second.AsString();
    }
    m_propertyMapHasBeenSet = true;
  }

  return *this;
}

JsonValue PropertyGroup::Jsonize() const
{
  JsonValue payload;

  if(m_propertyGroupIdHasBeenSet)
  {
   payload.WithString("PropertyGroupId", m_propertyGroupId);

  }

  if(m_propertyMapHasBeenSet)
  {
   JsonValue propertyMapJsonMap;
   for(auto& propertyMapItem : m_propertyMap)
   {
     propertyMapJsonMap.WithString(propertyMapItem.first, propertyMapItem.second);
   }
   payload.WithObject("PropertyMap", std::move(propertyMapJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
