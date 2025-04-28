/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateConnectionGroup2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;


Aws::String CreateConnectionGroup2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateConnectionGroupRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_ipv6EnabledHasBeenSet)
  {
   XmlNode ipv6EnabledNode = parentNode.CreateChildElement("Ipv6Enabled");
   ss << std::boolalpha << m_ipv6Enabled;
   ipv6EnabledNode.SetText(ss.str());
   ss.str("");
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsNode = parentNode.CreateChildElement("Tags");
   m_tags.AddToNode(tagsNode);
  }

  if(m_anycastIpListIdHasBeenSet)
  {
   XmlNode anycastIpListIdNode = parentNode.CreateChildElement("AnycastIpListId");
   anycastIpListIdNode.SetText(m_anycastIpListId);
  }

  if(m_enabledHasBeenSet)
  {
   XmlNode enabledNode = parentNode.CreateChildElement("Enabled");
   ss << std::boolalpha << m_enabled;
   enabledNode.SetText(ss.str());
   ss.str("");
  }

  return payloadDoc.ConvertToString();
}


