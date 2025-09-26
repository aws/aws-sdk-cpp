/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailPiiEntityFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

GuardrailPiiEntityFilter::GuardrailPiiEntityFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailPiiEntityFilter& GuardrailPiiEntityFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailPiiEntityTypeMapper::GetGuardrailPiiEntityTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetString("match");
    m_matchHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailSensitiveInformationPolicyActionMapper::GetGuardrailSensitiveInformationPolicyActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailPiiEntityFilter::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailPiiEntityTypeMapper::GetNameForGuardrailPiiEntityType(m_type));
  }

  if(m_matchHasBeenSet)
  {
   payload.WithString("match", m_match);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailSensitiveInformationPolicyActionMapper::GetNameForGuardrailSensitiveInformationPolicyAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
