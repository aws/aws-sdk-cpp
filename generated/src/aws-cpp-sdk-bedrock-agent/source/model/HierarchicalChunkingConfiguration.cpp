/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/HierarchicalChunkingConfiguration.h>
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

HierarchicalChunkingConfiguration::HierarchicalChunkingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

HierarchicalChunkingConfiguration& HierarchicalChunkingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("levelConfigurations"))
  {
    Aws::Utils::Array<JsonView> levelConfigurationsJsonList = jsonValue.GetArray("levelConfigurations");
    for(unsigned levelConfigurationsIndex = 0; levelConfigurationsIndex < levelConfigurationsJsonList.GetLength(); ++levelConfigurationsIndex)
    {
      m_levelConfigurations.push_back(levelConfigurationsJsonList[levelConfigurationsIndex].AsObject());
    }
    m_levelConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("overlapTokens"))
  {
    m_overlapTokens = jsonValue.GetInteger("overlapTokens");
    m_overlapTokensHasBeenSet = true;
  }
  return *this;
}

JsonValue HierarchicalChunkingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_levelConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> levelConfigurationsJsonList(m_levelConfigurations.size());
   for(unsigned levelConfigurationsIndex = 0; levelConfigurationsIndex < levelConfigurationsJsonList.GetLength(); ++levelConfigurationsIndex)
   {
     levelConfigurationsJsonList[levelConfigurationsIndex].AsObject(m_levelConfigurations[levelConfigurationsIndex].Jsonize());
   }
   payload.WithArray("levelConfigurations", std::move(levelConfigurationsJsonList));

  }

  if(m_overlapTokensHasBeenSet)
  {
   payload.WithInteger("overlapTokens", m_overlapTokens);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
