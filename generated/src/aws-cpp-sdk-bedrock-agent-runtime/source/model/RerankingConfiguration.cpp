/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankingConfiguration.h>
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

RerankingConfiguration::RerankingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RerankingConfiguration& RerankingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockRerankingConfiguration"))
  {
    m_bedrockRerankingConfiguration = jsonValue.GetObject("bedrockRerankingConfiguration");
    m_bedrockRerankingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = RerankingConfigurationTypeMapper::GetRerankingConfigurationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue RerankingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockRerankingConfigurationHasBeenSet)
  {
   payload.WithObject("bedrockRerankingConfiguration", m_bedrockRerankingConfiguration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", RerankingConfigurationTypeMapper::GetNameForRerankingConfigurationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
