/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/OmitsNullSerializesEmptyStringRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String OmitsNullSerializesEmptyStringRequest::SerializePayload() const { return {}; }

void OmitsNullSerializesEmptyStringRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_nullValueHasBeenSet) {
    ss << m_nullValue;
    uri.AddQueryStringParameter("Null", ss.str());
    ss.str("");
  }

  if (m_emptyStringHasBeenSet) {
    ss << m_emptyString;
    uri.AddQueryStringParameter("Empty", ss.str());
    ss.str("");
  }
}
