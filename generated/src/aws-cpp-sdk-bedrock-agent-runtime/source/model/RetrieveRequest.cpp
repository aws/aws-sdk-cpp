﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RetrieveRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RetrieveRequest::RetrieveRequest() : 
    m_knowledgeBaseIdHasBeenSet(false),
    m_retrievalQueryHasBeenSet(false),
    m_retrievalConfigurationHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String RetrieveRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_retrievalQueryHasBeenSet)
  {
   payload.WithObject("retrievalQuery", m_retrievalQuery.Jsonize());

  }

  if(m_retrievalConfigurationHasBeenSet)
  {
   payload.WithObject("retrievalConfiguration", m_retrievalConfiguration.Jsonize());

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




