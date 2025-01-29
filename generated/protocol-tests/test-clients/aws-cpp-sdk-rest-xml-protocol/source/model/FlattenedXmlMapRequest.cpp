/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/FlattenedXmlMapRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

FlattenedXmlMapRequest::FlattenedXmlMapRequest() : 
    m_myMapHasBeenSet(false)
{
}

Aws::String FlattenedXmlMapRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("FlattenedXmlMapRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if(m_myMapHasBeenSet)
  {
  }

  return payloadDoc.ConvertToString();
}


