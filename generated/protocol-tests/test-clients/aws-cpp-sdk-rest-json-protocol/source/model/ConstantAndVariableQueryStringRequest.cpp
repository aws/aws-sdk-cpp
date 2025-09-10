/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/ConstantAndVariableQueryStringRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ConstantAndVariableQueryStringRequest::SerializePayload() const { return {}; }

void ConstantAndVariableQueryStringRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_bazHasBeenSet) {
    ss << m_baz;
    uri.AddQueryStringParameter("baz", ss.str());
    ss.str("");
  }

  if (m_maybeSetHasBeenSet) {
    ss << m_maybeSet;
    uri.AddQueryStringParameter("maybeSet", ss.str());
    ss.str("");
  }
}
