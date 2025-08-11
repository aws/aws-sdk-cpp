/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/FleetSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

FleetSummary::FleetSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

FleetSummary& FleetSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("fleetId"))
  {
    m_fleetId = jsonValue.GetString("fleetId");
    m_fleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("farmId"))
  {
    m_farmId = jsonValue.GetString("farmId");
    m_farmIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");
    m_displayNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = FleetStatusMapper::GetFleetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoScalingStatus"))
  {
    m_autoScalingStatus = AutoScalingStatusMapper::GetAutoScalingStatusForName(jsonValue.GetString("autoScalingStatus"));
    m_autoScalingStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetWorkerCount"))
  {
    m_targetWorkerCount = jsonValue.GetInteger("targetWorkerCount");
    m_targetWorkerCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workerCount"))
  {
    m_workerCount = jsonValue.GetInteger("workerCount");
    m_workerCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minWorkerCount"))
  {
    m_minWorkerCount = jsonValue.GetInteger("minWorkerCount");
    m_minWorkerCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("maxWorkerCount"))
  {
    m_maxWorkerCount = jsonValue.GetInteger("maxWorkerCount");
    m_maxWorkerCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configuration"))
  {
    m_configuration = jsonValue.GetObject("configuration");
    m_configurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");
    m_createdByHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedBy"))
  {
    m_updatedBy = jsonValue.GetString("updatedBy");
    m_updatedByHasBeenSet = true;
  }
  return *this;
}

JsonValue FleetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("fleetId", m_fleetId);

  }

  if(m_farmIdHasBeenSet)
  {
   payload.WithString("farmId", m_farmId);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", FleetStatusMapper::GetNameForFleetStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("statusMessage", m_statusMessage);

  }

  if(m_autoScalingStatusHasBeenSet)
  {
   payload.WithString("autoScalingStatus", AutoScalingStatusMapper::GetNameForAutoScalingStatus(m_autoScalingStatus));
  }

  if(m_targetWorkerCountHasBeenSet)
  {
   payload.WithInteger("targetWorkerCount", m_targetWorkerCount);

  }

  if(m_workerCountHasBeenSet)
  {
   payload.WithInteger("workerCount", m_workerCount);

  }

  if(m_minWorkerCountHasBeenSet)
  {
   payload.WithInteger("minWorkerCount", m_minWorkerCount);

  }

  if(m_maxWorkerCountHasBeenSet)
  {
   payload.WithInteger("maxWorkerCount", m_maxWorkerCount);

  }

  if(m_configurationHasBeenSet)
  {
   payload.WithObject("configuration", m_configuration.Jsonize());

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_createdByHasBeenSet)
  {
   payload.WithString("createdBy", m_createdBy);

  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithString("updatedAt", m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_updatedByHasBeenSet)
  {
   payload.WithString("updatedBy", m_updatedBy);

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
