﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrieveAndGenerateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RetrieveAndGenerateRequest::RetrieveAndGenerateRequest() : 
    m_sessionIdHasBeenSet(false),
    m_inputHasBeenSet(false),
    m_retrieveAndGenerateConfigurationHasBeenSet(false),
    m_sessionConfigurationHasBeenSet(false)
{
}

Aws::String RetrieveAndGenerateRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sessionIdHasBeenSet)
  {
   payload.WithString("sessionId", m_sessionId);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithObject("input", m_input.Jsonize());

  }

  if(m_retrieveAndGenerateConfigurationHasBeenSet)
  {
   payload.WithObject("retrieveAndGenerateConfiguration", m_retrieveAndGenerateConfiguration.Jsonize());

  }

  if(m_sessionConfigurationHasBeenSet)
  {
   payload.WithObject("sessionConfiguration", m_sessionConfiguration.Jsonize());

  }

  return payload.View().WriteReadable();
}




