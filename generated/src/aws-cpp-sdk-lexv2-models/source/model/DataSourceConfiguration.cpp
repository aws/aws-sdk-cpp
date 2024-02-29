/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/DataSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

DataSourceConfiguration::DataSourceConfiguration() : 
    m_opensearchConfigurationHasBeenSet(false),
    m_kendraConfigurationHasBeenSet(false),
    m_bedrockKnowledgeStoreConfigurationHasBeenSet(false)
{
}

DataSourceConfiguration::DataSourceConfiguration(JsonView jsonValue) : 
    m_opensearchConfigurationHasBeenSet(false),
    m_kendraConfigurationHasBeenSet(false),
    m_bedrockKnowledgeStoreConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DataSourceConfiguration& DataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("opensearchConfiguration"))
  {
    m_opensearchConfiguration = jsonValue.GetObject("opensearchConfiguration");

    m_opensearchConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kendraConfiguration"))
  {
    m_kendraConfiguration = jsonValue.GetObject("kendraConfiguration");

    m_kendraConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bedrockKnowledgeStoreConfiguration"))
  {
    m_bedrockKnowledgeStoreConfiguration = jsonValue.GetObject("bedrockKnowledgeStoreConfiguration");

    m_bedrockKnowledgeStoreConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_opensearchConfigurationHasBeenSet)
  {
   payload.WithObject("opensearchConfiguration", m_opensearchConfiguration.Jsonize());

  }

  if(m_kendraConfigurationHasBeenSet)
  {
   payload.WithObject("kendraConfiguration", m_kendraConfiguration.Jsonize());

  }

  if(m_bedrockKnowledgeStoreConfigurationHasBeenSet)
  {
   payload.WithObject("bedrockKnowledgeStoreConfiguration", m_bedrockKnowledgeStoreConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
