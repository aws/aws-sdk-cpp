﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/XmlAttributesRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;


Aws::String XmlAttributesRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("XmlAttributesRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if(m_fooHasBeenSet)
  {
   XmlNode fooNode = parentNode.CreateChildElement("foo");
   fooNode.SetText(m_foo);
  }

  if(m_attrHasBeenSet)
  {
   parentNode.SetAttributeValue("test", m_attr);
  }

  return payloadDoc.ConvertToString();
}


