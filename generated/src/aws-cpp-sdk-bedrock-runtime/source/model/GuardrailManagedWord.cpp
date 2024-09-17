/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailManagedWord.h>
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

GuardrailManagedWord::GuardrailManagedWord() : 
    m_matchHasBeenSet(false),
    m_type(GuardrailManagedWordType::NOT_SET),
    m_typeHasBeenSet(false),
    m_action(GuardrailWordPolicyAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

GuardrailManagedWord::GuardrailManagedWord(JsonView jsonValue)
  : GuardrailManagedWord()
{
  *this = jsonValue;
}

GuardrailManagedWord& GuardrailManagedWord::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailWordPolicyActionMapper::GetGuardrailWordPolicyActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailManagedWord::Jsonize() const
{
  JsonValue payload;

  if(m_matchHasBeenSet)
  {
   payload.WithString("match", m_match);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", GuardrailManagedWordTypeMapper::GetNameForGuardrailManagedWordType(m_type));
  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailWordPolicyActionMapper::GetNameForGuardrailWordPolicyAction(m_action));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
