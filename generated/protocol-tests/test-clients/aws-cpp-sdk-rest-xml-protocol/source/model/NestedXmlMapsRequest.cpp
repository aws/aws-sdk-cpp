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
   XmlNode nestedMapParentNode = parentNode.CreateChildElement("nestedMap");
   for(const auto& mapItem : m_nestedMap)
   {
     XmlNode nestedMapMapEntryNode = nestedMapParentNode.CreateChildElement("entry");
     XmlNode nestedMapKeyNode = nestedMapMapEntryNode.CreateChildElement("key");
     nestedMapKeyNode.SetText(mapItem.first);
     XmlNode nestedMapValueNode = nestedMapMapEntryNode.CreateChildElement("value");
     nestedMapValueNode.SetText(mapItem.second);
   }
  }

  if(m_flatNestedMapHasBeenSet)
  {
   XmlNode flatNestedMapParentNode = parentNode.CreateChildElement("flatNestedMap");
   for(const auto& mapItem : m_flatNestedMap)
   {
     XmlNode flatNestedMapMapEntryNode = flatNestedMapParentNode.CreateChildElement("entry");
     XmlNode flatNestedMapKeyNode = flatNestedMapMapEntryNode.CreateChildElement("key");
     flatNestedMapKeyNode.SetText(mapItem.first);
     XmlNode flatNestedMapValueNode = flatNestedMapMapEntryNode.CreateChildElement("value");
     flatNestedMapValueNode.SetText(mapItem.second);
   }
  }

  return payloadDoc.ConvertToString();
}


