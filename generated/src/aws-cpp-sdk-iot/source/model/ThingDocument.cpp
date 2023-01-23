/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingDocument.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

ThingDocument::ThingDocument() : 
    m_thingNameHasBeenSet(false),
    m_thingIdHasBeenSet(false),
    m_thingTypeNameHasBeenSet(false),
    m_thingGroupNamesHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_shadowHasBeenSet(false),
    m_deviceDefenderHasBeenSet(false),
    m_connectivityHasBeenSet(false)
{
}

ThingDocument::ThingDocument(JsonView jsonValue) : 
    m_thingNameHasBeenSet(false),
    m_thingIdHasBeenSet(false),
    m_thingTypeNameHasBeenSet(false),
    m_thingGroupNamesHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_shadowHasBeenSet(false),
    m_deviceDefenderHasBeenSet(false),
    m_connectivityHasBeenSet(false)
{
  *this = jsonValue;
}

ThingDocument& ThingDocument::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");

    m_thingNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingId"))
  {
    m_thingId = jsonValue.GetString("thingId");

    m_thingIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingTypeName"))
  {
    m_thingTypeName = jsonValue.GetString("thingTypeName");

    m_thingTypeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("thingGroupNames"))
  {
    Aws::Utils::Array<JsonView> thingGroupNamesJsonList = jsonValue.GetArray("thingGroupNames");
    for(unsigned thingGroupNamesIndex = 0; thingGroupNamesIndex < thingGroupNamesJsonList.GetLength(); ++thingGroupNamesIndex)
    {
      m_thingGroupNames.push_back(thingGroupNamesJsonList[thingGroupNamesIndex].AsString());
    }
    m_thingGroupNamesHasBeenSet = true;
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

  if(jsonValue.ValueExists("shadow"))
  {
    m_shadow = jsonValue.GetString("shadow");

    m_shadowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("deviceDefender"))
  {
    m_deviceDefender = jsonValue.GetString("deviceDefender");

    m_deviceDefenderHasBeenSet = true;
  }

  if(jsonValue.ValueExists("connectivity"))
  {
    m_connectivity = jsonValue.GetObject("connectivity");

    m_connectivityHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingDocument::Jsonize() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_thingIdHasBeenSet)
  {
   payload.WithString("thingId", m_thingId);

  }

  if(m_thingTypeNameHasBeenSet)
  {
   payload.WithString("thingTypeName", m_thingTypeName);

  }

  if(m_thingGroupNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> thingGroupNamesJsonList(m_thingGroupNames.size());
   for(unsigned thingGroupNamesIndex = 0; thingGroupNamesIndex < thingGroupNamesJsonList.GetLength(); ++thingGroupNamesIndex)
   {
     thingGroupNamesJsonList[thingGroupNamesIndex].AsString(m_thingGroupNames[thingGroupNamesIndex]);
   }
   payload.WithArray("thingGroupNames", std::move(thingGroupNamesJsonList));

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

  if(m_shadowHasBeenSet)
  {
   payload.WithString("shadow", m_shadow);

  }

  if(m_deviceDefenderHasBeenSet)
  {
   payload.WithString("deviceDefender", m_deviceDefender);

  }

  if(m_connectivityHasBeenSet)
  {
   payload.WithObject("connectivity", m_connectivity.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
