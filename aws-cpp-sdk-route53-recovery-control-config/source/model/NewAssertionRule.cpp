/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53-recovery-control-config/model/NewAssertionRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53RecoveryControlConfig
{
namespace Model
{

NewAssertionRule::NewAssertionRule() : 
    m_assertedControlsHasBeenSet(false),
    m_controlPanelArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleConfigHasBeenSet(false),
    m_waitPeriodMs(0),
    m_waitPeriodMsHasBeenSet(false)
{
}

NewAssertionRule::NewAssertionRule(JsonView jsonValue) : 
    m_assertedControlsHasBeenSet(false),
    m_controlPanelArnHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_ruleConfigHasBeenSet(false),
    m_waitPeriodMs(0),
    m_waitPeriodMsHasBeenSet(false)
{
  *this = jsonValue;
}

NewAssertionRule& NewAssertionRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssertedControls"))
  {
    Aws::Utils::Array<JsonView> assertedControlsJsonList = jsonValue.GetArray("AssertedControls");
    for(unsigned assertedControlsIndex = 0; assertedControlsIndex < assertedControlsJsonList.GetLength(); ++assertedControlsIndex)
    {
      m_assertedControls.push_back(assertedControlsJsonList[assertedControlsIndex].AsString());
    }
    m_assertedControlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ControlPanelArn"))
  {
    m_controlPanelArn = jsonValue.GetString("ControlPanelArn");

    m_controlPanelArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleConfig"))
  {
    m_ruleConfig = jsonValue.GetObject("RuleConfig");

    m_ruleConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("WaitPeriodMs"))
  {
    m_waitPeriodMs = jsonValue.GetInteger("WaitPeriodMs");

    m_waitPeriodMsHasBeenSet = true;
  }

  return *this;
}

JsonValue NewAssertionRule::Jsonize() const
{
  JsonValue payload;

  if(m_assertedControlsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> assertedControlsJsonList(m_assertedControls.size());
   for(unsigned assertedControlsIndex = 0; assertedControlsIndex < assertedControlsJsonList.GetLength(); ++assertedControlsIndex)
   {
     assertedControlsJsonList[assertedControlsIndex].AsString(m_assertedControls[assertedControlsIndex]);
   }
   payload.WithArray("AssertedControls", std::move(assertedControlsJsonList));

  }

  if(m_controlPanelArnHasBeenSet)
  {
   payload.WithString("ControlPanelArn", m_controlPanelArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_ruleConfigHasBeenSet)
  {
   payload.WithObject("RuleConfig", m_ruleConfig.Jsonize());

  }

  if(m_waitPeriodMsHasBeenSet)
  {
   payload.WithInteger("WaitPeriodMs", m_waitPeriodMs);

  }

  return payload;
}

} // namespace Model
} // namespace Route53RecoveryControlConfig
} // namespace Aws
