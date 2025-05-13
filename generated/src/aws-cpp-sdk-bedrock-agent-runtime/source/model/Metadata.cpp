/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Metadata.h>
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

Metadata::Metadata(JsonView jsonValue)
{
  *this = jsonValue;
}

Metadata& Metadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientRequestId"))
  {
    m_clientRequestId = jsonValue.GetString("clientRequestId");
    m_clientRequestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetString("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operationTotalTimeMs"))
  {
    m_operationTotalTimeMs = jsonValue.GetInt64("operationTotalTimeMs");
    m_operationTotalTimeMsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startTime"))
  {
    m_startTime = jsonValue.GetString("startTime");
    m_startTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalTimeMs"))
  {
    m_totalTimeMs = jsonValue.GetInt64("totalTimeMs");
    m_totalTimeMsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usage"))
  {
    m_usage = jsonValue.GetObject("usage");
    m_usageHasBeenSet = true;
  }
  return *this;
}

JsonValue Metadata::Jsonize() const
{
  JsonValue payload;

  if(m_clientRequestIdHasBeenSet)
  {
   payload.WithString("clientRequestId", m_clientRequestId);

  }

  if(m_endTimeHasBeenSet)
  {
   payload.WithString("endTime", m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_operationTotalTimeMsHasBeenSet)
  {
   payload.WithInt64("operationTotalTimeMs", m_operationTotalTimeMs);

  }

  if(m_startTimeHasBeenSet)
  {
   payload.WithString("startTime", m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_totalTimeMsHasBeenSet)
  {
   payload.WithInt64("totalTimeMs", m_totalTimeMs);

  }

  if(m_usageHasBeenSet)
  {
   payload.WithObject("usage", m_usage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
