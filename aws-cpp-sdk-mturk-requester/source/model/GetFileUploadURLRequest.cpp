/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mturk-requester/model/GetFileUploadURLRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MTurk::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFileUploadURLRequest::GetFileUploadURLRequest() : 
    m_assignmentIdHasBeenSet(false),
    m_questionIdentifierHasBeenSet(false)
{
}

Aws::String GetFileUploadURLRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_assignmentIdHasBeenSet)
  {
   payload.WithString("AssignmentId", m_assignmentId);

  }

  if(m_questionIdentifierHasBeenSet)
  {
   payload.WithString("QuestionIdentifier", m_questionIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFileUploadURLRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MTurkRequesterServiceV20170117.GetFileUploadURL"));
  return headers;

}




