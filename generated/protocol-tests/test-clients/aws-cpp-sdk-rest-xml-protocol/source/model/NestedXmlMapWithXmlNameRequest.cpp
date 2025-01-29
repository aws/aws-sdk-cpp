/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/NestedXmlMapWithXmlNameRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

NestedXmlMapWithXmlNameRequest::NestedXmlMapWithXmlNameRequest() : 
    m_nestedXmlMapWithXmlNameMapHasBeenSet(false),
    m_requestIdHasBeenSet(false)
{
}

Aws::String NestedXmlMapWithXmlNameRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("NestedXmlMapWithXmlNameRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if(m_nestedXmlMapWithXmlNameMapHasBeenSet)
  {
  }

  return payloadDoc.ConvertToString();
}


Aws::Http::HeaderValueCollection NestedXmlMapWithXmlNameRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_requestIdHasBeenSet)
  {
    ss << m_requestId;
    headers.emplace("x-amzn-requestid",  ss.str());
    ss.str("");
  }

  return headers;
}
