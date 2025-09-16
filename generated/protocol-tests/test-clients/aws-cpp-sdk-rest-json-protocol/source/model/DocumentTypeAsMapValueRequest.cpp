/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/DocumentTypeAsMapValueRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DocumentTypeAsMapValueRequest::SerializePayload() const {
  JsonValue payload;

  if (m_docValuedMapHasBeenSet) {
    JsonValue docValuedMapJsonMap;
    for (auto& docValuedMapItem : m_docValuedMap) {
      docValuedMapJsonMap.WithObject(docValuedMapItem.first, docValuedMapItem.second.View());
    }
    payload.WithObject("docValuedMap", std::move(docValuedMapJsonMap));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DocumentTypeAsMapValueRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
