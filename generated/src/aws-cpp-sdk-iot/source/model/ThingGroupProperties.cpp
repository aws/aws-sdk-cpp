/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ThingGroupProperties::ThingGroupProperties(JsonView jsonValue) : 
    m_thingGroupDescriptionHasBeenSet(false),
    m_attributePayloadHasBeenSet(false)
{
  *this = jsonValue;
}

ThingGroupProperties& ThingGroupProperties::operator =(JsonView jsonValue)
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
