/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/PutAttachmentRequest.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAttachmentRequest::SerializePayload() const {
  JsonValue payload;

  if (m_assetIdentifierHasBeenSet) {
    payload.WithString("AssetIdentifier", m_assetIdentifier);
  }

  if (m_iterableFormNameHasBeenSet) {
    payload.WithString("IterableFormName", m_iterableFormName);
  }

  if (m_itemIdentifierHasBeenSet) {
    payload.WithString("ItemIdentifier", m_itemIdentifier);
  }

  if (m_attachmentNameHasBeenSet) {
    payload.WithString("AttachmentName", m_attachmentName);
  }

  if (m_contentHasBeenSet) {
    payload.WithString("Content", m_content);
  }

  if (m_formTypeIdHasBeenSet) {
    payload.WithString("FormTypeId", m_formTypeId);
  }

  if (m_clientTokenHasBeenSet) {
    payload.WithString("ClientToken", m_clientToken);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAttachmentRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.PutAttachment"));
  return headers;
}
