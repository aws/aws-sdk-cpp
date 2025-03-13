/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BedrockModelSpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

BedrockModelSpecification::BedrockModelSpecification(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockModelSpecification& BedrockModelSpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("guardrail"))
  {
    m_guardrail = jsonValue.GetObject("guardrail");
    m_guardrailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("traceStatus"))
  {
    m_traceStatus = BedrockTraceStatusMapper::GetBedrockTraceStatusForName(jsonValue.GetString("traceStatus"));
    m_traceStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customPrompt"))
  {
    m_customPrompt = jsonValue.GetString("customPrompt");
    m_customPromptHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockModelSpecification::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_guardrailHasBeenSet)
  {
   payload.WithObject("guardrail", m_guardrail.Jsonize());

  }

  if(m_traceStatusHasBeenSet)
  {
   payload.WithString("traceStatus", BedrockTraceStatusMapper::GetNameForBedrockTraceStatus(m_traceStatus));
  }

  if(m_customPromptHasBeenSet)
  {
   payload.WithString("customPrompt", m_customPrompt);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
