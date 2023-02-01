/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingTypeProperties.h>
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

ThingTypeProperties::ThingTypeProperties() : 
    m_thingTypeDescriptionHasBeenSet(false),
    m_searchableAttributesHasBeenSet(false)
{
}

ThingTypeProperties::ThingTypeProperties(JsonView jsonValue) : 
    m_thingTypeDescriptionHasBeenSet(false),
    m_searchableAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

ThingTypeProperties& ThingTypeProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingTypeDescription"))
  {
    m_thingTypeDescription = jsonValue.GetString("thingTypeDescription");

    m_thingTypeDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("searchableAttributes"))
  {
    Aws::Utils::Array<JsonView> searchableAttributesJsonList = jsonValue.GetArray("searchableAttributes");
    for(unsigned searchableAttributesIndex = 0; searchableAttributesIndex < searchableAttributesJsonList.GetLength(); ++searchableAttributesIndex)
    {
      m_searchableAttributes.push_back(searchableAttributesJsonList[searchableAttributesIndex].AsString());
    }
    m_searchableAttributesHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingTypeProperties::Jsonize() const
{
  JsonValue payload;

  if(m_thingTypeDescriptionHasBeenSet)
  {
   payload.WithString("thingTypeDescription", m_thingTypeDescription);

  }

  if(m_searchableAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> searchableAttributesJsonList(m_searchableAttributes.size());
   for(unsigned searchableAttributesIndex = 0; searchableAttributesIndex < searchableAttributesJsonList.GetLength(); ++searchableAttributesIndex)
   {
     searchableAttributesJsonList[searchableAttributesIndex].AsString(m_searchableAttributes[searchableAttributesIndex]);
   }
   payload.WithArray("searchableAttributes", std::move(searchableAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
