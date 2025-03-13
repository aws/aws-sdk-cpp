/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/PrincipalThingObject.h>
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

PrincipalThingObject::PrincipalThingObject(JsonView jsonValue)
{
  *this = jsonValue;
}

PrincipalThingObject& PrincipalThingObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("thingName"))
  {
    m_thingName = jsonValue.GetString("thingName");
    m_thingNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thingPrincipalType"))
  {
    m_thingPrincipalType = ThingPrincipalTypeMapper::GetThingPrincipalTypeForName(jsonValue.GetString("thingPrincipalType"));
    m_thingPrincipalTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue PrincipalThingObject::Jsonize() const
{
  JsonValue payload;

  if(m_thingNameHasBeenSet)
  {
   payload.WithString("thingName", m_thingName);

  }

  if(m_thingPrincipalTypeHasBeenSet)
  {
   payload.WithString("thingPrincipalType", ThingPrincipalTypeMapper::GetNameForThingPrincipalType(m_thingPrincipalType));
  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
