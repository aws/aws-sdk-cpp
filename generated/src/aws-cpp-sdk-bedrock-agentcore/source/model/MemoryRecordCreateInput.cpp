/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MemoryRecordCreateInput.h>
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

MemoryRecordCreateInput::MemoryRecordCreateInput(JsonView jsonValue)
{
  *this = jsonValue;
}

MemoryRecordCreateInput& MemoryRecordCreateInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("requestIdentifier"))
  {
    m_requestIdentifier = jsonValue.GetString("requestIdentifier");
    m_requestIdentifierHasBeenSet = true;
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
  if(jsonValue.ValueExists("content"))
  {
    m_content = jsonValue.GetObject("content");
    m_contentHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetDouble("timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memoryStrategyId"))
  {
    m_memoryStrategyId = jsonValue.GetString("memoryStrategyId");
    m_memoryStrategyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryRecordCreateInput::Jsonize() const
{
  JsonValue payload;

  if(m_requestIdentifierHasBeenSet)
  {
   payload.WithString("requestIdentifier", m_requestIdentifier);

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

  if(m_contentHasBeenSet)
  {
   payload.WithObject("content", m_content.Jsonize());

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithDouble("timestamp", m_timestamp.SecondsWithMSPrecision());
  }

  if(m_memoryStrategyIdHasBeenSet)
  {
   payload.WithString("memoryStrategyId", m_memoryStrategyId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
