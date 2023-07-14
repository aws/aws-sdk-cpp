/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/PITPolicyRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

PITPolicyRule::PITPolicyRule() : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_retentionDuration(0),
    m_retentionDurationHasBeenSet(false),
    m_ruleID(0),
    m_ruleIDHasBeenSet(false),
    m_units(PITPolicyRuleUnits::NOT_SET),
    m_unitsHasBeenSet(false)
{
}

PITPolicyRule::PITPolicyRule(JsonView jsonValue) : 
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_interval(0),
    m_intervalHasBeenSet(false),
    m_retentionDuration(0),
    m_retentionDurationHasBeenSet(false),
    m_ruleID(0),
    m_ruleIDHasBeenSet(false),
    m_units(PITPolicyRuleUnits::NOT_SET),
    m_unitsHasBeenSet(false)
{
  *this = jsonValue;
}

PITPolicyRule& PITPolicyRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enabled"))
  {
    m_enabled = jsonValue.GetBool("enabled");

    m_enabledHasBeenSet = true;
  }

  if(jsonValue.ValueExists("interval"))
  {
    m_interval = jsonValue.GetInteger("interval");

    m_intervalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retentionDuration"))
  {
    m_retentionDuration = jsonValue.GetInteger("retentionDuration");

    m_retentionDurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ruleID"))
  {
    m_ruleID = jsonValue.GetInt64("ruleID");

    m_ruleIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("units"))
  {
    m_units = PITPolicyRuleUnitsMapper::GetPITPolicyRuleUnitsForName(jsonValue.GetString("units"));

    m_unitsHasBeenSet = true;
  }

  return *this;
}

JsonValue PITPolicyRule::Jsonize() const
{
  JsonValue payload;

  if(m_enabledHasBeenSet)
  {
   payload.WithBool("enabled", m_enabled);

  }

  if(m_intervalHasBeenSet)
  {
   payload.WithInteger("interval", m_interval);

  }

  if(m_retentionDurationHasBeenSet)
  {
   payload.WithInteger("retentionDuration", m_retentionDuration);

  }

  if(m_ruleIDHasBeenSet)
  {
   payload.WithInt64("ruleID", m_ruleID);

  }

  if(m_unitsHasBeenSet)
  {
   payload.WithString("units", PITPolicyRuleUnitsMapper::GetNameForPITPolicyRuleUnits(m_units));
  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
