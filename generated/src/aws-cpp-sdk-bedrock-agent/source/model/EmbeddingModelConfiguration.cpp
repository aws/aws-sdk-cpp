/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/EmbeddingModelConfiguration.h>
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

EmbeddingModelConfiguration::EmbeddingModelConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

EmbeddingModelConfiguration& EmbeddingModelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockEmbeddingModelConfiguration"))
  {
    m_bedrockEmbeddingModelConfiguration = jsonValue.GetObject("bedrockEmbeddingModelConfiguration");
    m_bedrockEmbeddingModelConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue EmbeddingModelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockEmbeddingModelConfigurationHasBeenSet)
  {
   payload.WithObject("bedrockEmbeddingModelConfiguration", m_bedrockEmbeddingModelConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
