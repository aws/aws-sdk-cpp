/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CreateVPCAssociationAuthorizationRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateVPCAssociationAuthorizationRequest::CreateVPCAssociationAuthorizationRequest() : 
    m_hostedZoneIdHasBeenSet(false),
    m_vPCHasBeenSet(false)
{
}

Aws::String CreateVPCAssociationAuthorizationRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateVPCAssociationAuthorizationRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_vPCHasBeenSet)
  {
   XmlNode vPCNode = parentNode.CreateChildElement("VPC");
   m_vPC.AddToNode(vPCNode);
  }

  return payloadDoc.ConvertToString();
}


