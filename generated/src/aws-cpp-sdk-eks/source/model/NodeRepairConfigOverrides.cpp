/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/NodeRepairConfigOverrides.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EKS
{
namespace Model
{

NodeRepairConfigOverrides::NodeRepairConfigOverrides(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeRepairConfigOverrides& NodeRepairConfigOverrides::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeMonitoringCondition"))
  {
    m_nodeMonitoringCondition = jsonValue.GetString("nodeMonitoringCondition");
    m_nodeMonitoringConditionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nodeUnhealthyReason"))
  {
    m_nodeUnhealthyReason = jsonValue.GetString("nodeUnhealthyReason");
    m_nodeUnhealthyReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minRepairWaitTimeMins"))
  {
    m_minRepairWaitTimeMins = jsonValue.GetInteger("minRepairWaitTimeMins");
    m_minRepairWaitTimeMinsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("repairAction"))
  {
    m_repairAction = RepairActionMapper::GetRepairActionForName(jsonValue.GetString("repairAction"));
    m_repairActionHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeRepairConfigOverrides::Jsonize() const
{
  JsonValue payload;

  if(m_nodeMonitoringConditionHasBeenSet)
  {
   payload.WithString("nodeMonitoringCondition", m_nodeMonitoringCondition);

  }

  if(m_nodeUnhealthyReasonHasBeenSet)
  {
   payload.WithString("nodeUnhealthyReason", m_nodeUnhealthyReason);

  }

  if(m_minRepairWaitTimeMinsHasBeenSet)
  {
   payload.WithInteger("minRepairWaitTimeMins", m_minRepairWaitTimeMins);

  }

  if(m_repairActionHasBeenSet)
  {
   payload.WithString("repairAction", RepairActionMapper::GetNameForRepairAction(m_repairAction));
  }

  return payload;
}

} // namespace Model
} // namespace EKS
} // namespace Aws
