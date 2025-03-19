/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/BedrockFoundationModelContextEnrichmentConfiguration.h>
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

BedrockFoundationModelContextEnrichmentConfiguration::BedrockFoundationModelContextEnrichmentConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockFoundationModelContextEnrichmentConfiguration& BedrockFoundationModelContextEnrichmentConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("enrichmentStrategyConfiguration"))
  {
    m_enrichmentStrategyConfiguration = jsonValue.GetObject("enrichmentStrategyConfiguration");
    m_enrichmentStrategyConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockFoundationModelContextEnrichmentConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_enrichmentStrategyConfigurationHasBeenSet)
  {
   payload.WithObject("enrichmentStrategyConfiguration", m_enrichmentStrategyConfiguration.Jsonize());

  }

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
