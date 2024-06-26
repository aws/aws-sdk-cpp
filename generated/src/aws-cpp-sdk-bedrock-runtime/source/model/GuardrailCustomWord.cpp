﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailCustomWord.h>
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

GuardrailCustomWord::GuardrailCustomWord() : 
    m_matchHasBeenSet(false),
    m_action(GuardrailWordPolicyAction::NOT_SET),
    m_actionHasBeenSet(false)
{
}

GuardrailCustomWord::GuardrailCustomWord(JsonView jsonValue)
  : GuardrailCustomWord()
{
  *this = jsonValue;
}

GuardrailCustomWord& GuardrailCustomWord::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetString("match");

    m_matchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailWordPolicyActionMapper::GetGuardrailWordPolicyActionForName(jsonValue.GetString("action"));

    m_actionHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailCustomWord::Jsonize() const
{
  JsonValue payload;

  if(m_matchHasBeenSet)
  {
   payload.WithString("match", m_match);

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
