/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CreateHealthCheckRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateHealthCheckRequest::CreateHealthCheckRequest() : 
    m_callerReferenceHasBeenSet(false),
    m_healthCheckConfigHasBeenSet(false)
{
}

Aws::String CreateHealthCheckRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateHealthCheckRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_callerReferenceHasBeenSet)
  {
   XmlNode callerReferenceNode = parentNode.CreateChildElement("CallerReference");
   callerReferenceNode.SetText(m_callerReference);
  }

  if(m_healthCheckConfigHasBeenSet)
  {
   XmlNode healthCheckConfigNode = parentNode.CreateChildElement("HealthCheckConfig");
   m_healthCheckConfig.AddToNode(healthCheckConfigNode);
  }

  return payloadDoc.ConvertToString();
}


