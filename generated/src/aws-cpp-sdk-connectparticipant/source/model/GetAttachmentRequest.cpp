/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/GetAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetAttachmentRequest::GetAttachmentRequest() : 
    m_attachmentIdHasBeenSet(false),
    m_connectionTokenHasBeenSet(false)
{
}

Aws::String GetAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attachmentIdHasBeenSet)
  {
   payload.WithString("AttachmentId", m_attachmentId);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetAttachmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_connectionTokenHasBeenSet)
  {
    ss << m_connectionToken;
    headers.emplace("x-amz-bearer",  ss.str());
    ss.str("");
  }

  return headers;

}




