/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/UpdateHITReviewStatusRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateHITReviewStatusRequest::UpdateHITReviewStatusRequest() : 
    m_hITIdHasBeenSet(false),
    m_revert(false),
    m_revertHasBeenSet(false)
{
}

Aws::String UpdateHITReviewStatusRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITIdHasBeenSet)
  {
   payload.WithString("HITId", m_hITId);

  }

  if(m_revertHasBeenSet)
  {
   payload.WithBool("Revert", m_revert);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateHITReviewStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.UpdateHITReviewStatus"));
  return headers;

}




