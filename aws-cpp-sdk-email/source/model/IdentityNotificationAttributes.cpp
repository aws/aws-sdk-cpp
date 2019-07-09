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

#include <aws/email/model/IdentityNotificationAttributes.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

IdentityNotificationAttributes::IdentityNotificationAttributes() : 
    m_bounceTopicHasBeenSet(false),
    m_complaintTopicHasBeenSet(false),
    m_deliveryTopicHasBeenSet(false),
    m_forwardingEnabled(false),
    m_forwardingEnabledHasBeenSet(false),
    m_headersInBounceNotificationsEnabled(false),
    m_headersInBounceNotificationsEnabledHasBeenSet(false),
    m_headersInComplaintNotificationsEnabled(false),
    m_headersInComplaintNotificationsEnabledHasBeenSet(false),
    m_headersInDeliveryNotificationsEnabled(false),
    m_headersInDeliveryNotificationsEnabledHasBeenSet(false)
{
}

IdentityNotificationAttributes::IdentityNotificationAttributes(const XmlNode& xmlNode) : 
    m_bounceTopicHasBeenSet(false),
    m_complaintTopicHasBeenSet(false),
    m_deliveryTopicHasBeenSet(false),
    m_forwardingEnabled(false),
    m_forwardingEnabledHasBeenSet(false),
    m_headersInBounceNotificationsEnabled(false),
    m_headersInBounceNotificationsEnabledHasBeenSet(false),
    m_headersInComplaintNotificationsEnabled(false),
    m_headersInComplaintNotificationsEnabledHasBeenSet(false),
    m_headersInDeliveryNotificationsEnabled(false),
    m_headersInDeliveryNotificationsEnabledHasBeenSet(false)
{
  *this = xmlNode;
}

IdentityNotificationAttributes& IdentityNotificationAttributes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bounceTopicNode = resultNode.FirstChild("BounceTopic");
    if(!bounceTopicNode.IsNull())
    {
      m_bounceTopic = bounceTopicNode.GetText();
      m_bounceTopicHasBeenSet = true;
    }
    XmlNode complaintTopicNode = resultNode.FirstChild("ComplaintTopic");
    if(!complaintTopicNode.IsNull())
    {
      m_complaintTopic = complaintTopicNode.GetText();
      m_complaintTopicHasBeenSet = true;
    }
    XmlNode deliveryTopicNode = resultNode.FirstChild("DeliveryTopic");
    if(!deliveryTopicNode.IsNull())
    {
      m_deliveryTopic = deliveryTopicNode.GetText();
      m_deliveryTopicHasBeenSet = true;
    }
    XmlNode forwardingEnabledNode = resultNode.FirstChild("ForwardingEnabled");
    if(!forwardingEnabledNode.IsNull())
    {
      m_forwardingEnabled = StringUtils::ConvertToBool(StringUtils::Trim(forwardingEnabledNode.GetText().c_str()).c_str());
      m_forwardingEnabledHasBeenSet = true;
    }
    XmlNode headersInBounceNotificationsEnabledNode = resultNode.FirstChild("HeadersInBounceNotificationsEnabled");
    if(!headersInBounceNotificationsEnabledNode.IsNull())
    {
      m_headersInBounceNotificationsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(headersInBounceNotificationsEnabledNode.GetText().c_str()).c_str());
      m_headersInBounceNotificationsEnabledHasBeenSet = true;
    }
    XmlNode headersInComplaintNotificationsEnabledNode = resultNode.FirstChild("HeadersInComplaintNotificationsEnabled");
    if(!headersInComplaintNotificationsEnabledNode.IsNull())
    {
      m_headersInComplaintNotificationsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(headersInComplaintNotificationsEnabledNode.GetText().c_str()).c_str());
      m_headersInComplaintNotificationsEnabledHasBeenSet = true;
    }
    XmlNode headersInDeliveryNotificationsEnabledNode = resultNode.FirstChild("HeadersInDeliveryNotificationsEnabled");
    if(!headersInDeliveryNotificationsEnabledNode.IsNull())
    {
      m_headersInDeliveryNotificationsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(headersInDeliveryNotificationsEnabledNode.GetText().c_str()).c_str());
      m_headersInDeliveryNotificationsEnabledHasBeenSet = true;
    }
  }

  return *this;
}

void IdentityNotificationAttributes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_bounceTopicHasBeenSet)
  {
      oStream << location << index << locationValue << ".BounceTopic=" << StringUtils::URLEncode(m_bounceTopic.c_str()) << "&";
  }

  if(m_complaintTopicHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComplaintTopic=" << StringUtils::URLEncode(m_complaintTopic.c_str()) << "&";
  }

  if(m_deliveryTopicHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliveryTopic=" << StringUtils::URLEncode(m_deliveryTopic.c_str()) << "&";
  }

  if(m_forwardingEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ForwardingEnabled=" << std::boolalpha << m_forwardingEnabled << "&";
  }

  if(m_headersInBounceNotificationsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".HeadersInBounceNotificationsEnabled=" << std::boolalpha << m_headersInBounceNotificationsEnabled << "&";
  }

  if(m_headersInComplaintNotificationsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".HeadersInComplaintNotificationsEnabled=" << std::boolalpha << m_headersInComplaintNotificationsEnabled << "&";
  }

  if(m_headersInDeliveryNotificationsEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".HeadersInDeliveryNotificationsEnabled=" << std::boolalpha << m_headersInDeliveryNotificationsEnabled << "&";
  }

}

void IdentityNotificationAttributes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_bounceTopicHasBeenSet)
  {
      oStream << location << ".BounceTopic=" << StringUtils::URLEncode(m_bounceTopic.c_str()) << "&";
  }
  if(m_complaintTopicHasBeenSet)
  {
      oStream << location << ".ComplaintTopic=" << StringUtils::URLEncode(m_complaintTopic.c_str()) << "&";
  }
  if(m_deliveryTopicHasBeenSet)
  {
      oStream << location << ".DeliveryTopic=" << StringUtils::URLEncode(m_deliveryTopic.c_str()) << "&";
  }
  if(m_forwardingEnabledHasBeenSet)
  {
      oStream << location << ".ForwardingEnabled=" << std::boolalpha << m_forwardingEnabled << "&";
  }
  if(m_headersInBounceNotificationsEnabledHasBeenSet)
  {
      oStream << location << ".HeadersInBounceNotificationsEnabled=" << std::boolalpha << m_headersInBounceNotificationsEnabled << "&";
  }
  if(m_headersInComplaintNotificationsEnabledHasBeenSet)
  {
      oStream << location << ".HeadersInComplaintNotificationsEnabled=" << std::boolalpha << m_headersInComplaintNotificationsEnabled << "&";
  }
  if(m_headersInDeliveryNotificationsEnabledHasBeenSet)
  {
      oStream << location << ".HeadersInDeliveryNotificationsEnabled=" << std::boolalpha << m_headersInDeliveryNotificationsEnabled << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
