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
