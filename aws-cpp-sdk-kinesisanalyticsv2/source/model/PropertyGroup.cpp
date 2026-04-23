/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
