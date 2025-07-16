/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CustomConfigurationInput.h>
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

CustomConfigurationInput::CustomConfigurationInput(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomConfigurationInput& CustomConfigurationInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("semanticOverride"))
  {
    m_semanticOverride = jsonValue.GetObject("semanticOverride");
    m_semanticOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("summaryOverride"))
  {
    m_summaryOverride = jsonValue.GetObject("summaryOverride");
    m_summaryOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userPreferenceOverride"))
  {
    m_userPreferenceOverride = jsonValue.GetObject("userPreferenceOverride");
    m_userPreferenceOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomConfigurationInput::Jsonize() const
{
  JsonValue payload;

  if(m_semanticOverrideHasBeenSet)
  {
   payload.WithObject("semanticOverride", m_semanticOverride.Jsonize());

  }

  if(m_summaryOverrideHasBeenSet)
  {
   payload.WithObject("summaryOverride", m_summaryOverride.Jsonize());

  }

  if(m_userPreferenceOverrideHasBeenSet)
  {
   payload.WithObject("userPreferenceOverride", m_userPreferenceOverride.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
