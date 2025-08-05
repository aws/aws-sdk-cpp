/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/AbbreviatedPlan.h>
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

AbbreviatedPlan::AbbreviatedPlan(JsonView jsonValue)
{
  *this = jsonValue;
}

AbbreviatedPlan& AbbreviatedPlan::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owner"))
  {
    m_owner = jsonValue.GetString("owner");
    m_ownerHasBeenSet = true;
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
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");
    m_executionRoleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("activePlanExecution"))
  {
    m_activePlanExecution = jsonValue.GetString("activePlanExecution");
    m_activePlanExecutionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recoveryTimeObjectiveMinutes"))
  {
    m_recoveryTimeObjectiveMinutes = jsonValue.GetInteger("recoveryTimeObjectiveMinutes");
    m_recoveryTimeObjectiveMinutesHasBeenSet = true;
  }
  return *this;
}

JsonValue AbbreviatedPlan::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_ownerHasBeenSet)
  {
   payload.WithString("owner", m_owner);

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

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_activePlanExecutionHasBeenSet)
  {
   payload.WithString("activePlanExecution", m_activePlanExecution);

  }

  if(m_recoveryTimeObjectiveMinutesHasBeenSet)
  {
   payload.WithInteger("recoveryTimeObjectiveMinutes", m_recoveryTimeObjectiveMinutes);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
