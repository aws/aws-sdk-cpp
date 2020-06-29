/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/CreateAdditionalAssignmentsForHITRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateAdditionalAssignmentsForHITRequest::CreateAdditionalAssignmentsForHITRequest() : 
    m_hITIdHasBeenSet(false),
    m_numberOfAdditionalAssignments(0),
    m_numberOfAdditionalAssignmentsHasBeenSet(false),
    m_uniqueRequestTokenHasBeenSet(false)
{
}

Aws::String CreateAdditionalAssignmentsForHITRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_hITIdHasBeenSet)
  {
   payload.WithString("HITId", m_hITId);

  }

  if(m_numberOfAdditionalAssignmentsHasBeenSet)
  {
   payload.WithInteger("NumberOfAdditionalAssignments", m_numberOfAdditionalAssignments);

  }

  if(m_uniqueRequestTokenHasBeenSet)
  {
   payload.WithString("UniqueRequestToken", m_uniqueRequestToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateAdditionalAssignmentsForHITRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.CreateAdditionalAssignmentsForHIT"));
  return headers;

}




