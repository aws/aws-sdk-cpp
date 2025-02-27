/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/EndSessionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

EndSessionRequest::EndSessionRequest() : 
    m_sessionIdentifierHasBeenSet(false)
{
}

Aws::String EndSessionRequest::SerializePayload() const
{
  return {};
}




