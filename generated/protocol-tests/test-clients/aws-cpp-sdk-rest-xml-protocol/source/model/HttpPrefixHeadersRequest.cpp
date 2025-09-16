/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpPrefixHeadersRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
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

  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
