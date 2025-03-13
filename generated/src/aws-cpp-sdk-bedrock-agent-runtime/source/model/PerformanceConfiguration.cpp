/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/PerformanceConfiguration.h>
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

PerformanceConfiguration::PerformanceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

PerformanceConfiguration& PerformanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("latency"))
  {
    m_latency = PerformanceConfigLatencyMapper::GetPerformanceConfigLatencyForName(jsonValue.GetString("latency"));
    m_latencyHasBeenSet = true;
  }
  return *this;
}

JsonValue PerformanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_latencyHasBeenSet)
  {
   payload.WithString("latency", PerformanceConfigLatencyMapper::GetNameForPerformanceConfigLatency(m_latency));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
