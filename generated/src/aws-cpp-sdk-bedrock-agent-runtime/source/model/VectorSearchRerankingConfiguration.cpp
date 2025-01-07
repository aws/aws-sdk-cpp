﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/VectorSearchRerankingConfiguration.h>
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

VectorSearchRerankingConfiguration::VectorSearchRerankingConfiguration() : 
    m_bedrockRerankingConfigurationHasBeenSet(false),
    m_type(VectorSearchRerankingConfigurationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

VectorSearchRerankingConfiguration::VectorSearchRerankingConfiguration(JsonView jsonValue)
  : VectorSearchRerankingConfiguration()
{
  *this = jsonValue;
}

VectorSearchRerankingConfiguration& VectorSearchRerankingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockRerankingConfiguration"))
  {
    m_bedrockRerankingConfiguration = jsonValue.GetObject("bedrockRerankingConfiguration");

    m_bedrockRerankingConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = VectorSearchRerankingConfigurationTypeMapper::GetVectorSearchRerankingConfigurationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  return *this;
}

JsonValue VectorSearchRerankingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockRerankingConfigurationHasBeenSet)
  {
   payload.WithObject("bedrockRerankingConfiguration", m_bedrockRerankingConfiguration.Jsonize());

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", VectorSearchRerankingConfigurationTypeMapper::GetNameForVectorSearchRerankingConfigurationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
