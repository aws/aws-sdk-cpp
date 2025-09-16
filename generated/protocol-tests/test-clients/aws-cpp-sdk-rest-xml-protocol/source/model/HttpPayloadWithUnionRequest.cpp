/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rest-xml-protocol/model/HttpPayloadWithUnionRequest.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

Aws::String HttpPayloadWithUnionRequest::SerializePayload() const {
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("nested");

  XmlNode parentNode = payloadDoc.GetRootElement();

  m_nested.AddToNode(parentNode);
  if (parentNode.HasChildren()) {
    return payloadDoc.ConvertToString();
  }

  return {};
}

Aws::Http::HeaderValueCollection HttpPayloadWithUnionRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_requestIdHasBeenSet) {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid", ss.str());
    ss.str("");
  }

  return headers;
}
