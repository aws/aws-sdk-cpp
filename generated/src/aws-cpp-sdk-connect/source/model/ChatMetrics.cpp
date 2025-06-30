/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ChatMetrics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Connect
{
namespace Model
{

ChatMetrics::ChatMetrics(JsonView jsonValue)
{
  *this = jsonValue;
}

ChatMetrics& ChatMetrics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ChatContactMetrics"))
  {
    m_chatContactMetrics = jsonValue.GetObject("ChatContactMetrics");
    m_chatContactMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AgentMetrics"))
  {
    m_agentMetrics = jsonValue.GetObject("AgentMetrics");
    m_agentMetricsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CustomerMetrics"))
  {
    m_customerMetrics = jsonValue.GetObject("CustomerMetrics");
    m_customerMetricsHasBeenSet = true;
  }
  return *this;
}

JsonValue ChatMetrics::Jsonize() const
{
  JsonValue payload;

  if(m_chatContactMetricsHasBeenSet)
  {
   payload.WithObject("ChatContactMetrics", m_chatContactMetrics.Jsonize());

  }

  if(m_agentMetricsHasBeenSet)
  {
   payload.WithObject("AgentMetrics", m_agentMetrics.Jsonize());

  }

  if(m_customerMetricsHasBeenSet)
  {
   payload.WithObject("CustomerMetrics", m_customerMetrics.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Connect
} // namespace Aws
