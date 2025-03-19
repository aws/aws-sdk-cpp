/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/BedrockEmbeddingModelConfiguration.h>
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

BedrockEmbeddingModelConfiguration::BedrockEmbeddingModelConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockEmbeddingModelConfiguration& BedrockEmbeddingModelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("dimensions"))
  {
    m_dimensions = jsonValue.GetInteger("dimensions");
    m_dimensionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("embeddingDataType"))
  {
    m_embeddingDataType = EmbeddingDataTypeMapper::GetEmbeddingDataTypeForName(jsonValue.GetString("embeddingDataType"));
    m_embeddingDataTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockEmbeddingModelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dimensionsHasBeenSet)
  {
   payload.WithInteger("dimensions", m_dimensions);

  }

  if(m_embeddingDataTypeHasBeenSet)
  {
   payload.WithString("embeddingDataType", EmbeddingDataTypeMapper::GetNameForEmbeddingDataType(m_embeddingDataType));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
