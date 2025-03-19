/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/StreamingConfigurations.h>
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

StreamingConfigurations::StreamingConfigurations(JsonView jsonValue)
{
  *this = jsonValue;
}

StreamingConfigurations& StreamingConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("applyGuardrailInterval"))
  {
    m_applyGuardrailInterval = jsonValue.GetInteger("applyGuardrailInterval");
    m_applyGuardrailIntervalHasBeenSet = true;
  }
  if(jsonValue.ValueExists("streamFinalResponse"))
  {
    m_streamFinalResponse = jsonValue.GetBool("streamFinalResponse");
    m_streamFinalResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue StreamingConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_applyGuardrailIntervalHasBeenSet)
  {
   payload.WithInteger("applyGuardrailInterval", m_applyGuardrailInterval);

  }

  if(m_streamFinalResponseHasBeenSet)
  {
   payload.WithBool("streamFinalResponse", m_streamFinalResponse);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
