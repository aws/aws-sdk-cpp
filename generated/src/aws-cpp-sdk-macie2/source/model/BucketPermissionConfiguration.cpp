/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/BucketPermissionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

BucketPermissionConfiguration::BucketPermissionConfiguration() : 
    m_accountLevelPermissionsHasBeenSet(false),
    m_bucketLevelPermissionsHasBeenSet(false)
{
}

BucketPermissionConfiguration::BucketPermissionConfiguration(JsonView jsonValue) : 
    m_accountLevelPermissionsHasBeenSet(false),
    m_bucketLevelPermissionsHasBeenSet(false)
{
  *this = jsonValue;
}

BucketPermissionConfiguration& BucketPermissionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountLevelPermissions"))
  {
    m_accountLevelPermissions = jsonValue.GetObject("accountLevelPermissions");

    m_accountLevelPermissionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bucketLevelPermissions"))
  {
    m_bucketLevelPermissions = jsonValue.GetObject("bucketLevelPermissions");

    m_bucketLevelPermissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketPermissionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_accountLevelPermissionsHasBeenSet)
  {
   payload.WithObject("accountLevelPermissions", m_accountLevelPermissions.Jsonize());

  }

  if(m_bucketLevelPermissionsHasBeenSet)
  {
   payload.WithObject("bucketLevelPermissions", m_bucketLevelPermissions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
