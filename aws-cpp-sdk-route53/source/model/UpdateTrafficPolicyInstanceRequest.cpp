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
#include <aws/route53/model/UpdateTrafficPolicyInstanceRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

UpdateTrafficPolicyInstanceRequest::UpdateTrafficPolicyInstanceRequest() : 
    m_idHasBeenSet(false),
    m_tTL(0),
    m_tTLHasBeenSet(false),
    m_trafficPolicyIdHasBeenSet(false),
    m_trafficPolicyVersion(0),
    m_trafficPolicyVersionHasBeenSet(false)
{
}

Aws::String UpdateTrafficPolicyInstanceRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("UpdateTrafficPolicyInstanceRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_tTLHasBeenSet)
  {
   XmlNode tTLNode = parentNode.CreateChildElement("TTL");
  ss << m_tTL;
   tTLNode.SetText(ss.str());
  ss.str("");
  }

  if(m_trafficPolicyIdHasBeenSet)
  {
   XmlNode trafficPolicyIdNode = parentNode.CreateChildElement("TrafficPolicyId");
   trafficPolicyIdNode.SetText(m_trafficPolicyId);
  }

  if(m_trafficPolicyVersionHasBeenSet)
  {
   XmlNode trafficPolicyVersionNode = parentNode.CreateChildElement("TrafficPolicyVersion");
  ss << m_trafficPolicyVersion;
   trafficPolicyVersionNode.SetText(ss.str());
  ss.str("");
  }

  return payloadDoc.ConvertToString();
}


