/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/XmlEmptyStringsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

XmlEmptyStringsRequest::XmlEmptyStringsRequest() : 
    m_emptyStringHasBeenSet(false)
{
}

Aws::String XmlEmptyStringsRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlEmptyStringsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if(m_emptyStringHasBeenSet)
  {
   XmlNode emptyStringNode = parentNode.CreateChildElement("emptyString");
   emptyStringNode.SetText(m_emptyString);
  }

  return payloadDoc.ConvertToString();
}


