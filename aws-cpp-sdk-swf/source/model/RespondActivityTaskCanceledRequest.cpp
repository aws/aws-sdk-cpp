/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/RespondActivityTaskCanceledRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RespondActivityTaskCanceledRequest::RespondActivityTaskCanceledRequest() : 
    m_taskTokenHasBeenSet(false),
    m_detailsHasBeenSet(false)
{
}

Aws::String RespondActivityTaskCanceledRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_taskTokenHasBeenSet)
  {
   payload.WithString("taskToken", m_taskToken);

  }

  if(m_detailsHasBeenSet)
  {
   payload.WithString("details", m_details);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection RespondActivityTaskCanceledRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SimpleWorkflowService.RespondActivityTaskCanceled"));
  return headers;

}




