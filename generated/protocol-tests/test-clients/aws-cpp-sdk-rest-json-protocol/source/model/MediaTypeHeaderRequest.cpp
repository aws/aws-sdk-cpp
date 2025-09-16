/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/MediaTypeHeaderRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String MediaTypeHeaderRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection MediaTypeHeaderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_jsonHasBeenSet) {
    ss << m_json;
    headers.emplace("x-json", ss.str());
    ss.str("");
  }

  return headers;
}
