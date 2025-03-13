/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailStreamConfiguration.h>
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

GuardrailStreamConfiguration::GuardrailStreamConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailStreamConfiguration& GuardrailStreamConfiguration::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("streamProcessingMode"))
  {
    m_streamProcessingMode = GuardrailStreamProcessingModeMapper::GetGuardrailStreamProcessingModeForName(jsonValue.GetString("streamProcessingMode"));
    m_streamProcessingModeHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailStreamConfiguration::Jsonize() const
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

  if(m_streamProcessingModeHasBeenSet)
  {
   payload.WithString("streamProcessingMode", GuardrailStreamProcessingModeMapper::GetNameForGuardrailStreamProcessingMode(m_streamProcessingMode));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
