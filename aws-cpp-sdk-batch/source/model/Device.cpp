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

#include <aws/batch/model/Device.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

Device::Device() : 
    m_hostPathHasBeenSet(false),
    m_containerPathHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
}

Device::Device(JsonView jsonValue) : 
    m_hostPathHasBeenSet(false),
    m_containerPathHasBeenSet(false),
    m_permissionsHasBeenSet(false)
{
  *this = jsonValue;
}

Device& Device::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostPath"))
  {
    m_hostPath = jsonValue.GetString("hostPath");

    m_hostPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("containerPath"))
  {
    m_containerPath = jsonValue.GetString("containerPath");

    m_containerPathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("permissions"))
  {
    Array<JsonView> permissionsJsonList = jsonValue.GetArray("permissions");
    for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
    {
      m_permissions.push_back(DeviceCgroupPermissionMapper::GetDeviceCgroupPermissionForName(permissionsJsonList[permissionsIndex].AsString()));
    }
    m_permissionsHasBeenSet = true;
  }

  return *this;
}

JsonValue Device::Jsonize() const
{
  JsonValue payload;

  if(m_hostPathHasBeenSet)
  {
   payload.WithString("hostPath", m_hostPath);

  }

  if(m_containerPathHasBeenSet)
  {
   payload.WithString("containerPath", m_containerPath);

  }

  if(m_permissionsHasBeenSet)
  {
   Array<JsonValue> permissionsJsonList(m_permissions.size());
   for(unsigned permissionsIndex = 0; permissionsIndex < permissionsJsonList.GetLength(); ++permissionsIndex)
   {
     permissionsJsonList[permissionsIndex].AsString(DeviceCgroupPermissionMapper::GetNameForDeviceCgroupPermission(m_permissions[permissionsIndex]));
   }
   payload.WithArray("permissions", std::move(permissionsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
