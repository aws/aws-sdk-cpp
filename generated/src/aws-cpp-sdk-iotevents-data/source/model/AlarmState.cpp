/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/AlarmState.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTEventsData
{
namespace Model
{

AlarmState::AlarmState() : 
    m_stateName(AlarmStateName::NOT_SET),
    m_stateNameHasBeenSet(false),
    m_ruleEvaluationHasBeenSet(false),
    m_customerActionHasBeenSet(false),
    m_systemEventHasBeenSet(false)
{
}

AlarmState::AlarmState(JsonView jsonValue) : 
    m_stateName(AlarmStateName::NOT_SET),
    m_stateNameHasBeenSet(false),
    m_ruleEvaluationHasBeenSet(false),
    m_customerActionHasBeenSet(false),
    m_systemEventHasBeenSet(false)
{
  *this = jsonValue;
}

AlarmState& AlarmState::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("stateName"))
  {
    m_stateName = AlarmStateNameMapper::GetAlarmStateNameForName(jsonValue.GetString("stateName"));

    m_stateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleEvaluation"))
  {
    m_ruleEvaluation = jsonValue.GetObject("ruleEvaluation");

    m_ruleEvaluationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customerAction"))
  {
    m_customerAction = jsonValue.GetObject("customerAction");

    m_customerActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("systemEvent"))
  {
    m_systemEvent = jsonValue.GetObject("systemEvent");

    m_systemEventHasBeenSet = true;
  }

  return *this;
}

JsonValue AlarmState::Jsonize() const
{
  JsonValue payload;

  if(m_stateNameHasBeenSet)
  {
   payload.WithString("stateName", AlarmStateNameMapper::GetNameForAlarmStateName(m_stateName));
  }

  if(m_ruleEvaluationHasBeenSet)
  {
   payload.WithObject("ruleEvaluation", m_ruleEvaluation.Jsonize());

  }

  if(m_customerActionHasBeenSet)
  {
   payload.WithObject("customerAction", m_customerAction.Jsonize());

  }

  if(m_systemEventHasBeenSet)
  {
   payload.WithObject("systemEvent", m_systemEvent.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTEventsData
} // namespace Aws
