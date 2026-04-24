/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rest-json-protocol/model/QueryParamsAsStringListMapRequest.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String QueryParamsAsStringListMapRequest::SerializePayload() const { return {}; }

void QueryParamsAsStringListMapRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_quxHasBeenSet) {
    ss << m_qux;
    uri.AddQueryStringParameter("corge", ss.str());
    ss.str("");
  }

  if (m_fooHasBeenSet) {
    for (auto& item : m_foo) {
      for (auto& innerItem : item.second) {
        ss << innerItem;
        uri.AddQueryStringParameter(item.first.c_str(), ss.str());
        ss.str("");
      }
    }
  }
}
