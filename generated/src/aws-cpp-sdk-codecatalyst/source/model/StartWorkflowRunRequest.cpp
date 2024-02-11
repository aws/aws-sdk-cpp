/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/StartWorkflowRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

StartWorkflowRunRequest::StartWorkflowRunRequest() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_workflowIdHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true)
{
}

Aws::String StartWorkflowRunRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("clientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

void StartWorkflowRunRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_workflowIdHasBeenSet)
    {
      ss << m_workflowId;
      uri.AddQueryStringParameter("workflowId", ss.str());
      ss.str("");
    }

}



