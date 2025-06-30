/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/VectorSearchRerankingConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

VectorSearchRerankingConfiguration::VectorSearchRerankingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VectorSearchRerankingConfiguration& VectorSearchRerankingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = VectorSearchRerankingConfigurationTypeMapper::GetVectorSearchRerankingConfigurationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("bedrockRerankingConfiguration"))
  {
    m_bedrockRerankingConfiguration = jsonValue.GetObject("bedrockRerankingConfiguration");
    m_bedrockRerankingConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue VectorSearchRerankingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", VectorSearchRerankingConfigurationTypeMapper::GetNameForVectorSearchRerankingConfigurationType(m_type));
  }

  if(m_bedrockRerankingConfigurationHasBeenSet)
  {
   payload.WithObject("bedrockRerankingConfiguration", m_bedrockRerankingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
