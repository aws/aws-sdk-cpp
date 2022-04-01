/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dms/model/PendingMaintenanceAction.h>
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

PendingMaintenanceAction::PendingMaintenanceAction() : 
    m_actionHasBeenSet(false),
    m_autoAppliedAfterDateHasBeenSet(false),
    m_forcedApplyDateHasBeenSet(false),
    m_optInStatusHasBeenSet(false),
    m_currentApplyDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
}

PendingMaintenanceAction::PendingMaintenanceAction(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_autoAppliedAfterDateHasBeenSet(false),
    m_forcedApplyDateHasBeenSet(false),
    m_optInStatusHasBeenSet(false),
    m_currentApplyDateHasBeenSet(false),
    m_descriptionHasBeenSet(false)
{
  *this = jsonValue;
}

PendingMaintenanceAction& PendingMaintenanceAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetString("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoAppliedAfterDate"))
  {
    m_autoAppliedAfterDate = jsonValue.GetDouble("AutoAppliedAfterDate");

    m_autoAppliedAfterDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForcedApplyDate"))
  {
    m_forcedApplyDate = jsonValue.GetDouble("ForcedApplyDate");

    m_forcedApplyDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OptInStatus"))
  {
    m_optInStatus = jsonValue.GetString("OptInStatus");

    m_optInStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentApplyDate"))
  {
    m_currentApplyDate = jsonValue.GetDouble("CurrentApplyDate");

    m_currentApplyDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingMaintenanceAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", m_action);

  }

  if(m_autoAppliedAfterDateHasBeenSet)
  {
   payload.WithDouble("AutoAppliedAfterDate", m_autoAppliedAfterDate.SecondsWithMSPrecision());
  }

  if(m_forcedApplyDateHasBeenSet)
  {
   payload.WithDouble("ForcedApplyDate", m_forcedApplyDate.SecondsWithMSPrecision());
  }

  if(m_optInStatusHasBeenSet)
  {
   payload.WithString("OptInStatus", m_optInStatus);

  }

  if(m_currentApplyDateHasBeenSet)
  {
   payload.WithDouble("CurrentApplyDate", m_currentApplyDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  return payload;
}

} // namespace Model
} // namespace DatabaseMigrationService
} // namespace Aws
