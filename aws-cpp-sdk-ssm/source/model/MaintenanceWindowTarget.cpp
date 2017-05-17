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

#include <aws/ssm/model/MaintenanceWindowTarget.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SSM
{
namespace Model
{

MaintenanceWindowTarget::MaintenanceWindowTarget() : 
    m_windowIdHasBeenSet(false),
    m_windowTargetIdHasBeenSet(false),
    m_resourceType(MaintenanceWindowResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_ownerInformationHasBeenSet(false)
{
}

MaintenanceWindowTarget::MaintenanceWindowTarget(const JsonValue& jsonValue) : 
    m_windowIdHasBeenSet(false),
    m_windowTargetIdHasBeenSet(false),
    m_resourceType(MaintenanceWindowResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_targetsHasBeenSet(false),
    m_ownerInformationHasBeenSet(false)
{
  *this = jsonValue;
}

MaintenanceWindowTarget& MaintenanceWindowTarget::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("WindowId"))
  {
    m_windowId = jsonValue.GetString("WindowId");

    m_windowIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WindowTargetId"))
  {
    m_windowTargetId = jsonValue.GetString("WindowTargetId");

    m_windowTargetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceType"))
  {
    m_resourceType = MaintenanceWindowResourceTypeMapper::GetMaintenanceWindowResourceTypeForName(jsonValue.GetString("ResourceType"));

    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Targets"))
  {
    Array<JsonValue> targetsJsonList = jsonValue.GetArray("Targets");
    for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
    {
      m_targets.push_back(targetsJsonList[targetsIndex].AsObject());
    }
    m_targetsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerInformation"))
  {
    m_ownerInformation = jsonValue.GetString("OwnerInformation");

    m_ownerInformationHasBeenSet = true;
  }

  return *this;
}

JsonValue MaintenanceWindowTarget::Jsonize() const
{
  JsonValue payload;

  if(m_windowIdHasBeenSet)
  {
   payload.WithString("WindowId", m_windowId);

  }

  if(m_windowTargetIdHasBeenSet)
  {
   payload.WithString("WindowTargetId", m_windowTargetId);

  }

  if(m_resourceTypeHasBeenSet)
  {
   payload.WithString("ResourceType", MaintenanceWindowResourceTypeMapper::GetNameForMaintenanceWindowResourceType(m_resourceType));
  }

  if(m_targetsHasBeenSet)
  {
   Array<JsonValue> targetsJsonList(m_targets.size());
   for(unsigned targetsIndex = 0; targetsIndex < targetsJsonList.GetLength(); ++targetsIndex)
   {
     targetsJsonList[targetsIndex].AsObject(m_targets[targetsIndex].Jsonize());
   }
   payload.WithArray("Targets", std::move(targetsJsonList));

  }

  if(m_ownerInformationHasBeenSet)
  {
   payload.WithString("OwnerInformation", m_ownerInformation);

  }

  return payload;
}

} // namespace Model
} // namespace SSM
} // namespace Aws