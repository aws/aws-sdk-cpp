/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CustomConsolidationConfiguration.h>
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

CustomConsolidationConfiguration::CustomConsolidationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomConsolidationConfiguration& CustomConsolidationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("semanticConsolidationOverride"))
  {
    m_semanticConsolidationOverride = jsonValue.GetObject("semanticConsolidationOverride");
    m_semanticConsolidationOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("summaryConsolidationOverride"))
  {
    m_summaryConsolidationOverride = jsonValue.GetObject("summaryConsolidationOverride");
    m_summaryConsolidationOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userPreferenceConsolidationOverride"))
  {
    m_userPreferenceConsolidationOverride = jsonValue.GetObject("userPreferenceConsolidationOverride");
    m_userPreferenceConsolidationOverrideHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomConsolidationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_semanticConsolidationOverrideHasBeenSet)
  {
   payload.WithObject("semanticConsolidationOverride", m_semanticConsolidationOverride.Jsonize());

  }

  if(m_summaryConsolidationOverrideHasBeenSet)
  {
   payload.WithObject("summaryConsolidationOverride", m_summaryConsolidationOverride.Jsonize());

  }

  if(m_userPreferenceConsolidationOverrideHasBeenSet)
  {
   payload.WithObject("userPreferenceConsolidationOverride", m_userPreferenceConsolidationOverride.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
