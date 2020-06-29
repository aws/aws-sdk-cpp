/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/PermissionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

PermissionConfiguration::PermissionConfiguration() : 
    m_bucketLevelPermissionsHasBeenSet(false),
    m_accountLevelPermissionsHasBeenSet(false)
{
}

PermissionConfiguration::PermissionConfiguration(JsonView jsonValue) : 
    m_bucketLevelPermissionsHasBeenSet(false),
    m_accountLevelPermissionsHasBeenSet(false)
{
  *this = jsonValue;
}

PermissionConfiguration& PermissionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bucketLevelPermissions"))
  {
    m_bucketLevelPermissions = jsonValue.GetObject("bucketLevelPermissions");

    m_bucketLevelPermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("accountLevelPermissions"))
  {
    m_accountLevelPermissions = jsonValue.GetObject("accountLevelPermissions");

    m_accountLevelPermissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue PermissionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bucketLevelPermissionsHasBeenSet)
  {
   payload.WithObject("bucketLevelPermissions", m_bucketLevelPermissions.Jsonize());

  }

  if(m_accountLevelPermissionsHasBeenSet)
  {
   payload.WithObject("accountLevelPermissions", m_accountLevelPermissions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
