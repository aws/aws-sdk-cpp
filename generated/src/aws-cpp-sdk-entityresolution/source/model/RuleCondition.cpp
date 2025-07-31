/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/RuleCondition.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EntityResolution
{
namespace Model
{

RuleCondition::RuleCondition(JsonView jsonValue)
{
  *this = jsonValue;
}

RuleCondition& RuleCondition::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ruleName"))
  {
    m_ruleName = jsonValue.GetString("ruleName");
    m_ruleNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("condition"))
  {
    m_condition = jsonValue.GetString("condition");
    m_conditionHasBeenSet = true;
  }
  return *this;
}

JsonValue RuleCondition::Jsonize() const
{
  JsonValue payload;

  if(m_ruleNameHasBeenSet)
  {
   payload.WithString("ruleName", m_ruleName);

  }

  if(m_conditionHasBeenSet)
  {
   payload.WithString("condition", m_condition);

  }

  return payload;
}

} // namespace Model
} // namespace EntityResolution
} // namespace Aws
