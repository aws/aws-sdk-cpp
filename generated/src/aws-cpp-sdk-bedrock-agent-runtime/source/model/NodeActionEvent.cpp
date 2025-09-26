/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/NodeActionEvent.h>
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

NodeActionEvent::NodeActionEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeActionEvent& NodeActionEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeName"))
  {
    m_nodeName = jsonValue.GetString("nodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestamp"))
  {
    m_timestamp = jsonValue.GetString("timestamp");
    m_timestampHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestId"))
  {
    m_requestId = jsonValue.GetString("requestId");
    m_requestIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("serviceName"))
  {
    m_serviceName = jsonValue.GetString("serviceName");
    m_serviceNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operationName"))
  {
    m_operationName = jsonValue.GetString("operationName");
    m_operationNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operationRequest"))
  {
    m_operationRequest = jsonValue.GetObject("operationRequest");
    m_operationRequestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("operationResponse"))
  {
    m_operationResponse = jsonValue.GetObject("operationResponse");
    m_operationResponseHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeActionEvent::Jsonize() const
{
  JsonValue payload;

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("nodeName", m_nodeName);

  }

  if(m_timestampHasBeenSet)
  {
   payload.WithString("timestamp", m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_requestIdHasBeenSet)
  {
   payload.WithString("requestId", m_requestId);

  }

  if(m_serviceNameHasBeenSet)
  {
   payload.WithString("serviceName", m_serviceName);

  }

  if(m_operationNameHasBeenSet)
  {
   payload.WithString("operationName", m_operationName);

  }

  if(m_operationRequestHasBeenSet)
  {
    if(!m_operationRequest.View().IsNull())
    {
       payload.WithObject("operationRequest", JsonValue(m_operationRequest.View()));
    }
  }

  if(m_operationResponseHasBeenSet)
  {
    if(!m_operationResponse.View().IsNull())
    {
       payload.WithObject("operationResponse", JsonValue(m_operationResponse.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
