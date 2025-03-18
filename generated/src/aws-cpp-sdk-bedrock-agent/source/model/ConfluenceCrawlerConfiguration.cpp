/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ConfluenceCrawlerConfiguration.h>
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

ConfluenceCrawlerConfiguration::ConfluenceCrawlerConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfluenceCrawlerConfiguration& ConfluenceCrawlerConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("filterConfiguration"))
  {
    m_filterConfiguration = jsonValue.GetObject("filterConfiguration");
    m_filterConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfluenceCrawlerConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_filterConfigurationHasBeenSet)
  {
   payload.WithObject("filterConfiguration", m_filterConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
