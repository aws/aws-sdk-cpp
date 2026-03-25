/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/HttpQueryParamsOnlyOperationRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String HttpQueryParamsOnlyOperationRequest::SerializePayload() const { return {}; }

void HttpQueryParamsOnlyOperationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_queryMapHasBeenSet) {
    for (auto& item : m_queryMap) {
      ss << item.second;
      uri.AddQueryStringParameter(item.first.c_str(), ss.str());
      ss.str("");
    }
  }
}
