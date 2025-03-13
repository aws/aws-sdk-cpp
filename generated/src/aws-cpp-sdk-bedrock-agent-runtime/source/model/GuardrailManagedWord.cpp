/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailManagedWord.h>
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

GuardrailManagedWord::GuardrailManagedWord(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailManagedWord& GuardrailManagedWord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailWordPolicyActionMapper::GetGuardrailWordPolicyActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetString("match");
    m_matchHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = GuardrailManagedWordTypeMapper::GetGuardrailManagedWordTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailManagedWord::Jsonize() const
{
  JsonValue payload;

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailWordPolicyActionMapper::GetNameForGuardrailWordPolicyAction(m_action));
  }

  if(m_matchHasBeenSet)
  {
   payload.WithString("match", m_match);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailManagedWordTypeMapper::GetNameForGuardrailManagedWordType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
