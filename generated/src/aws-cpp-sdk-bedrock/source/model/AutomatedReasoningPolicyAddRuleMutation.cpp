/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAddRuleMutation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

AutomatedReasoningPolicyAddRuleMutation::AutomatedReasoningPolicyAddRuleMutation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyAddRuleMutation& AutomatedReasoningPolicyAddRuleMutation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("rule"))
  {
    m_rule = jsonValue.GetObject("rule");
    m_ruleHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAddRuleMutation::Jsonize() const
{
  JsonValue payload;

  if(m_ruleHasBeenSet)
  {
   payload.WithObject("rule", m_rule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
