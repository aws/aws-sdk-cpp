﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/CreateAnycastIpList2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateAnycastIpList2020_05_31Request::CreateAnycastIpList2020_05_31Request() : 
    m_nameHasBeenSet(false),
    m_ipCount(0),
    m_ipCountHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateAnycastIpList2020_05_31Request::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateAnycastIpListRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "http://cloudfront.amazonaws.com/doc/2020-05-31/");

  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_ipCountHasBeenSet)
  {
   XmlNode ipCountNode = parentNode.CreateChildElement("IpCount");
   ss << m_ipCount;
   ipCountNode.SetText(ss.str());
   ss.str("");
  }

  if(m_tagsHasBeenSet)
  {
   XmlNode tagsNode = parentNode.CreateChildElement("Tags");
   m_tags.AddToNode(tagsNode);
  }

  return payloadDoc.ConvertToString();
}


