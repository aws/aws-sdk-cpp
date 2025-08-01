/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/Trigger.h>
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

Trigger::Trigger(JsonView jsonValue)
{
  *this = jsonValue;
}

Trigger& Trigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetRegion"))
  {
    m_targetRegion = jsonValue.GetString("targetRegion");
    m_targetRegionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = WorkflowTargetActionMapper::GetWorkflowTargetActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditions"))
  {
    Aws::Utils::Array<JsonView> conditionsJsonList = jsonValue.GetArray("conditions");
    for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
    {
      m_conditions.push_back(conditionsJsonList[conditionsIndex].AsObject());
    }
    m_conditionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("minDelayMinutesBetweenExecutions"))
  {
    m_minDelayMinutesBetweenExecutions = jsonValue.GetInteger("minDelayMinutesBetweenExecutions");
    m_minDelayMinutesBetweenExecutionsHasBeenSet = true;
  }
  return *this;
}

JsonValue Trigger::Jsonize() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_targetRegionHasBeenSet)
  {
   payload.WithString("targetRegion", m_targetRegion);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", WorkflowTargetActionMapper::GetNameForWorkflowTargetAction(m_action));
  }

  if(m_conditionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> conditionsJsonList(m_conditions.size());
   for(unsigned conditionsIndex = 0; conditionsIndex < conditionsJsonList.GetLength(); ++conditionsIndex)
   {
     conditionsJsonList[conditionsIndex].AsObject(m_conditions[conditionsIndex].Jsonize());
   }
   payload.WithArray("conditions", std::move(conditionsJsonList));

  }

  if(m_minDelayMinutesBetweenExecutionsHasBeenSet)
  {
   payload.WithInteger("minDelayMinutesBetweenExecutions", m_minDelayMinutesBetweenExecutions);

  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
