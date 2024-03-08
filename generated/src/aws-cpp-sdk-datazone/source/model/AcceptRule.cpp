/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/AcceptRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataZone
{
namespace Model
{

AcceptRule::AcceptRule() : 
    m_rule(AcceptRuleBehavior::NOT_SET),
    m_ruleHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false)
{
}

AcceptRule::AcceptRule(JsonView jsonValue) : 
    m_rule(AcceptRuleBehavior::NOT_SET),
    m_ruleHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false)
{
  *this = jsonValue;
}

AcceptRule& AcceptRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rule"))
  {
    m_rule = AcceptRuleBehaviorMapper::GetAcceptRuleBehaviorForName(jsonValue.GetString("rule"));

    m_ruleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetDouble("threshold");

    m_thresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue AcceptRule::Jsonize() const
{
  JsonValue payload;

  if(m_ruleHasBeenSet)
  {
   payload.WithString("rule", AcceptRuleBehaviorMapper::GetNameForAcceptRuleBehavior(m_rule));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("threshold", m_threshold);

  }

  return payload;
}

} // namespace Model
} // namespace DataZone
} // namespace Aws
