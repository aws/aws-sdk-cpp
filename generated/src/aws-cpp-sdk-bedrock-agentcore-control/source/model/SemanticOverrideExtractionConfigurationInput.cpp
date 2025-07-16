/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SemanticOverrideExtractionConfigurationInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

SemanticOverrideExtractionConfigurationInput::SemanticOverrideExtractionConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

SemanticOverrideExtractionConfigurationInput& SemanticOverrideExtractionConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("appendToPrompt"))
  {
    m_appendToPrompt = jsonValue.GetString("appendToPrompt");
    m_appendToPromptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelId"))
  {
    m_modelId = jsonValue.GetString("modelId");
    m_modelIdHasBeenSet = true;
  }
  return *this;
}

JsonValue SemanticOverrideExtractionConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_appendToPromptHasBeenSet)
  {
   payload.WithString("appendToPrompt", m_appendToPrompt);

  }

  if(m_modelIdHasBeenSet)
  {
   payload.WithString("modelId", m_modelId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
