/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/EnrichmentStrategyConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

EnrichmentStrategyConfiguration::EnrichmentStrategyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EnrichmentStrategyConfiguration& EnrichmentStrategyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("method"))
  {
    m_method = EnrichmentStrategyMethodMapper::GetEnrichmentStrategyMethodForName(jsonValue.GetString("method"));
    m_methodHasBeenSet = true;
  }
  return *this;
}

JsonValue EnrichmentStrategyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_methodHasBeenSet)
  {
   payload.WithString("method", EnrichmentStrategyMethodMapper::GetNameForEnrichmentStrategyMethod(m_method));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
