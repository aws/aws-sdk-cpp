/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-xml-protocol/model/NestedXmlMapsRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RestXmlProtocol::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

NestedXmlMapsRequest::NestedXmlMapsRequest() : 
    m_nestedMapHasBeenSet(false),
    m_flatNestedMapHasBeenSet(false)
{
}

Aws::String NestedXmlMapsRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("NestedXmlMapsRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();

  Aws::StringStream ss;
  if(m_nestedMapHasBeenSet)
  {
  }

  if(m_flatNestedMapHasBeenSet)
  {
  }

  return payloadDoc.ConvertToString();
}


