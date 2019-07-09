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
      m_autoScalingGroupName = autoScalingGroupNameNode.GetText();
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode topicARNNode = resultNode.FirstChild("TopicARN");
    if(!topicARNNode.IsNull())
    {
      m_topicARN = topicARNNode.GetText();
      m_topicARNHasBeenSet = true;
    }
    XmlNode notificationTypeNode = resultNode.FirstChild("NotificationType");
    if(!notificationTypeNode.IsNull())
    {
      m_notificationType = notificationTypeNode.GetText();
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
