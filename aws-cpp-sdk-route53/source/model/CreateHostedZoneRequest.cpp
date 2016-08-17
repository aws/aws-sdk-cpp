/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/route53/model/CreateHostedZoneRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateHostedZoneRequest::CreateHostedZoneRequest() : 
    m_nameHasBeenSet(false),
    m_vPCHasBeenSet(false),
    m_callerReferenceHasBeenSet(false),
    m_hostedZoneConfigHasBeenSet(false),
    m_delegationSetIdHasBeenSet(false)
{
}

Aws::String CreateHostedZoneRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateHostedZoneRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_nameHasBeenSet)
  {
   XmlNode nameNode = parentNode.CreateChildElement("Name");
   nameNode.SetText(m_name);
  }

  if(m_vPCHasBeenSet)
  {
   XmlNode vPCNode = parentNode.CreateChildElement("VPC");
   m_vPC.AddToNode(vPCNode);
  }

  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_hostedZoneConfigHasBeenSet)
  {
   XmlNode hostedZoneConfigNode = parentNode.CreateChildElement("HostedZoneConfig");
   m_hostedZoneConfig.AddToNode(hostedZoneConfigNode);
  }

  if(m_delegationSetIdHasBeenSet)
  {
   XmlNode delegationSetIdNode = parentNode.CreateChildElement("DelegationSetId");
   delegationSetIdNode.SetText(m_delegationSetId);
  }

  return payloadDoc.ConvertToString();
}


