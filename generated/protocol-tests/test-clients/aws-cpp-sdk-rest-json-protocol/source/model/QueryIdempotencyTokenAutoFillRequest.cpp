/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String QueryIdempotencyTokenAutoFillRequest::SerializePayload() const { return {}; }

void QueryIdempotencyTokenAutoFillRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_tokenHasBeenSet) {
    ss << m_token;
    uri.AddQueryStringParameter("token", ss.str());
    ss.str("");
  }
}
