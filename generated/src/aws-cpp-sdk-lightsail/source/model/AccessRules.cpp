/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/AccessRules.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

AccessRules::AccessRules() : 
    m_getObject(AccessType::NOT_SET),
    m_getObjectHasBeenSet(false),
    m_allowPublicOverrides(false),
    m_allowPublicOverridesHasBeenSet(false)
{
}

AccessRules::AccessRules(JsonView jsonValue) : 
    m_getObject(AccessType::NOT_SET),
    m_getObjectHasBeenSet(false),
    m_allowPublicOverrides(false),
    m_allowPublicOverridesHasBeenSet(false)
{
  *this = jsonValue;
}

AccessRules& AccessRules::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("getObject"))
  {
    m_getObject = AccessTypeMapper::GetAccessTypeForName(jsonValue.GetString("getObject"));

    m_getObjectHasBeenSet = true;
  }

  if(jsonValue.ValueExists("allowPublicOverrides"))
  {
    m_allowPublicOverrides = jsonValue.GetBool("allowPublicOverrides");

    m_allowPublicOverridesHasBeenSet = true;
  }

  return *this;
}

JsonValue AccessRules::Jsonize() const
{
  JsonValue payload;

  if(m_getObjectHasBeenSet)
  {
   payload.WithString("getObject", AccessTypeMapper::GetNameForAccessType(m_getObject));
  }

  if(m_allowPublicOverridesHasBeenSet)
  {
   payload.WithBool("allowPublicOverrides", m_allowPublicOverrides);

  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
