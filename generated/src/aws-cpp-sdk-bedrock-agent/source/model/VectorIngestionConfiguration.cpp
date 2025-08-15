/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/VectorIngestionConfiguration.h>
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

VectorIngestionConfiguration::VectorIngestionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

VectorIngestionConfiguration& VectorIngestionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("chunkingConfiguration"))
  {
    m_chunkingConfiguration = jsonValue.GetObject("chunkingConfiguration");
    m_chunkingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customTransformationConfiguration"))
  {
    m_customTransformationConfiguration = jsonValue.GetObject("customTransformationConfiguration");
    m_customTransformationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parsingConfiguration"))
  {
    m_parsingConfiguration = jsonValue.GetObject("parsingConfiguration");
    m_parsingConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contextEnrichmentConfiguration"))
  {
    m_contextEnrichmentConfiguration = jsonValue.GetObject("contextEnrichmentConfiguration");
    m_contextEnrichmentConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue VectorIngestionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_chunkingConfigurationHasBeenSet)
  {
   payload.WithObject("chunkingConfiguration", m_chunkingConfiguration.Jsonize());

  }

  if(m_customTransformationConfigurationHasBeenSet)
  {
   payload.WithObject("customTransformationConfiguration", m_customTransformationConfiguration.Jsonize());

  }

  if(m_parsingConfigurationHasBeenSet)
  {
   payload.WithObject("parsingConfiguration", m_parsingConfiguration.Jsonize());

  }

  if(m_contextEnrichmentConfigurationHasBeenSet)
  {
   payload.WithObject("contextEnrichmentConfiguration", m_contextEnrichmentConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
