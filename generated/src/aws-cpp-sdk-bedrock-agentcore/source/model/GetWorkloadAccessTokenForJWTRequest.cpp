/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/GetWorkloadAccessTokenForJWTRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BedrockAgentCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetWorkloadAccessTokenForJWTRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("workloadName", m_workloadName);

  }

  if(m_userTokenHasBeenSet)
  {
   payload.WithString("userToken", m_userToken);

  }

  return payload.View().WriteReadable();
}




