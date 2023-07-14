/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_bounceTopic = Aws::Utils::Xml::DecodeEscapedXmlText(bounceTopicNode.GetText());
      m_bounceTopicHasBeenSet = true;
    }
    XmlNode complaintTopicNode = resultNode.FirstChild("ComplaintTopic");
    if(!complaintTopicNode.IsNull())
    {
      m_complaintTopic = Aws::Utils::Xml::DecodeEscapedXmlText(complaintTopicNode.GetText());
      m_complaintTopicHasBeenSet = true;
    }
    XmlNode deliveryTopicNode = resultNode.FirstChild("DeliveryTopic");
    if(!deliveryTopicNode.IsNull())
    {
      m_deliveryTopic = Aws::Utils::Xml::DecodeEscapedXmlText(deliveryTopicNode.GetText());
      m_deliveryTopicHasBeenSet = true;
    }
    XmlNode forwardingEnabledNode = resultNode.FirstChild("ForwardingEnabled");
    if(!forwardingEnabledNode.IsNull())
    {
      m_forwardingEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(forwardingEnabledNode.GetText()).c_str()).c_str());
      m_forwardingEnabledHasBeenSet = true;
    }
    XmlNode headersInBounceNotificationsEnabledNode = resultNode.FirstChild("HeadersInBounceNotificationsEnabled");
    if(!headersInBounceNotificationsEnabledNode.IsNull())
    {
      m_headersInBounceNotificationsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(headersInBounceNotificationsEnabledNode.GetText()).c_str()).c_str());
      m_headersInBounceNotificationsEnabledHasBeenSet = true;
    }
    XmlNode headersInComplaintNotificationsEnabledNode = resultNode.FirstChild("HeadersInComplaintNotificationsEnabled");
    if(!headersInComplaintNotificationsEnabledNode.IsNull())
    {
      m_headersInComplaintNotificationsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(headersInComplaintNotificationsEnabledNode.GetText()).c_str()).c_str());
      m_headersInComplaintNotificationsEnabledHasBeenSet = true;
    }
    XmlNode headersInDeliveryNotificationsEnabledNode = resultNode.FirstChild("HeadersInDeliveryNotificationsEnabled");
    if(!headersInDeliveryNotificationsEnabledNode.IsNull())
    {
      m_headersInDeliveryNotificationsEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(headersInDeliveryNotificationsEnabledNode.GetText()).c_str()).c_str());
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
