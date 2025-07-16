/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CustomExtractionConfigurationInput.h>
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

CustomExtractionConfigurationInput::CustomExtractionConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomExtractionConfigurationInput& CustomExtractionConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("semanticExtractionOverride"))
  {
    m_semanticExtractionOverride = jsonValue.GetObject("semanticExtractionOverride");
    m_semanticExtractionOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userPreferenceExtractionOverride"))
  {
    m_userPreferenceExtractionOverride = jsonValue.GetObject("userPreferenceExtractionOverride");
    m_userPreferenceExtractionOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomExtractionConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_semanticExtractionOverrideHasBeenSet)
  {
   payload.WithObject("semanticExtractionOverride", m_semanticExtractionOverride.Jsonize());

  }

  if(m_userPreferenceExtractionOverrideHasBeenSet)
  {
   payload.WithObject("userPreferenceExtractionOverride", m_userPreferenceExtractionOverride.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
