/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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


