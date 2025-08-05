/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Plan.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

Plan::Plan(JsonView jsonValue)
{
  *this = jsonValue;
}

Plan& Plan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflows"))
  {
    Aws::Utils::Array<JsonView> workflowsJsonList = jsonValue.GetArray("workflows");
    for(unsigned workflowsIndex = 0; workflowsIndex < workflowsJsonList.GetLength(); ++workflowsIndex)
    {
      m_workflows.push_back(workflowsJsonList[workflowsIndex].AsObject());
    }
    m_workflowsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");
    m_executionRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recoveryTimeObjectiveMinutes"))
  {
    m_recoveryTimeObjectiveMinutes = jsonValue.GetInteger("recoveryTimeObjectiveMinutes");
    m_recoveryTimeObjectiveMinutesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("associatedAlarms"))
  {
    Aws::Map<Aws::String, JsonView> associatedAlarmsJsonMap = jsonValue.GetObject("associatedAlarms").GetAllObjects();
    for(auto& associatedAlarmsItem : associatedAlarmsJsonMap)
    {
      m_associatedAlarms[associatedAlarmsItem.first] = associatedAlarmsItem.second.AsObject();
    }
    m_associatedAlarmsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("triggers"))
  {
    Aws::Utils::Array<JsonView> triggersJsonList = jsonValue.GetArray("triggers");
    for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
    {
      m_triggers.push_back(triggersJsonList[triggersIndex].AsObject());
    }
    m_triggersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regions"))
  {
    Aws::Utils::Array<JsonView> regionsJsonList = jsonValue.GetArray("regions");
    for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
    {
      m_regions.push_back(regionsJsonList[regionsIndex].AsString());
    }
    m_regionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recoveryApproach"))
  {
    m_recoveryApproach = RecoveryApproachMapper::GetRecoveryApproachForName(jsonValue.GetString("recoveryApproach"));
    m_recoveryApproachHasBeenSet = true;
  }
  if(jsonValue.ValueExists("primaryRegion"))
  {
    m_primaryRegion = jsonValue.GetString("primaryRegion");
    m_primaryRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue Plan::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_workflowsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> workflowsJsonList(m_workflows.size());
   for(unsigned workflowsIndex = 0; workflowsIndex < workflowsJsonList.GetLength(); ++workflowsIndex)
   {
     workflowsJsonList[workflowsIndex].AsObject(m_workflows[workflowsIndex].Jsonize());
   }
   payload.WithArray("workflows", std::move(workflowsJsonList));

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_recoveryTimeObjectiveMinutesHasBeenSet)
  {
   payload.WithInteger("recoveryTimeObjectiveMinutes", m_recoveryTimeObjectiveMinutes);

  }

  if(m_associatedAlarmsHasBeenSet)
  {
   JsonValue associatedAlarmsJsonMap;
   for(auto& associatedAlarmsItem : m_associatedAlarms)
   {
     associatedAlarmsJsonMap.WithObject(associatedAlarmsItem.first, associatedAlarmsItem.second.Jsonize());
   }
   payload.WithObject("associatedAlarms", std::move(associatedAlarmsJsonMap));

  }

  if(m_triggersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> triggersJsonList(m_triggers.size());
   for(unsigned triggersIndex = 0; triggersIndex < triggersJsonList.GetLength(); ++triggersIndex)
   {
     triggersJsonList[triggersIndex].AsObject(m_triggers[triggersIndex].Jsonize());
   }
   payload.WithArray("triggers", std::move(triggersJsonList));

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_regionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> regionsJsonList(m_regions.size());
   for(unsigned regionsIndex = 0; regionsIndex < regionsJsonList.GetLength(); ++regionsIndex)
   {
     regionsJsonList[regionsIndex].AsString(m_regions[regionsIndex]);
   }
   payload.WithArray("regions", std::move(regionsJsonList));

  }

  if(m_recoveryApproachHasBeenSet)
  {
   payload.WithString("recoveryApproach", RecoveryApproachMapper::GetNameForRecoveryApproach(m_recoveryApproach));
  }

  if(m_primaryRegionHasBeenSet)
  {
   payload.WithString("primaryRegion", m_primaryRegion);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
