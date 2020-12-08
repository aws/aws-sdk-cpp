/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/Role.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AuditManager
{
namespace Model
{

Role::Role() : 
    m_roleType(RoleType::NOT_SET),
    m_roleTypeHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
}

Role::Role(JsonView jsonValue) : 
    m_roleType(RoleType::NOT_SET),
    m_roleTypeHasBeenSet(false),
    m_roleArnHasBeenSet(false)
{
  *this = jsonValue;
}

Role& Role::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleType"))
  {
    m_roleType = RoleTypeMapper::GetRoleTypeForName(jsonValue.GetString("roleType"));

    m_roleTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue Role::Jsonize() const
{
  JsonValue payload;

  if(m_roleTypeHasBeenSet)
  {
   payload.WithString("roleType", RoleTypeMapper::GetNameForRoleType(m_roleType));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  return payload;
}

} // namespace Model
} // namespace AuditManager
} // namespace Aws
