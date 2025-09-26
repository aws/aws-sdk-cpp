/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RerankResult.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

RerankResult::RerankResult(JsonView jsonValue)
{
  *this = jsonValue;
}

RerankResult& RerankResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("index"))
  {
    m_index = jsonValue.GetInteger("index");
    m_indexHasBeenSet = true;
  }
  if(jsonValue.ValueExists("relevanceScore"))
  {
    m_relevanceScore = jsonValue.GetDouble("relevanceScore");
    m_relevanceScoreHasBeenSet = true;
  }
  if(jsonValue.ValueExists("document"))
  {
    m_document = jsonValue.GetObject("document");
    m_documentHasBeenSet = true;
  }
  return *this;
}

JsonValue RerankResult::Jsonize() const
{
  JsonValue payload;

  if(m_indexHasBeenSet)
  {
   payload.WithInteger("index", m_index);

  }

  if(m_relevanceScoreHasBeenSet)
  {
   payload.WithDouble("relevanceScore", m_relevanceScore);

  }

  if(m_documentHasBeenSet)
  {
   payload.WithObject("document", m_document.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
