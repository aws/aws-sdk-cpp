/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MemoryRecordSummary.h>
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

MemoryRecordSummary::MemoryRecordSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MemoryRecordSummary& MemoryRecordSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memoryRecordId"))
  {
    m_memoryRecordId = jsonValue.GetString("memoryRecordId");
    m_memoryRecordIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memoryStrategyId"))
  {
    m_memoryStrategyId = jsonValue.GetString("memoryStrategyId");
    m_memoryStrategyIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespaces"))
  {
    Aws::Utils::Array<JsonView> namespacesJsonList = jsonValue.GetArray("namespaces");
    for(unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex)
    {
      m_namespaces.push_back(namespacesJsonList[namespacesIndex].AsString());
    }
    m_namespacesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("score"))
  {
    m_score = jsonValue.GetDouble("score");
    m_scoreHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryRecordSummary::Jsonize() const
{
  JsonValue payload;

  if(m_memoryRecordIdHasBeenSet)
  {
   payload.WithString("memoryRecordId", m_memoryRecordId);

  }

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_memoryStrategyIdHasBeenSet)
  {
   payload.WithString("memoryStrategyId", m_memoryStrategyId);

  }

  if(m_namespacesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> namespacesJsonList(m_namespaces.size());
   for(unsigned namespacesIndex = 0; namespacesIndex < namespacesJsonList.GetLength(); ++namespacesIndex)
   {
     namespacesJsonList[namespacesIndex].AsString(m_namespaces[namespacesIndex]);
   }
   payload.WithArray("namespaces", std::move(namespacesJsonList));

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_scoreHasBeenSet)
  {
   payload.WithDouble("score", m_score);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
