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

GuardrailContextualGroundingFilter::GuardrailContextualGroundingFilter() : 
    m_type(GuardrailContextualGroundingFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_threshold(0.0),
    m_thresholdHasBeenSet(false),
    m_score(0.0),
    m_scoreHasBeenSet(false),
    m_action(GuardrailContextualGroundingPolicyAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

GuardrailContextualGroundingFilter::GuardrailContextualGroundingFilter(JsonView jsonValue)
  : GuardrailContextualGroundingFilter()
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

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
