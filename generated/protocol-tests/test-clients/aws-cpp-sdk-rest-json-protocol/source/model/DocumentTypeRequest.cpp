/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/DocumentTypeRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DocumentTypeRequest::SerializePayload() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("stringValue", m_stringValue);
  }

  if (m_documentValueHasBeenSet) {
    if (!m_documentValue.View().IsNull()) {
      payload.WithObject("documentValue", JsonValue(m_documentValue.View()));
    }
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DocumentTypeRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
