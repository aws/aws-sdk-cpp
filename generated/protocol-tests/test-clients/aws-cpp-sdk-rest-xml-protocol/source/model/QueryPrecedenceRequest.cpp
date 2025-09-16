/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/QueryPrecedenceRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String QueryPrecedenceRequest::SerializePayload() const { return {}; }

void QueryPrecedenceRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_fooHasBeenSet) {
    ss << m_foo;
    uri.AddQueryStringParameter("bar", ss.str());
    ss.str("");
  }

  if (m_bazHasBeenSet) {
    for (auto& item : m_baz) {
      ss << item.second;
      uri.AddQueryStringParameter(item.first.c_str(), ss.str());
      ss.str("");
    }
  }
}
