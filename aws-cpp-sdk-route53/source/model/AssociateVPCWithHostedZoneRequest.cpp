/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/AssociateVPCWithHostedZoneRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

AssociateVPCWithHostedZoneRequest::AssociateVPCWithHostedZoneRequest() : 
    m_hostedZoneIdHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_commentHasBeenSet(false)
{
}

Aws::String AssociateVPCWithHostedZoneRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("AssociateVPCWithHostedZoneRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_vPCHasBeenSet)
  {
   XmlNode vPCNode = parentNode.CreateChildElement("VPC");
   m_vPC.AddToNode(vPCNode);
  }

  if(m_commentHasBeenSet)
  {
   XmlNode commentNode = parentNode.CreateChildElement("Comment");
   commentNode.SetText(m_comment);
  }

  return payloadDoc.ConvertToString();
}


