/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/MemorySessionSummary.h>
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

MemorySessionSummary::MemorySessionSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

MemorySessionSummary& MemorySessionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memoryId"))
  {
    m_memoryId = jsonValue.GetString("memoryId");
    m_memoryIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionId"))
  {
    m_sessionId = jsonValue.GetString("sessionId");
    m_sessionIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionStartTime"))
  {
    m_sessionStartTime = jsonValue.GetString("sessionStartTime");
    m_sessionStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sessionExpiryTime"))
  {
    m_sessionExpiryTime = jsonValue.GetString("sessionExpiryTime");
    m_sessionExpiryTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("summaryText"))
  {
    m_summaryText = jsonValue.GetString("summaryText");
    m_summaryTextHasBeenSet = true;
  }
  return *this;
}

JsonValue MemorySessionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_memoryIdHasBeenSet)
  {
   payload.WithString("memoryId", m_memoryId);

  }

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_sessionStartTimeHasBeenSet)
  {
   payload.WithString("sessionStartTime", m_sessionStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_sessionExpiryTimeHasBeenSet)
  {
   payload.WithString("sessionExpiryTime", m_sessionExpiryTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_summaryTextHasBeenSet)
  {
   payload.WithString("summaryText", m_summaryText);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
