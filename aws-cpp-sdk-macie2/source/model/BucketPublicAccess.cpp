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

#include <aws/macie2/model/BucketPublicAccess.h>
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

BucketPublicAccess::BucketPublicAccess() : 
    m_effectivePermission(EffectivePermission::NOT_SET),
    m_effectivePermissionHasBeenSet(false),
    m_permissionConfigurationHasBeenSet(false)
{
}

BucketPublicAccess::BucketPublicAccess(JsonView jsonValue) : 
    m_effectivePermission(EffectivePermission::NOT_SET),
    m_effectivePermissionHasBeenSet(false),
    m_permissionConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

BucketPublicAccess& BucketPublicAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("effectivePermission"))
  {
    m_effectivePermission = EffectivePermissionMapper::GetEffectivePermissionForName(jsonValue.GetString("effectivePermission"));

    m_effectivePermissionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permissionConfiguration"))
  {
    m_permissionConfiguration = jsonValue.GetObject("permissionConfiguration");

    m_permissionConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue BucketPublicAccess::Jsonize() const
{
  JsonValue payload;

  if(m_effectivePermissionHasBeenSet)
  {
   payload.WithString("effectivePermission", EffectivePermissionMapper::GetNameForEffectivePermission(m_effectivePermission));
  }

  if(m_permissionConfigurationHasBeenSet)
  {
   payload.WithObject("permissionConfiguration", m_permissionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
