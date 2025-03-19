/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/ResourcePendingMaintenanceAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DocDBElastic
{
namespace Model
{

ResourcePendingMaintenanceAction::ResourcePendingMaintenanceAction(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourcePendingMaintenanceAction& ResourcePendingMaintenanceAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("pendingMaintenanceActionDetails"))
  {
    Aws::Utils::Array<JsonView> pendingMaintenanceActionDetailsJsonList = jsonValue.GetArray("pendingMaintenanceActionDetails");
    for(unsigned pendingMaintenanceActionDetailsIndex = 0; pendingMaintenanceActionDetailsIndex < pendingMaintenanceActionDetailsJsonList.GetLength(); ++pendingMaintenanceActionDetailsIndex)
    {
      m_pendingMaintenanceActionDetails.push_back(pendingMaintenanceActionDetailsJsonList[pendingMaintenanceActionDetailsIndex].AsObject());
    }
    m_pendingMaintenanceActionDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("resourceArn"))
  {
    m_resourceArn = jsonValue.GetString("resourceArn");
    m_resourceArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourcePendingMaintenanceAction::Jsonize() const
{
  JsonValue payload;

  if(m_pendingMaintenanceActionDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> pendingMaintenanceActionDetailsJsonList(m_pendingMaintenanceActionDetails.size());
   for(unsigned pendingMaintenanceActionDetailsIndex = 0; pendingMaintenanceActionDetailsIndex < pendingMaintenanceActionDetailsJsonList.GetLength(); ++pendingMaintenanceActionDetailsIndex)
   {
     pendingMaintenanceActionDetailsJsonList[pendingMaintenanceActionDetailsIndex].AsObject(m_pendingMaintenanceActionDetails[pendingMaintenanceActionDetailsIndex].Jsonize());
   }
   payload.WithArray("pendingMaintenanceActionDetails", std::move(pendingMaintenanceActionDetailsJsonList));

  }

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("resourceArn", m_resourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
