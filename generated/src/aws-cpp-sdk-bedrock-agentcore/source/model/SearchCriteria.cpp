/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/SearchCriteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

SearchCriteria::SearchCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

SearchCriteria& SearchCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("searchQuery"))
  {
    m_searchQuery = jsonValue.GetString("searchQuery");
    m_searchQueryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memoryStrategyId"))
  {
    m_memoryStrategyId = jsonValue.GetString("memoryStrategyId");
    m_memoryStrategyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("topK"))
  {
    m_topK = jsonValue.GetInteger("topK");
    m_topKHasBeenSet = true;
  }
  return *this;
}

JsonValue SearchCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_searchQueryHasBeenSet)
  {
   payload.WithString("searchQuery", m_searchQuery);

  }

  if(m_memoryStrategyIdHasBeenSet)
  {
   payload.WithString("memoryStrategyId", m_memoryStrategyId);

  }

  if(m_topKHasBeenSet)
  {
   payload.WithInteger("topK", m_topK);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
