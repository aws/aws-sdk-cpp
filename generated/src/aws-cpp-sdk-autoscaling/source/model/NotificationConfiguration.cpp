/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/NotificationConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

NotificationConfiguration::NotificationConfiguration() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_topicARNHasBeenSet(false),
    m_notificationTypeHasBeenSet(false)
{
}

NotificationConfiguration::NotificationConfiguration(const XmlNode& xmlNode) : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_topicARNHasBeenSet(false),
    m_notificationTypeHasBeenSet(false)
{
  *this = xmlNode;
}

NotificationConfiguration& NotificationConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupNameNode.GetText());
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode topicARNNode = resultNode.FirstChild("TopicARN");
    if(!topicARNNode.IsNull())
    {
      m_topicARN = Aws::Utils::Xml::DecodeEscapedXmlText(topicARNNode.GetText());
      m_topicARNHasBeenSet = true;
    }
    XmlNode notificationTypeNode = resultNode.FirstChild("NotificationType");
    if(!notificationTypeNode.IsNull())
    {
      m_notificationType = Aws::Utils::Xml::DecodeEscapedXmlText(notificationTypeNode.GetText());
      m_notificationTypeHasBeenSet = true;
    }
  }

  return *this;
}

void NotificationConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_topicARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".TopicARN=" << StringUtils::URLEncode(m_topicARN.c_str()) << "&";
  }

  if(m_notificationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotificationType=" << StringUtils::URLEncode(m_notificationType.c_str()) << "&";
  }

}

void NotificationConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_topicARNHasBeenSet)
  {
      oStream << location << ".TopicARN=" << StringUtils::URLEncode(m_topicARN.c_str()) << "&";
  }
  if(m_notificationTypeHasBeenSet)
  {
      oStream << location << ".NotificationType=" << StringUtils::URLEncode(m_notificationType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
