/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/RedshiftConfiguration.h>
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

RedshiftConfiguration::RedshiftConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

RedshiftConfiguration& RedshiftConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("storageConfigurations"))
  {
    Aws::Utils::Array<JsonView> storageConfigurationsJsonList = jsonValue.GetArray("storageConfigurations");
    for(unsigned storageConfigurationsIndex = 0; storageConfigurationsIndex < storageConfigurationsJsonList.GetLength(); ++storageConfigurationsIndex)
    {
      m_storageConfigurations.push_back(storageConfigurationsJsonList[storageConfigurationsIndex].AsObject());
    }
    m_storageConfigurationsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryEngineConfiguration"))
  {
    m_queryEngineConfiguration = jsonValue.GetObject("queryEngineConfiguration");
    m_queryEngineConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("queryGenerationConfiguration"))
  {
    m_queryGenerationConfiguration = jsonValue.GetObject("queryGenerationConfiguration");
    m_queryGenerationConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue RedshiftConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> storageConfigurationsJsonList(m_storageConfigurations.size());
   for(unsigned storageConfigurationsIndex = 0; storageConfigurationsIndex < storageConfigurationsJsonList.GetLength(); ++storageConfigurationsIndex)
   {
     storageConfigurationsJsonList[storageConfigurationsIndex].AsObject(m_storageConfigurations[storageConfigurationsIndex].Jsonize());
   }
   payload.WithArray("storageConfigurations", std::move(storageConfigurationsJsonList));

  }

  if(m_queryEngineConfigurationHasBeenSet)
  {
   payload.WithObject("queryEngineConfiguration", m_queryEngineConfiguration.Jsonize());

  }

  if(m_queryGenerationConfigurationHasBeenSet)
  {
   payload.WithObject("queryGenerationConfiguration", m_queryGenerationConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
