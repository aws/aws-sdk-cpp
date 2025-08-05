/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailAssessment.h>
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

GuardrailAssessment::GuardrailAssessment(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailAssessment& GuardrailAssessment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("topicPolicy"))
  {
    m_topicPolicy = jsonValue.GetObject("topicPolicy");
    m_topicPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentPolicy"))
  {
    m_contentPolicy = jsonValue.GetObject("contentPolicy");
    m_contentPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("wordPolicy"))
  {
    m_wordPolicy = jsonValue.GetObject("wordPolicy");
    m_wordPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sensitiveInformationPolicy"))
  {
    m_sensitiveInformationPolicy = jsonValue.GetObject("sensitiveInformationPolicy");
    m_sensitiveInformationPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contextualGroundingPolicy"))
  {
    m_contextualGroundingPolicy = jsonValue.GetObject("contextualGroundingPolicy");
    m_contextualGroundingPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("automatedReasoningPolicy"))
  {
    m_automatedReasoningPolicy = jsonValue.GetObject("automatedReasoningPolicy");
    m_automatedReasoningPolicyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("invocationMetrics"))
  {
    m_invocationMetrics = jsonValue.GetObject("invocationMetrics");
    m_invocationMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailAssessment::Jsonize() const
{
  JsonValue payload;

  if(m_topicPolicyHasBeenSet)
  {
   payload.WithObject("topicPolicy", m_topicPolicy.Jsonize());

  }

  if(m_contentPolicyHasBeenSet)
  {
   payload.WithObject("contentPolicy", m_contentPolicy.Jsonize());

  }

  if(m_wordPolicyHasBeenSet)
  {
   payload.WithObject("wordPolicy", m_wordPolicy.Jsonize());

  }

  if(m_sensitiveInformationPolicyHasBeenSet)
  {
   payload.WithObject("sensitiveInformationPolicy", m_sensitiveInformationPolicy.Jsonize());

  }

  if(m_contextualGroundingPolicyHasBeenSet)
  {
   payload.WithObject("contextualGroundingPolicy", m_contextualGroundingPolicy.Jsonize());

  }

  if(m_automatedReasoningPolicyHasBeenSet)
  {
   payload.WithObject("automatedReasoningPolicy", m_automatedReasoningPolicy.Jsonize());

  }

  if(m_invocationMetricsHasBeenSet)
  {
   payload.WithObject("invocationMetrics", m_invocationMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
