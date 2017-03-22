/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateHITReviewStatusRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.UpdateHITReviewStatus"));
  return headers;

}




