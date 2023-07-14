/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/CreateQueryLoggingConfigRequest.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

CreateQueryLoggingConfigRequest::CreateQueryLoggingConfigRequest() : 
    m_hostedZoneIdHasBeenSet(false),
    m_cloudWatchLogsLogGroupArnHasBeenSet(false)
{
}

Aws::String CreateQueryLoggingConfigRequest::SerializePayload() const
{
  XmlDocument payloadDoc = XmlDocument::CreateWithRootNode("CreateQueryLoggingConfigRequest");

  XmlNode parentNode = payloadDoc.GetRootElement();
  parentNode.SetAttributeValue("xmlns", "https://route53.amazonaws.com/doc/2013-04-01/");

  Aws::StringStream ss;
  if(m_hostedZoneIdHasBeenSet)
  {
   XmlNode hostedZoneIdNode = parentNode.CreateChildElement("HostedZoneId");
   hostedZoneIdNode.SetText(m_hostedZoneId);
  }

  if(m_cloudWatchLogsLogGroupArnHasBeenSet)
  {
   XmlNode cloudWatchLogsLogGroupArnNode = parentNode.CreateChildElement("CloudWatchLogsLogGroupArn");
   cloudWatchLogsLogGroupArnNode.SetText(m_cloudWatchLogsLogGroupArn);
  }

  return payloadDoc.ConvertToString();
}


