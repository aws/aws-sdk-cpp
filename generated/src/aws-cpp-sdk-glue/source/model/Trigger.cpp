/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/Trigger.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glue
{
namespace Model
{

Trigger::Trigger() : 
    m_nameHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(TriggerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(TriggerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_predicateHasBeenSet(false),
    m_eventBatchingConditionHasBeenSet(false)
{
}

Trigger::Trigger(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_workflowNameHasBeenSet(false),
    m_idHasBeenSet(false),
    m_type(TriggerType::NOT_SET),
    m_typeHasBeenSet(false),
    m_state(TriggerState::NOT_SET),
    m_stateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_scheduleHasBeenSet(false),
    m_actionsHasBeenSet(false),
    m_predicateHasBeenSet(false),
    m_eventBatchingConditionHasBeenSet(false)
{
  *this = jsonValue;
}

Trigger& Trigger::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WorkflowName"))
  {
    m_workflowName = jsonValue.GetString("WorkflowName");

    m_workflowNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

    m_idHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = TriggerTypeMapper::GetTriggerTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = TriggerStateMapper::GetTriggerStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Schedule"))
  {
    m_schedule = jsonValue.GetString("Schedule");

    m_scheduleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Actions"))
  {
    Aws::Utils::Array<JsonView> actionsJsonList = jsonValue.GetArray("Actions");
    for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
    {
      m_actions.push_back(actionsJsonList[actionsIndex].AsObject());
    }
    m_actionsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Predicate"))
  {
    m_predicate = jsonValue.GetObject("Predicate");

    m_predicateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EventBatchingCondition"))
  {
    m_eventBatchingCondition = jsonValue.GetObject("EventBatchingCondition");

    m_eventBatchingConditionHasBeenSet = true;
  }

  return *this;
}

JsonValue Trigger::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_workflowNameHasBeenSet)
  {
   payload.WithString("WorkflowName", m_workflowName);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", TriggerTypeMapper::GetNameForTriggerType(m_type));
  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", TriggerStateMapper::GetNameForTriggerState(m_state));
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_scheduleHasBeenSet)
  {
   payload.WithString("Schedule", m_schedule);

  }

  if(m_actionsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> actionsJsonList(m_actions.size());
   for(unsigned actionsIndex = 0; actionsIndex < actionsJsonList.GetLength(); ++actionsIndex)
   {
     actionsJsonList[actionsIndex].AsObject(m_actions[actionsIndex].Jsonize());
   }
   payload.WithArray("Actions", std::move(actionsJsonList));

  }

  if(m_predicateHasBeenSet)
  {
   payload.WithObject("Predicate", m_predicate.Jsonize());

  }

  if(m_eventBatchingConditionHasBeenSet)
  {
   payload.WithObject("EventBatchingCondition", m_eventBatchingCondition.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glue
} // namespace Aws
