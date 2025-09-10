/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HttpPrefixHeadersRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String HttpPrefixHeadersRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection HttpPrefixHeadersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_fooHasBeenSet) {
    ss << m_foo;
    headers.emplace("x-foo", ss.str());
    ss.str("");
  }

  if (m_fooMapHasBeenSet) {
    for (const auto& item : m_fooMap) {
      ss << "x-foo-" << item.first;
      headers.emplace(ss.str(), item.second);
      ss.str("");
    }
  }

  return headers;
}
