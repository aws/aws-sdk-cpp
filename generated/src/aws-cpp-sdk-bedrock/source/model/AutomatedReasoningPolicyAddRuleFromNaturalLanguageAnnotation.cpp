/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation.h>
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

AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation::AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation(JsonView jsonValue)
{
  *this = jsonValue;
}

AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation& AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("naturalLanguage"))
  {
    m_naturalLanguage = jsonValue.GetString("naturalLanguage");
    m_naturalLanguageHasBeenSet = true;
  }
  return *this;
}

JsonValue AutomatedReasoningPolicyAddRuleFromNaturalLanguageAnnotation::Jsonize() const
{
  JsonValue payload;

  if(m_naturalLanguageHasBeenSet)
  {
   payload.WithString("naturalLanguage", m_naturalLanguage);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
