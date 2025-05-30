﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailRegexFilter.h>
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

GuardrailRegexFilter::GuardrailRegexFilter(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailRegexFilter& GuardrailRegexFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("match"))
  {
    m_match = jsonValue.GetString("match");
    m_matchHasBeenSet = true;
  }
  if(jsonValue.ValueExists("regex"))
  {
    m_regex = jsonValue.GetString("regex");
    m_regexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("action"))
  {
    m_action = GuardrailSensitiveInformationPolicyActionMapper::GetGuardrailSensitiveInformationPolicyActionForName(jsonValue.GetString("action"));
    m_actionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detected"))
  {
    m_detected = jsonValue.GetBool("detected");
    m_detectedHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailRegexFilter::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_matchHasBeenSet)
  {
   payload.WithString("match", m_match);

  }

  if(m_regexHasBeenSet)
  {
   payload.WithString("regex", m_regex);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("action", GuardrailSensitiveInformationPolicyActionMapper::GetNameForGuardrailSensitiveInformationPolicyAction(m_action));
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
