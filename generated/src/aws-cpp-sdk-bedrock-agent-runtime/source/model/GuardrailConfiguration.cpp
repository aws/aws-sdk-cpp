﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailConfiguration.h>
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

GuardrailConfiguration::GuardrailConfiguration() : 
    m_guardrailIdHasBeenSet(false),
    m_guardrailVersionHasBeenSet(false)
{
}

GuardrailConfiguration::GuardrailConfiguration(JsonView jsonValue)
  : GuardrailConfiguration()
{
  *this = jsonValue;
}

GuardrailConfiguration& GuardrailConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrailId"))
  {
    m_guardrailId = jsonValue.GetString("guardrailId");

    m_guardrailIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("guardrailVersion"))
  {
    m_guardrailVersion = jsonValue.GetString("guardrailVersion");

    m_guardrailVersionHasBeenSet = true;
  }

  return *this;
}

JsonValue GuardrailConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailIdHasBeenSet)
  {
   payload.WithString("guardrailId", m_guardrailId);

  }

  if(m_guardrailVersionHasBeenSet)
  {
   payload.WithString("guardrailVersion", m_guardrailVersion);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
