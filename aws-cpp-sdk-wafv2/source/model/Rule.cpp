/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/Rule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

Rule::Rule() : 
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_statementHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_ruleLabelsHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false),
    m_captchaConfigHasBeenSet(false),
    m_challengeConfigHasBeenSet(false)
{
}

Rule::Rule(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false),
    m_statementHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_overrideActionHasBeenSet(false),
    m_ruleLabelsHasBeenSet(false),
    m_visibilityConfigHasBeenSet(false),
    m_captchaConfigHasBeenSet(false),
    m_challengeConfigHasBeenSet(false)
{
  *this = jsonValue;
}

Rule& Rule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Priority"))
  {
    m_priority = jsonValue.GetInteger("Priority");

    m_priorityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Statement"))
  {
    m_statement = jsonValue.GetObject("Statement");

    m_statementHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = jsonValue.GetObject("Action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OverrideAction"))
  {
    m_overrideAction = jsonValue.GetObject("OverrideAction");

    m_overrideActionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RuleLabels"))
  {
    Aws::Utils::Array<JsonView> ruleLabelsJsonList = jsonValue.GetArray("RuleLabels");
    for(unsigned ruleLabelsIndex = 0; ruleLabelsIndex < ruleLabelsJsonList.GetLength(); ++ruleLabelsIndex)
    {
      m_ruleLabels.push_back(ruleLabelsJsonList[ruleLabelsIndex].AsObject());
    }
    m_ruleLabelsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VisibilityConfig"))
  {
    m_visibilityConfig = jsonValue.GetObject("VisibilityConfig");

    m_visibilityConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CaptchaConfig"))
  {
    m_captchaConfig = jsonValue.GetObject("CaptchaConfig");

    m_captchaConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChallengeConfig"))
  {
    m_challengeConfig = jsonValue.GetObject("ChallengeConfig");

    m_challengeConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue Rule::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_priorityHasBeenSet)
  {
   payload.WithInteger("Priority", m_priority);

  }

  if(m_statementHasBeenSet)
  {
   payload.WithObject("Statement", m_statement.Jsonize());

  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("Action", m_action.Jsonize());

  }

  if(m_overrideActionHasBeenSet)
  {
   payload.WithObject("OverrideAction", m_overrideAction.Jsonize());

  }

  if(m_ruleLabelsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ruleLabelsJsonList(m_ruleLabels.size());
   for(unsigned ruleLabelsIndex = 0; ruleLabelsIndex < ruleLabelsJsonList.GetLength(); ++ruleLabelsIndex)
   {
     ruleLabelsJsonList[ruleLabelsIndex].AsObject(m_ruleLabels[ruleLabelsIndex].Jsonize());
   }
   payload.WithArray("RuleLabels", std::move(ruleLabelsJsonList));

  }

  if(m_visibilityConfigHasBeenSet)
  {
   payload.WithObject("VisibilityConfig", m_visibilityConfig.Jsonize());

  }

  if(m_captchaConfigHasBeenSet)
  {
   payload.WithObject("CaptchaConfig", m_captchaConfig.Jsonize());

  }

  if(m_challengeConfigHasBeenSet)
  {
   payload.WithObject("ChallengeConfig", m_challengeConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
