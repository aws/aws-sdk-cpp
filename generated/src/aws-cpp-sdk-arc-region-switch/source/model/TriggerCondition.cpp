/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/TriggerCondition.h>
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

TriggerCondition::TriggerCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

TriggerCondition& TriggerCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("associatedAlarmName"))
  {
    m_associatedAlarmName = jsonValue.GetString("associatedAlarmName");
    m_associatedAlarmNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("condition"))
  {
    m_condition = AlarmConditionMapper::GetAlarmConditionForName(jsonValue.GetString("condition"));
    m_conditionHasBeenSet = true;
  }
  return *this;
}

JsonValue TriggerCondition::Jsonize() const
{
  JsonValue payload;

  if(m_associatedAlarmNameHasBeenSet)
  {
   payload.WithString("associatedAlarmName", m_associatedAlarmName);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", AlarmConditionMapper::GetNameForAlarmCondition(m_condition));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
