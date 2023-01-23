/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/LifecycleHook.h>
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

LifecycleHook::LifecycleHook() : 
    m_lifecycleHookNameHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_lifecycleTransitionHasBeenSet(false),
    m_notificationTargetARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_notificationMetadataHasBeenSet(false),
    m_heartbeatTimeout(0),
    m_heartbeatTimeoutHasBeenSet(false),
    m_globalTimeout(0),
    m_globalTimeoutHasBeenSet(false),
    m_defaultResultHasBeenSet(false)
{
}

LifecycleHook::LifecycleHook(const XmlNode& xmlNode) : 
    m_lifecycleHookNameHasBeenSet(false),
    m_autoScalingGroupNameHasBeenSet(false),
    m_lifecycleTransitionHasBeenSet(false),
    m_notificationTargetARNHasBeenSet(false),
    m_roleARNHasBeenSet(false),
    m_notificationMetadataHasBeenSet(false),
    m_heartbeatTimeout(0),
    m_heartbeatTimeoutHasBeenSet(false),
    m_globalTimeout(0),
    m_globalTimeoutHasBeenSet(false),
    m_defaultResultHasBeenSet(false)
{
  *this = xmlNode;
}

LifecycleHook& LifecycleHook::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode lifecycleHookNameNode = resultNode.FirstChild("LifecycleHookName");
    if(!lifecycleHookNameNode.IsNull())
    {
      m_lifecycleHookName = Aws::Utils::Xml::DecodeEscapedXmlText(lifecycleHookNameNode.GetText());
      m_lifecycleHookNameHasBeenSet = true;
    }
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupNameNode.GetText());
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode lifecycleTransitionNode = resultNode.FirstChild("LifecycleTransition");
    if(!lifecycleTransitionNode.IsNull())
    {
      m_lifecycleTransition = Aws::Utils::Xml::DecodeEscapedXmlText(lifecycleTransitionNode.GetText());
      m_lifecycleTransitionHasBeenSet = true;
    }
    XmlNode notificationTargetARNNode = resultNode.FirstChild("NotificationTargetARN");
    if(!notificationTargetARNNode.IsNull())
    {
      m_notificationTargetARN = Aws::Utils::Xml::DecodeEscapedXmlText(notificationTargetARNNode.GetText());
      m_notificationTargetARNHasBeenSet = true;
    }
    XmlNode roleARNNode = resultNode.FirstChild("RoleARN");
    if(!roleARNNode.IsNull())
    {
      m_roleARN = Aws::Utils::Xml::DecodeEscapedXmlText(roleARNNode.GetText());
      m_roleARNHasBeenSet = true;
    }
    XmlNode notificationMetadataNode = resultNode.FirstChild("NotificationMetadata");
    if(!notificationMetadataNode.IsNull())
    {
      m_notificationMetadata = Aws::Utils::Xml::DecodeEscapedXmlText(notificationMetadataNode.GetText());
      m_notificationMetadataHasBeenSet = true;
    }
    XmlNode heartbeatTimeoutNode = resultNode.FirstChild("HeartbeatTimeout");
    if(!heartbeatTimeoutNode.IsNull())
    {
      m_heartbeatTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(heartbeatTimeoutNode.GetText()).c_str()).c_str());
      m_heartbeatTimeoutHasBeenSet = true;
    }
    XmlNode globalTimeoutNode = resultNode.FirstChild("GlobalTimeout");
    if(!globalTimeoutNode.IsNull())
    {
      m_globalTimeout = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(globalTimeoutNode.GetText()).c_str()).c_str());
      m_globalTimeoutHasBeenSet = true;
    }
    XmlNode defaultResultNode = resultNode.FirstChild("DefaultResult");
    if(!defaultResultNode.IsNull())
    {
      m_defaultResult = Aws::Utils::Xml::DecodeEscapedXmlText(defaultResultNode.GetText());
      m_defaultResultHasBeenSet = true;
    }
  }

  return *this;
}

void LifecycleHook::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_lifecycleHookNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LifecycleHookName=" << StringUtils::URLEncode(m_lifecycleHookName.c_str()) << "&";
  }

  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_lifecycleTransitionHasBeenSet)
  {
      oStream << location << index << locationValue << ".LifecycleTransition=" << StringUtils::URLEncode(m_lifecycleTransition.c_str()) << "&";
  }

  if(m_notificationTargetARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotificationTargetARN=" << StringUtils::URLEncode(m_notificationTargetARN.c_str()) << "&";
  }

  if(m_roleARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }

  if(m_notificationMetadataHasBeenSet)
  {
      oStream << location << index << locationValue << ".NotificationMetadata=" << StringUtils::URLEncode(m_notificationMetadata.c_str()) << "&";
  }

  if(m_heartbeatTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".HeartbeatTimeout=" << m_heartbeatTimeout << "&";
  }

  if(m_globalTimeoutHasBeenSet)
  {
      oStream << location << index << locationValue << ".GlobalTimeout=" << m_globalTimeout << "&";
  }

  if(m_defaultResultHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultResult=" << StringUtils::URLEncode(m_defaultResult.c_str()) << "&";
  }

}

void LifecycleHook::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_lifecycleHookNameHasBeenSet)
  {
      oStream << location << ".LifecycleHookName=" << StringUtils::URLEncode(m_lifecycleHookName.c_str()) << "&";
  }
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_lifecycleTransitionHasBeenSet)
  {
      oStream << location << ".LifecycleTransition=" << StringUtils::URLEncode(m_lifecycleTransition.c_str()) << "&";
  }
  if(m_notificationTargetARNHasBeenSet)
  {
      oStream << location << ".NotificationTargetARN=" << StringUtils::URLEncode(m_notificationTargetARN.c_str()) << "&";
  }
  if(m_roleARNHasBeenSet)
  {
      oStream << location << ".RoleARN=" << StringUtils::URLEncode(m_roleARN.c_str()) << "&";
  }
  if(m_notificationMetadataHasBeenSet)
  {
      oStream << location << ".NotificationMetadata=" << StringUtils::URLEncode(m_notificationMetadata.c_str()) << "&";
  }
  if(m_heartbeatTimeoutHasBeenSet)
  {
      oStream << location << ".HeartbeatTimeout=" << m_heartbeatTimeout << "&";
  }
  if(m_globalTimeoutHasBeenSet)
  {
      oStream << location << ".GlobalTimeout=" << m_globalTimeout << "&";
  }
  if(m_defaultResultHasBeenSet)
  {
      oStream << location << ".DefaultResult=" << StringUtils::URLEncode(m_defaultResult.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
