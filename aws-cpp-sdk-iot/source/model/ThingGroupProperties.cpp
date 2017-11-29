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

#include <aws/iot/model/ThingGroupProperties.h>
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

ThingGroupProperties::ThingGroupProperties() : 
    m_thingGroupDescriptionHasBeenSet(false),
    m_attributePayloadHasBeenSet(false)
{
}

ThingGroupProperties::ThingGroupProperties(const JsonValue& jsonValue) : 
    m_thingGroupDescriptionHasBeenSet(false),
    m_attributePayloadHasBeenSet(false)
{
  *this = jsonValue;
}

ThingGroupProperties& ThingGroupProperties::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("thingGroupDescription"))
  {
    m_thingGroupDescription = jsonValue.GetString("thingGroupDescription");

    m_thingGroupDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("attributePayload"))
  {
    m_attributePayload = jsonValue.GetObject("attributePayload");

    m_attributePayloadHasBeenSet = true;
  }

  return *this;
}

JsonValue ThingGroupProperties::Jsonize() const
{
  JsonValue payload;

  if(m_thingGroupDescriptionHasBeenSet)
  {
   payload.WithString("thingGroupDescription", m_thingGroupDescription);

  }

  if(m_attributePayloadHasBeenSet)
  {
   payload.WithObject("attributePayload", m_attributePayload.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
