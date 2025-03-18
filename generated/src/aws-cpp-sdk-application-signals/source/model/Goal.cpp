/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/Goal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationSignals
{
namespace Model
{

Goal::Goal(JsonView jsonValue)
{
  *this = jsonValue;
}

Goal& Goal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Interval"))
  {
    m_interval = jsonValue.GetObject("Interval");
    m_intervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AttainmentGoal"))
  {
    m_attainmentGoal = jsonValue.GetDouble("AttainmentGoal");
    m_attainmentGoalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WarningThreshold"))
  {
    m_warningThreshold = jsonValue.GetDouble("WarningThreshold");
    m_warningThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue Goal::Jsonize() const
{
  JsonValue payload;

  if(m_intervalHasBeenSet)
  {
   payload.WithObject("Interval", m_interval.Jsonize());

  }

  if(m_attainmentGoalHasBeenSet)
  {
   payload.WithDouble("AttainmentGoal", m_attainmentGoal);

  }

  if(m_warningThresholdHasBeenSet)
  {
   payload.WithDouble("WarningThreshold", m_warningThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
