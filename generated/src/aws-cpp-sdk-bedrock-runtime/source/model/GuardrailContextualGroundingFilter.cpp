/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailContextualGroundingFilter.h>
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

GuardrailContextualGroundingFilter::GuardrailContextualGroundingFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailContextualGroundingFilter& GuardrailContextualGroundingFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailContextualGroundingFilterTypeMapper::GetGuardrailContextualGroundingFilterTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = jsonValue.GetDouble("threshold");
    m_thresholdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailContextualGroundingPolicyActionMapper::GetGuardrailContextualGroundingPolicyActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detected"))
  {
    m_detected = jsonValue.GetBool("detected");
    m_detectedHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailContextualGroundingFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailContextualGroundingFilterTypeMapper::GetNameForGuardrailContextualGroundingFilterType(m_type));
  }

  if(m_thresholdHasBeenSet)
  {
   payload.WithDouble("threshold", m_threshold);

  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailContextualGroundingPolicyActionMapper::GetNameForGuardrailContextualGroundingPolicyAction(m_action));
  }

  if(m_detectedHasBeenSet)
  {
   payload.WithBool("detected", m_detected);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
