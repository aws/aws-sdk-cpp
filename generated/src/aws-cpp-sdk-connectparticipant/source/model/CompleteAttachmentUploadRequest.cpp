/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectparticipant/model/CompleteAttachmentUploadRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ConnectParticipant::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CompleteAttachmentUploadRequest::CompleteAttachmentUploadRequest() : 
    m_attachmentIdsHasBeenSet(false),
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_connectionTokenHasBeenSet(false)
{
}

Aws::String CompleteAttachmentUploadRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attachmentIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> attachmentIdsJsonList(m_attachmentIds.size());
   for(unsigned attachmentIdsIndex = 0; attachmentIdsIndex < attachmentIdsJsonList.GetLength(); ++attachmentIdsIndex)
   {
     attachmentIdsJsonList[attachmentIdsIndex].AsString(m_attachmentIds[attachmentIdsIndex]);
   }
   payload.WithArray("AttachmentIds", std::move(attachmentIdsJsonList));

  }

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CompleteAttachmentUploadRequest::GetRequestSpecificHeaders() const
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




