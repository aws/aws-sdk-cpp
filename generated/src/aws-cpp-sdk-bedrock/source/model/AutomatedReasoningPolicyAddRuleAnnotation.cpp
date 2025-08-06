/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAddRuleAnnotation.h>
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

AutomatedReasoningPolicyAddRuleAnnotation::AutomatedReasoningPolicyAddRuleAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyAddRuleAnnotation& AutomatedReasoningPolicyAddRuleAnnotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("expression"))
  {
    m_expression = jsonValue.GetString("expression");
    m_expressionHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAddRuleAnnotation::Jsonize() const
{
  JsonValue payload;

  if(m_expressionHasBeenSet)
  {
   payload.WithString("expression", m_expression);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
