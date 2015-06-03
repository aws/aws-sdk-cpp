/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/email/model/IdentityNotificationAttributes.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SES::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

IdentityNotificationAttributes::IdentityNotificationAttributes() : 
    m_forwardingEnabled(false)
{
}

IdentityNotificationAttributes::IdentityNotificationAttributes(const XmlNode& xmlNode) : 
    m_forwardingEnabled(false)
{
  *this = xmlNode;
}

IdentityNotificationAttributes& IdentityNotificationAttributes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bounceTopicNode = resultNode.FirstChild("BounceTopic");
    m_bounceTopic = StringUtils::Trim(bounceTopicNode.GetText().c_str());
    XmlNode complaintTopicNode = resultNode.FirstChild("ComplaintTopic");
    m_complaintTopic = StringUtils::Trim(complaintTopicNode.GetText().c_str());
    XmlNode deliveryTopicNode = resultNode.FirstChild("DeliveryTopic");
    m_deliveryTopic = StringUtils::Trim(deliveryTopicNode.GetText().c_str());
    XmlNode forwardingEnabledNode = resultNode.FirstChild("ForwardingEnabled");
    m_forwardingEnabled = StringUtils::ConvertToBool(StringUtils::Trim(forwardingEnabledNode.GetText().c_str()).c_str());
  }

  return *this;
}

void IdentityNotificationAttributes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".BounceTopic=" << StringUtils::URLEncode(m_bounceTopic.c_str()) << "&";
  oStream << location << index << locationValue << ".ComplaintTopic=" << StringUtils::URLEncode(m_complaintTopic.c_str()) << "&";
  oStream << location << index << locationValue << ".DeliveryTopic=" << StringUtils::URLEncode(m_deliveryTopic.c_str()) << "&";
  oStream << location << index << locationValue << ".ForwardingEnabled=" << m_forwardingEnabled << "&";
}

void IdentityNotificationAttributes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".BounceTopic=" << StringUtils::URLEncode(m_bounceTopic.c_str()) << "&";
  oStream << location << ".ComplaintTopic=" << StringUtils::URLEncode(m_complaintTopic.c_str()) << "&";
  oStream << location << ".DeliveryTopic=" << StringUtils::URLEncode(m_deliveryTopic.c_str()) << "&";
  oStream << location << ".ForwardingEnabled=" << m_forwardingEnabled << "&";
}
