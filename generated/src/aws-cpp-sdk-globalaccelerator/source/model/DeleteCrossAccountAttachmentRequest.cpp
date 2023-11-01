/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/globalaccelerator/model/DeleteCrossAccountAttachmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GlobalAccelerator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCrossAccountAttachmentRequest::DeleteCrossAccountAttachmentRequest() : 
    m_attachmentArnHasBeenSet(false)
{
}

Aws::String DeleteCrossAccountAttachmentRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_attachmentArnHasBeenSet)
  {
   payload.WithString("AttachmentArn", m_attachmentArn);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteCrossAccountAttachmentRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "GlobalAccelerator_V20180706.DeleteCrossAccountAttachment"));
  return headers;

}




