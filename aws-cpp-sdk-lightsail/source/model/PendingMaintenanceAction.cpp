/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lightsail/model/PendingMaintenanceAction.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Lightsail
{
namespace Model
{

PendingMaintenanceAction::PendingMaintenanceAction() : 
    m_actionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_currentApplyDateHasBeenSet(false)
{
}

PendingMaintenanceAction::PendingMaintenanceAction(JsonView jsonValue) : 
    m_actionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_currentApplyDateHasBeenSet(false)
{
  *this = jsonValue;
}

PendingMaintenanceAction& PendingMaintenanceAction::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetString("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentApplyDate"))
  {
    m_currentApplyDate = jsonValue.GetDouble("currentApplyDate");

    m_currentApplyDateHasBeenSet = true;
  }

  return *this;
}

JsonValue PendingMaintenanceAction::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", m_action);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_currentApplyDateHasBeenSet)
  {
   payload.WithDouble("currentApplyDate", m_currentApplyDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Lightsail
} // namespace Aws
