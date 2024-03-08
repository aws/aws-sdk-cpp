/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/GetAgentVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAgentVersionRequest::GetAgentVersionRequest() : 
    m_agentIdHasBeenSet(false),
    m_agentVersionHasBeenSet(false)
{
}

Aws::String GetAgentVersionRequest::SerializePayload() const
{
  return {};
}




