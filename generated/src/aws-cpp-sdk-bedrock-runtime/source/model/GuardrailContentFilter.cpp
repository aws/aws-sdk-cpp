/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailContentFilter.h>
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

GuardrailContentFilter::GuardrailContentFilter() : 
    m_type(GuardrailContentFilterType::NOT_SET),
    m_typeHasBeenSet(false),
    m_confidence(GuardrailContentFilterConfidence::NOT_SET),
    m_confidenceHasBeenSet(false),
    m_filterStrength(GuardrailContentFilterStrength::NOT_SET),
    m_filterStrengthHasBeenSet(false),
    m_action(GuardrailContentPolicyAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

GuardrailContentFilter::GuardrailContentFilter(JsonView jsonValue)
  : GuardrailContentFilter()
{
  *this = jsonValue;
}

GuardrailContentFilter& GuardrailContentFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailContentFilterTypeMapper::GetGuardrailContentFilterTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("confidence"))
  {
    m_confidence = GuardrailContentFilterConfidenceMapper::GetGuardrailContentFilterConfidenceForName(jsonValue.GetString("confidence"));

    m_confidenceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("filterStrength"))
  {
    m_filterStrength = GuardrailContentFilterStrengthMapper::GetGuardrailContentFilterStrengthForName(jsonValue.GetString("filterStrength"));

    m_filterStrengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailContentPolicyActionMapper::GetGuardrailContentPolicyActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailContentFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailContentFilterTypeMapper::GetNameForGuardrailContentFilterType(m_type));
  }

  if(m_confidenceHasBeenSet)
  {
   payload.WithString("confidence", GuardrailContentFilterConfidenceMapper::GetNameForGuardrailContentFilterConfidence(m_confidence));
  }

  if(m_filterStrengthHasBeenSet)
  {
   payload.WithString("filterStrength", GuardrailContentFilterStrengthMapper::GetNameForGuardrailContentFilterStrength(m_filterStrength));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailContentPolicyActionMapper::GetNameForGuardrailContentPolicyAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
