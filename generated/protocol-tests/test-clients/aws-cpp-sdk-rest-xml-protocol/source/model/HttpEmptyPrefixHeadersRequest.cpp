/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpEmptyPrefixHeadersRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String HttpEmptyPrefixHeadersRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection HttpEmptyPrefixHeadersRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_prefixHeadersHasBeenSet) {
    for (const auto& item : m_prefixHeaders) {
      ss << "" << item.first;
      headers.emplace(ss.str(), item.second);
      ss.str("");
    }
  }

  if (m_specificHeaderHasBeenSet) {
    ss << m_specificHeader;
    headers.emplace("hello", ss.str());
    ss.str("");
  }

  return headers;
}
