/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAutomatedReasoningRule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

GuardrailAutomatedReasoningRule::GuardrailAutomatedReasoningRule(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAutomatedReasoningRule& GuardrailAutomatedReasoningRule::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("identifier"))
  {
    m_identifier = jsonValue.GetString("identifier");
    m_identifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("policyVersionArn"))
  {
    m_policyVersionArn = jsonValue.GetString("policyVersionArn");
    m_policyVersionArnHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningRule::Jsonize() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_policyVersionArnHasBeenSet)
  {
   payload.WithString("policyVersionArn", m_policyVersionArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
