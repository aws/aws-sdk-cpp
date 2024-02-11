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

VectorIngestionConfiguration::VectorIngestionConfiguration() : 
    m_chunkingConfigurationHasBeenSet(false)
{
}

VectorIngestionConfiguration::VectorIngestionConfiguration(JsonView jsonValue) : 
    m_chunkingConfigurationHasBeenSet(false)
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

  return *this;
}

JsonValue VectorIngestionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_chunkingConfigurationHasBeenSet)
  {
   payload.WithObject("chunkingConfiguration", m_chunkingConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
