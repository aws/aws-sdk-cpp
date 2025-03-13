/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/docdb-elastic/model/PendingMaintenanceActionDetails.h>
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

PendingMaintenanceActionDetails::PendingMaintenanceActionDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

PendingMaintenanceActionDetails& PendingMaintenanceActionDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("autoAppliedAfterDate"))
  {
    m_autoAppliedAfterDate = jsonValue.GetString("autoAppliedAfterDate");
    m_autoAppliedAfterDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("currentApplyDate"))
  {
    m_currentApplyDate = jsonValue.GetString("currentApplyDate");
    m_currentApplyDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("forcedApplyDate"))
  {
    m_forcedApplyDate = jsonValue.GetString("forcedApplyDate");
    m_forcedApplyDateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("optInStatus"))
  {
    m_optInStatus = jsonValue.GetString("optInStatus");
    m_optInStatusHasBeenSet = true;
  }
  return *this;
}

JsonValue PendingMaintenanceActionDetails::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_autoAppliedAfterDateHasBeenSet)
  {
   payload.WithString("autoAppliedAfterDate", m_autoAppliedAfterDate);

  }

  if(m_currentApplyDateHasBeenSet)
  {
   payload.WithString("currentApplyDate", m_currentApplyDate);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_forcedApplyDateHasBeenSet)
  {
   payload.WithString("forcedApplyDate", m_forcedApplyDate);

  }

  if(m_optInStatusHasBeenSet)
  {
   payload.WithString("optInStatus", m_optInStatus);

  }

  return payload;
}

} // namespace Model
} // namespace DocDBElastic
} // namespace Aws
