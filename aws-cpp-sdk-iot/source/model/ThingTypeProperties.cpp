/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

ThingTypeProperties::ThingTypeProperties(const JsonValue& jsonValue) : 
    m_thingTypeDescriptionHasBeenSet(false),
    m_searchableAttributesHasBeenSet(false)
{
  *this = jsonValue;
}

ThingTypeProperties& ThingTypeProperties::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("thingTypeDescription"))
  {
    m_thingTypeDescription = jsonValue.GetString("thingTypeDescription");

    m_thingTypeDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("searchableAttributes"))
  {
    Array<JsonValue> searchableAttributesJsonList = jsonValue.GetArray("searchableAttributes");
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
   Array<JsonValue> searchableAttributesJsonList(m_searchableAttributes.size());
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