/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyDefinitionElement.h>
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

AutomatedReasoningPolicyDefinitionElement::AutomatedReasoningPolicyDefinitionElement(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyDefinitionElement& AutomatedReasoningPolicyDefinitionElement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policyDefinitionVariable"))
  {
    m_policyDefinitionVariable = jsonValue.GetObject("policyDefinitionVariable");
    m_policyDefinitionVariableHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyDefinitionType"))
  {
    m_policyDefinitionType = jsonValue.GetObject("policyDefinitionType");
    m_policyDefinitionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyDefinitionRule"))
  {
    m_policyDefinitionRule = jsonValue.GetObject("policyDefinitionRule");
    m_policyDefinitionRuleHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyDefinitionElement::Jsonize() const
{
  JsonValue payload;

  if(m_policyDefinitionVariableHasBeenSet)
  {
   payload.WithObject("policyDefinitionVariable", m_policyDefinitionVariable.Jsonize());

  }

  if(m_policyDefinitionTypeHasBeenSet)
  {
   payload.WithObject("policyDefinitionType", m_policyDefinitionType.Jsonize());

  }

  if(m_policyDefinitionRuleHasBeenSet)
  {
   payload.WithObject("policyDefinitionRule", m_policyDefinitionRule.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
