/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ThingPrincipalObject.h>
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

ThingPrincipalObject::ThingPrincipalObject(JsonView jsonValue)
{
  *this = jsonValue;
}

ThingPrincipalObject& ThingPrincipalObject::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("principal"))
  {
    m_principal = jsonValue.GetString("principal");
    m_principalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("thingPrincipalType"))
  {
    m_thingPrincipalType = ThingPrincipalTypeMapper::GetThingPrincipalTypeForName(jsonValue.GetString("thingPrincipalType"));
    m_thingPrincipalTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ThingPrincipalObject::Jsonize() const
{
  JsonValue payload;

  if(m_principalHasBeenSet)
  {
   payload.WithString("principal", m_principal);

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
