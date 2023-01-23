/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateAgentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateAgentRequest::UpdateAgentRequest() : 
    m_agentArnHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String UpdateAgentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_agentArnHasBeenSet)
  {
   payload.WithString("AgentArn", m_agentArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateAgentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateAgent"));
  return headers;

}




