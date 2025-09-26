/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/InvokeAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String InvokeAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionStateHasBeenSet)
  {
   payload.WithObject("sessionState", m_sessionState.Jsonize());

  }

  if(m_endSessionHasBeenSet)
  {
   payload.WithBool("endSession", m_endSession);

  }

  if(m_enableTraceHasBeenSet)
  {
   payload.WithBool("enableTrace", m_enableTrace);

  }

  if(m_inputTextHasBeenSet)
  {
   payload.WithString("inputText", m_inputText);

  }

  if(m_memoryIdHasBeenSet)
  {
   payload.WithString("memoryId", m_memoryId);

  }

  if(m_bedrockModelConfigurationsHasBeenSet)
  {
   payload.WithObject("bedrockModelConfigurations", m_bedrockModelConfigurations.Jsonize());

  }

  if(m_streamingConfigurationsHasBeenSet)
  {
   payload.WithObject("streamingConfigurations", m_streamingConfigurations.Jsonize());

  }

  if(m_promptCreationConfigurationsHasBeenSet)
  {
   payload.WithObject("promptCreationConfigurations", m_promptCreationConfigurations.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection InvokeAgentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_sourceArnHasBeenSet)
  {
    ss << m_sourceArn;
    headers.emplace("x-amz-source-arn",  ss.str());
    ss.str("");
  }

  return headers;

}




