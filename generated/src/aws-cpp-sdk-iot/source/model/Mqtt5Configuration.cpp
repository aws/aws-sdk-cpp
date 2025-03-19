/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/Mqtt5Configuration.h>
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

Mqtt5Configuration::Mqtt5Configuration(JsonView jsonValue)
{
  *this = jsonValue;
}

Mqtt5Configuration& Mqtt5Configuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("propagatingAttributes"))
  {
    Aws::Utils::Array<JsonView> propagatingAttributesJsonList = jsonValue.GetArray("propagatingAttributes");
    for(unsigned propagatingAttributesIndex = 0; propagatingAttributesIndex < propagatingAttributesJsonList.GetLength(); ++propagatingAttributesIndex)
    {
      m_propagatingAttributes.push_back(propagatingAttributesJsonList[propagatingAttributesIndex].AsObject());
    }
    m_propagatingAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue Mqtt5Configuration::Jsonize() const
{
  JsonValue payload;

  if(m_propagatingAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> propagatingAttributesJsonList(m_propagatingAttributes.size());
   for(unsigned propagatingAttributesIndex = 0; propagatingAttributesIndex < propagatingAttributesJsonList.GetLength(); ++propagatingAttributesIndex)
   {
     propagatingAttributesJsonList[propagatingAttributesIndex].AsObject(m_propagatingAttributes[propagatingAttributesIndex].Jsonize());
   }
   payload.WithArray("propagatingAttributes", std::move(propagatingAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
