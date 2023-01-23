/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloud9/model/EnvironmentMember.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Cloud9
{
namespace Model
{

EnvironmentMember::EnvironmentMember() : 
    m_permissions(Permissions::NOT_SET),
    m_permissionsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userArnHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_lastAccessHasBeenSet(false)
{
}

EnvironmentMember::EnvironmentMember(JsonView jsonValue) : 
    m_permissions(Permissions::NOT_SET),
    m_permissionsHasBeenSet(false),
    m_userIdHasBeenSet(false),
    m_userArnHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_lastAccessHasBeenSet(false)
{
  *this = jsonValue;
}

EnvironmentMember& EnvironmentMember::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("permissions"))
  {
    m_permissions = PermissionsMapper::GetPermissionsForName(jsonValue.GetString("permissions"));

    m_permissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");

    m_userIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("userArn"))
  {
    m_userArn = jsonValue.GetString("userArn");

    m_userArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("environmentId"))
  {
    m_environmentId = jsonValue.GetString("environmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastAccess"))
  {
    m_lastAccess = jsonValue.GetDouble("lastAccess");

    m_lastAccessHasBeenSet = true;
  }

  return *this;
}

JsonValue EnvironmentMember::Jsonize() const
{
  JsonValue payload;

  if(m_permissionsHasBeenSet)
  {
   payload.WithString("permissions", PermissionsMapper::GetNameForPermissions(m_permissions));
  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_userArnHasBeenSet)
  {
   payload.WithString("userArn", m_userArn);

  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("environmentId", m_environmentId);

  }

  if(m_lastAccessHasBeenSet)
  {
   payload.WithDouble("lastAccess", m_lastAccess.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Cloud9
} // namespace Aws
