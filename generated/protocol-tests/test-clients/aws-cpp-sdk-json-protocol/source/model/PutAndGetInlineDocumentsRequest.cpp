/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/json-protocol/model/PutAndGetInlineDocumentsRequest.h>

#include <utility>

using namespace Aws::JsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutAndGetInlineDocumentsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_inlineDocumentHasBeenSet) {
    if (!m_inlineDocument.View().IsNull()) {
      payload.WithObject("inlineDocument", JsonValue(m_inlineDocument.View()));
    }
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutAndGetInlineDocumentsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "JsonProtocol.PutAndGetInlineDocuments"));
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
