/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailUsage.h>
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

GuardrailUsage::GuardrailUsage(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailUsage& GuardrailUsage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicPolicyUnits"))
  {
    m_topicPolicyUnits = jsonValue.GetInteger("topicPolicyUnits");
    m_topicPolicyUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentPolicyUnits"))
  {
    m_contentPolicyUnits = jsonValue.GetInteger("contentPolicyUnits");
    m_contentPolicyUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wordPolicyUnits"))
  {
    m_wordPolicyUnits = jsonValue.GetInteger("wordPolicyUnits");
    m_wordPolicyUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitiveInformationPolicyUnits"))
  {
    m_sensitiveInformationPolicyUnits = jsonValue.GetInteger("sensitiveInformationPolicyUnits");
    m_sensitiveInformationPolicyUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitiveInformationPolicyFreeUnits"))
  {
    m_sensitiveInformationPolicyFreeUnits = jsonValue.GetInteger("sensitiveInformationPolicyFreeUnits");
    m_sensitiveInformationPolicyFreeUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contextualGroundingPolicyUnits"))
  {
    m_contextualGroundingPolicyUnits = jsonValue.GetInteger("contextualGroundingPolicyUnits");
    m_contextualGroundingPolicyUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentPolicyImageUnits"))
  {
    m_contentPolicyImageUnits = jsonValue.GetInteger("contentPolicyImageUnits");
    m_contentPolicyImageUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("automatedReasoningPolicyUnits"))
  {
    m_automatedReasoningPolicyUnits = jsonValue.GetInteger("automatedReasoningPolicyUnits");
    m_automatedReasoningPolicyUnitsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("automatedReasoningPolicies"))
  {
    m_automatedReasoningPolicies = jsonValue.GetInteger("automatedReasoningPolicies");
    m_automatedReasoningPoliciesHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailUsage::Jsonize() const
{
  JsonValue payload;

  if(m_topicPolicyUnitsHasBeenSet)
  {
   payload.WithInteger("topicPolicyUnits", m_topicPolicyUnits);

  }

  if(m_contentPolicyUnitsHasBeenSet)
  {
   payload.WithInteger("contentPolicyUnits", m_contentPolicyUnits);

  }

  if(m_wordPolicyUnitsHasBeenSet)
  {
   payload.WithInteger("wordPolicyUnits", m_wordPolicyUnits);

  }

  if(m_sensitiveInformationPolicyUnitsHasBeenSet)
  {
   payload.WithInteger("sensitiveInformationPolicyUnits", m_sensitiveInformationPolicyUnits);

  }

  if(m_sensitiveInformationPolicyFreeUnitsHasBeenSet)
  {
   payload.WithInteger("sensitiveInformationPolicyFreeUnits", m_sensitiveInformationPolicyFreeUnits);

  }

  if(m_contextualGroundingPolicyUnitsHasBeenSet)
  {
   payload.WithInteger("contextualGroundingPolicyUnits", m_contextualGroundingPolicyUnits);

  }

  if(m_contentPolicyImageUnitsHasBeenSet)
  {
   payload.WithInteger("contentPolicyImageUnits", m_contentPolicyImageUnits);

  }

  if(m_automatedReasoningPolicyUnitsHasBeenSet)
  {
   payload.WithInteger("automatedReasoningPolicyUnits", m_automatedReasoningPolicyUnits);

  }

  if(m_automatedReasoningPoliciesHasBeenSet)
  {
   payload.WithInteger("automatedReasoningPolicies", m_automatedReasoningPolicies);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
