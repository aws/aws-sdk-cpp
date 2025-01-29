/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/FlattenedXmlMapWithXmlNameRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

FlattenedXmlMapWithXmlNameRequest::FlattenedXmlMapWithXmlNameRequest() : 
    m_myMapHasBeenSet(false)
{
}

Aws::String FlattenedXmlMapWithXmlNameRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("FlattenedXmlMapWithXmlNameRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if(m_myMapHasBeenSet)
  {
  }

  return payloadDoc.ConvertToString();
}


