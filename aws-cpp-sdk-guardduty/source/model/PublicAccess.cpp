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

#include <aws/guardduty/model/PublicAccess.h>
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

PublicAccess::PublicAccess() : 
    m_permissionConfigurationHasBeenSet(false),
    m_effectivePermissionHasBeenSet(false)
{
}

PublicAccess::PublicAccess(JsonView jsonValue) : 
    m_permissionConfigurationHasBeenSet(false),
    m_effectivePermissionHasBeenSet(false)
{
  *this = jsonValue;
}

PublicAccess& PublicAccess::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("permissionConfiguration"))
  {
    m_permissionConfiguration = jsonValue.GetObject("permissionConfiguration");

    m_permissionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("effectivePermission"))
  {
    m_effectivePermission = jsonValue.GetString("effectivePermission");

    m_effectivePermissionHasBeenSet = true;
  }

  return *this;
}

JsonValue PublicAccess::Jsonize() const
{
  JsonValue payload;

  if(m_permissionConfigurationHasBeenSet)
  {
   payload.WithObject("permissionConfiguration", m_permissionConfiguration.Jsonize());

  }

  if(m_effectivePermissionHasBeenSet)
  {
   payload.WithString("effectivePermission", m_effectivePermission);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
