/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ConverseStreamMetadataEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

ConverseStreamMetadataEvent::ConverseStreamMetadataEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

ConverseStreamMetadataEvent& ConverseStreamMetadataEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usage"))
  {
    m_usage = jsonValue.GetObject("usage");
    m_usageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metrics"))
  {
    m_metrics = jsonValue.GetObject("metrics");
    m_metricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("trace"))
  {
    m_trace = jsonValue.GetObject("trace");
    m_traceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("performanceConfig"))
  {
    m_performanceConfig = jsonValue.GetObject("performanceConfig");
    m_performanceConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue ConverseStreamMetadataEvent::Jsonize() const
{
  JsonValue payload;

  if(m_usageHasBeenSet)
  {
   payload.WithObject("usage", m_usage.Jsonize());

  }

  if(m_metricsHasBeenSet)
  {
   payload.WithObject("metrics", m_metrics.Jsonize());

  }

  if(m_traceHasBeenSet)
  {
   payload.WithObject("trace", m_trace.Jsonize());

  }

  if(m_performanceConfigHasBeenSet)
  {
   payload.WithObject("performanceConfig", m_performanceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
