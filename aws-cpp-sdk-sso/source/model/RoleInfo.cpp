/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso/model/RoleInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSO
{
namespace Model
{

RoleInfo::RoleInfo() : 
    m_roleNameHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
}

RoleInfo::RoleInfo(JsonView jsonValue) : 
    m_roleNameHasBeenSet(false),
    m_accountIdHasBeenSet(false)
{
  *this = jsonValue;
}

RoleInfo& RoleInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("roleName"))
  {
    m_roleName = jsonValue.GetString("roleName");

    m_roleNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  return *this;
}

JsonValue RoleInfo::Jsonize() const
{
  JsonValue payload;

  if(m_roleNameHasBeenSet)
  {
   payload.WithString("roleName", m_roleName);

  }

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  return payload;
}

} // namespace Model
} // namespace SSO
} // namespace Aws
