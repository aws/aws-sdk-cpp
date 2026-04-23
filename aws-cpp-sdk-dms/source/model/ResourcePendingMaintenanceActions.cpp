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

#include <aws/dms/model/ResourcePendingMaintenanceActions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DatabaseMigrationService
{
namespace Model
{

ResourcePendingMaintenanceActions::ResourcePendingMaintenanceActions() : 
    m_resourceIdentifierHasBeenSet(false),
    m_pendingMaintenanceActionDetailsHasBeenSet(false)
{
}

ResourcePendingMaintenanceActions::ResourcePendingMaintenanceActions(JsonView jsonValue) : 
    m_resourceIdentifierHasBeenSet(false),
    m_pendingMaintenanceActionDetailsHasBeenSet(false)
{
  *this = jsonValue;
}

ResourcePendingMaintenanceActions& ResourcePendingMaintenanceActions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResourceIdentifier"))
  {
    m_resourceIdentifier = jsonValue.GetString("ResourceIdentifier");

    m_resourceIdentifierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PendingMaintenanceActionDetails"))
  {
    Array<JsonView> pendingMaintenanceActionDetailsJsonList = jsonValue.GetArray("PendingMaintenanceActionDetails");
    for(unsigned pendingMaintenanceActionDetailsIndex = 0; pendingMaintenanceActionDetailsIndex < pendingMaintenanceActionDetailsJsonList.GetLength(); ++pendingMaintenanceActionDetailsIndex)
    {
      m_pendingMaintenanceActionDetails.push_back(pendingMaintenanceActionDetailsJsonList[pendingMaintenanceActionDetailsIndex].AsObject());
    }
    m_pendingMaintenanceActionDetailsHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourcePendingMaintenanceActions::Jsonize() const
{
  JsonValue payload;

  if(m_resourceIdentifierHasBeenSet)
  {
   payload.WithString("ResourceIdentifier", m_resourceIdentifier);

  }

  if(m_pendingMaintenanceActionDetailsHasBeenSet)
  {
   Array<JsonValue> pendingMaintenanceActionDetailsJsonList(m_pendingMaintenanceActionDetails.size());
   for(unsigned pendingMaintenanceActionDetailsIndex = 0; pendingMaintenanceActionDetailsIndex < pendingMaintenanceActionDetailsJsonList.GetLength(); ++pendingMaintenanceActionDetailsIndex)
   {
     pendingMaintenanceActionDetailsJsonList[pendingMaintenanceActionDetailsIndex].AsObject(m_pendingMaintenanceActionDetails[pendingMaintenanceActionDetailsIndex].Jsonize());
   }
   payload.WithArray("PendingMaintenanceActionDetails", std::move(pendingMaintenanceActionDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
