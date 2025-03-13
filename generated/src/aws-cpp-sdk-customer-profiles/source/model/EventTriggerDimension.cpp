/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/EventTriggerDimension.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

EventTriggerDimension::EventTriggerDimension(JsonView jsonValue)
{
  *this = jsonValue;
}

EventTriggerDimension& EventTriggerDimension::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ObjectAttributes"))
  {
    Aws::Utils::Array<JsonView> objectAttributesJsonList = jsonValue.GetArray("ObjectAttributes");
    for(unsigned objectAttributesIndex = 0; objectAttributesIndex < objectAttributesJsonList.GetLength(); ++objectAttributesIndex)
    {
      m_objectAttributes.push_back(objectAttributesJsonList[objectAttributesIndex].AsObject());
    }
    m_objectAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue EventTriggerDimension::Jsonize() const
{
  JsonValue payload;

  if(m_objectAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> objectAttributesJsonList(m_objectAttributes.size());
   for(unsigned objectAttributesIndex = 0; objectAttributesIndex < objectAttributesJsonList.GetLength(); ++objectAttributesIndex)
   {
     objectAttributesJsonList[objectAttributesIndex].AsObject(m_objectAttributes[objectAttributesIndex].Jsonize());
   }
   payload.WithArray("ObjectAttributes", std::move(objectAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
