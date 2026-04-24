/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/NullAndEmptyHeadersServerRequest.h>

#include <numeric>
#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String NullAndEmptyHeadersServerRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection NullAndEmptyHeadersServerRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_aHasBeenSet) {
    ss << m_a;
    headers.emplace("x-a", ss.str());
    ss.str("");
  }

  if (m_bHasBeenSet) {
    ss << m_b;
    headers.emplace("x-b", ss.str());
    ss.str("");
  }

  if (m_cHasBeenSet) {
    headers.emplace("x-c", std::accumulate(std::begin(m_c), std::end(m_c), Aws::String{},
                                           [](const Aws::String &acc, const Aws::String &item) -> Aws::String {
                                             const auto headerValue = item;
                                             return acc.empty() ? headerValue : acc + "," + headerValue;
                                           }));
  }

  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
