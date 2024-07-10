/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ConfluenceDataSourceConfiguration.h>
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

ConfluenceDataSourceConfiguration::ConfluenceDataSourceConfiguration() : 
    m_crawlerConfigurationHasBeenSet(false),
    m_sourceConfigurationHasBeenSet(false)
{
}

ConfluenceDataSourceConfiguration::ConfluenceDataSourceConfiguration(JsonView jsonValue)
  : ConfluenceDataSourceConfiguration()
{
  *this = jsonValue;
}

ConfluenceDataSourceConfiguration& ConfluenceDataSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("crawlerConfiguration"))
  {
    m_crawlerConfiguration = jsonValue.GetObject("crawlerConfiguration");

    m_crawlerConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceConfiguration"))
  {
    m_sourceConfiguration = jsonValue.GetObject("sourceConfiguration");

    m_sourceConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfluenceDataSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_crawlerConfigurationHasBeenSet)
  {
   payload.WithObject("crawlerConfiguration", m_crawlerConfiguration.Jsonize());

  }

  if(m_sourceConfigurationHasBeenSet)
  {
   payload.WithObject("sourceConfiguration", m_sourceConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
