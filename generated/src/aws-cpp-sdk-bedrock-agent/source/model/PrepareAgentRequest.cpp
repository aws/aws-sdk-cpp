/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/PrepareAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PrepareAgentRequest::PrepareAgentRequest() : 
    m_agentIdHasBeenSet(false)
{
}

Aws::String PrepareAgentRequest::SerializePayload() const
{
  return {};
}




