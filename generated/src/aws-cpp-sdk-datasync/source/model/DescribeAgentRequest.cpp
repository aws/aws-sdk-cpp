/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/DescribeAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeAgentRequest::DescribeAgentRequest() : 
    m_agentArnHasBeenSet(false)
{
}

Aws::String DescribeAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentArnHasBeenSet)
  {
   payload.WithString("AgentArn", m_agentArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeAgentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.DescribeAgent"));
  return headers;

}




