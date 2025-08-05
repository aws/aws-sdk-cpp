/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailAutomatedReasoningPolicyConfig.h>
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

GuardrailAutomatedReasoningPolicyConfig::GuardrailAutomatedReasoningPolicyConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAutomatedReasoningPolicyConfig& GuardrailAutomatedReasoningPolicyConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("policies"))
  {
    Aws::Utils::Array<JsonView> policiesJsonList = jsonValue.GetArray("policies");
    for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
    {
      m_policies.push_back(policiesJsonList[policiesIndex].AsString());
    }
    m_policiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("confidenceThreshold"))
  {
    m_confidenceThreshold = jsonValue.GetDouble("confidenceThreshold");
    m_confidenceThresholdHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAutomatedReasoningPolicyConfig::Jsonize() const
{
  JsonValue payload;

  if(m_policiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> policiesJsonList(m_policies.size());
   for(unsigned policiesIndex = 0; policiesIndex < policiesJsonList.GetLength(); ++policiesIndex)
   {
     policiesJsonList[policiesIndex].AsString(m_policies[policiesIndex]);
   }
   payload.WithArray("policies", std::move(policiesJsonList));

  }

  if(m_confidenceThresholdHasBeenSet)
  {
   payload.WithDouble("confidenceThreshold", m_confidenceThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
