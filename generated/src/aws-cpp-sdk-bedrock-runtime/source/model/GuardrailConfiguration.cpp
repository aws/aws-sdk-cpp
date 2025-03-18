/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailConfiguration.h>
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

GuardrailConfiguration::GuardrailConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailConfiguration& GuardrailConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("guardrailIdentifier"))
  {
    m_guardrailIdentifier = jsonValue.GetString("guardrailIdentifier");
    m_guardrailIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrailVersion"))
  {
    m_guardrailVersion = jsonValue.GetString("guardrailVersion");
    m_guardrailVersionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trace"))
  {
    m_trace = GuardrailTraceMapper::GetGuardrailTraceForName(jsonValue.GetString("trace"));
    m_traceHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_guardrailIdentifierHasBeenSet)
  {
   payload.WithString("guardrailIdentifier", m_guardrailIdentifier);

  }

  if(m_guardrailVersionHasBeenSet)
  {
   payload.WithString("guardrailVersion", m_guardrailVersion);

  }

  if(m_traceHasBeenSet)
  {
   payload.WithString("trace", GuardrailTraceMapper::GetNameForGuardrailTrace(m_trace));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
