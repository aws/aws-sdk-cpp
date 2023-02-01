/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackEvent.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFormation
{
namespace Model
{

StackEvent::StackEvent() : 
    m_stackIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_resourceStatus(ResourceStatus::NOT_SET),
    m_resourceStatusHasBeenSet(false),
    m_resourceStatusReasonHasBeenSet(false),
    m_resourcePropertiesHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_hookTypeHasBeenSet(false),
    m_hookStatus(HookStatus::NOT_SET),
    m_hookStatusHasBeenSet(false),
    m_hookStatusReasonHasBeenSet(false),
    m_hookInvocationPoint(HookInvocationPoint::NOT_SET),
    m_hookInvocationPointHasBeenSet(false),
    m_hookFailureMode(HookFailureMode::NOT_SET),
    m_hookFailureModeHasBeenSet(false)
{
}

StackEvent::StackEvent(const XmlNode& xmlNode) : 
    m_stackIdHasBeenSet(false),
    m_eventIdHasBeenSet(false),
    m_stackNameHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_resourceStatus(ResourceStatus::NOT_SET),
    m_resourceStatusHasBeenSet(false),
    m_resourceStatusReasonHasBeenSet(false),
    m_resourcePropertiesHasBeenSet(false),
    m_clientRequestTokenHasBeenSet(false),
    m_hookTypeHasBeenSet(false),
    m_hookStatus(HookStatus::NOT_SET),
    m_hookStatusHasBeenSet(false),
    m_hookStatusReasonHasBeenSet(false),
    m_hookInvocationPoint(HookInvocationPoint::NOT_SET),
    m_hookInvocationPointHasBeenSet(false),
    m_hookFailureMode(HookFailureMode::NOT_SET),
    m_hookFailureModeHasBeenSet(false)
{
  *this = xmlNode;
}

StackEvent& StackEvent::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode stackIdNode = resultNode.FirstChild("StackId");
    if(!stackIdNode.IsNull())
    {
      m_stackId = Aws::Utils::Xml::DecodeEscapedXmlText(stackIdNode.GetText());
      m_stackIdHasBeenSet = true;
    }
    XmlNode eventIdNode = resultNode.FirstChild("EventId");
    if(!eventIdNode.IsNull())
    {
      m_eventId = Aws::Utils::Xml::DecodeEscapedXmlText(eventIdNode.GetText());
      m_eventIdHasBeenSet = true;
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = Aws::Utils::Xml::DecodeEscapedXmlText(stackNameNode.GetText());
      m_stackNameHasBeenSet = true;
    }
    XmlNode logicalResourceIdNode = resultNode.FirstChild("LogicalResourceId");
    if(!logicalResourceIdNode.IsNull())
    {
      m_logicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(logicalResourceIdNode.GetText());
      m_logicalResourceIdHasBeenSet = true;
    }
    XmlNode physicalResourceIdNode = resultNode.FirstChild("PhysicalResourceId");
    if(!physicalResourceIdNode.IsNull())
    {
      m_physicalResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(physicalResourceIdNode.GetText());
      m_physicalResourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode resourceStatusNode = resultNode.FirstChild("ResourceStatus");
    if(!resourceStatusNode.IsNull())
    {
      m_resourceStatus = ResourceStatusMapper::GetResourceStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceStatusNode.GetText()).c_str()).c_str());
      m_resourceStatusHasBeenSet = true;
    }
    XmlNode resourceStatusReasonNode = resultNode.FirstChild("ResourceStatusReason");
    if(!resourceStatusReasonNode.IsNull())
    {
      m_resourceStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(resourceStatusReasonNode.GetText());
      m_resourceStatusReasonHasBeenSet = true;
    }
    XmlNode resourcePropertiesNode = resultNode.FirstChild("ResourceProperties");
    if(!resourcePropertiesNode.IsNull())
    {
      m_resourceProperties = Aws::Utils::Xml::DecodeEscapedXmlText(resourcePropertiesNode.GetText());
      m_resourcePropertiesHasBeenSet = true;
    }
    XmlNode clientRequestTokenNode = resultNode.FirstChild("ClientRequestToken");
    if(!clientRequestTokenNode.IsNull())
    {
      m_clientRequestToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientRequestTokenNode.GetText());
      m_clientRequestTokenHasBeenSet = true;
    }
    XmlNode hookTypeNode = resultNode.FirstChild("HookType");
    if(!hookTypeNode.IsNull())
    {
      m_hookType = Aws::Utils::Xml::DecodeEscapedXmlText(hookTypeNode.GetText());
      m_hookTypeHasBeenSet = true;
    }
    XmlNode hookStatusNode = resultNode.FirstChild("HookStatus");
    if(!hookStatusNode.IsNull())
    {
      m_hookStatus = HookStatusMapper::GetHookStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hookStatusNode.GetText()).c_str()).c_str());
      m_hookStatusHasBeenSet = true;
    }
    XmlNode hookStatusReasonNode = resultNode.FirstChild("HookStatusReason");
    if(!hookStatusReasonNode.IsNull())
    {
      m_hookStatusReason = Aws::Utils::Xml::DecodeEscapedXmlText(hookStatusReasonNode.GetText());
      m_hookStatusReasonHasBeenSet = true;
    }
    XmlNode hookInvocationPointNode = resultNode.FirstChild("HookInvocationPoint");
    if(!hookInvocationPointNode.IsNull())
    {
      m_hookInvocationPoint = HookInvocationPointMapper::GetHookInvocationPointForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hookInvocationPointNode.GetText()).c_str()).c_str());
      m_hookInvocationPointHasBeenSet = true;
    }
    XmlNode hookFailureModeNode = resultNode.FirstChild("HookFailureMode");
    if(!hookFailureModeNode.IsNull())
    {
      m_hookFailureMode = HookFailureModeMapper::GetHookFailureModeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hookFailureModeNode.GetText()).c_str()).c_str());
      m_hookFailureModeHasBeenSet = true;
    }
  }

  return *this;
}

void StackEvent::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }

  if(m_eventIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }

  if(m_stackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_resourceStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceStatus=" << ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus) << "&";
  }

  if(m_resourceStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }

  if(m_resourcePropertiesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceProperties=" << StringUtils::URLEncode(m_resourceProperties.c_str()) << "&";
  }

  if(m_clientRequestTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }

  if(m_hookTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookType=" << StringUtils::URLEncode(m_hookType.c_str()) << "&";
  }

  if(m_hookStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookStatus=" << HookStatusMapper::GetNameForHookStatus(m_hookStatus) << "&";
  }

  if(m_hookStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookStatusReason=" << StringUtils::URLEncode(m_hookStatusReason.c_str()) << "&";
  }

  if(m_hookInvocationPointHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookInvocationPoint=" << HookInvocationPointMapper::GetNameForHookInvocationPoint(m_hookInvocationPoint) << "&";
  }

  if(m_hookFailureModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HookFailureMode=" << HookFailureModeMapper::GetNameForHookFailureMode(m_hookFailureMode) << "&";
  }

}

void StackEvent::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }
  if(m_eventIdHasBeenSet)
  {
      oStream << location << ".EventId=" << StringUtils::URLEncode(m_eventId.c_str()) << "&";
  }
  if(m_stackNameHasBeenSet)
  {
      oStream << location << ".StackName=" << StringUtils::URLEncode(m_stackName.c_str()) << "&";
  }
  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }
  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_resourceStatusHasBeenSet)
  {
      oStream << location << ".ResourceStatus=" << ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus) << "&";
  }
  if(m_resourceStatusReasonHasBeenSet)
  {
      oStream << location << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }
  if(m_resourcePropertiesHasBeenSet)
  {
      oStream << location << ".ResourceProperties=" << StringUtils::URLEncode(m_resourceProperties.c_str()) << "&";
  }
  if(m_clientRequestTokenHasBeenSet)
  {
      oStream << location << ".ClientRequestToken=" << StringUtils::URLEncode(m_clientRequestToken.c_str()) << "&";
  }
  if(m_hookTypeHasBeenSet)
  {
      oStream << location << ".HookType=" << StringUtils::URLEncode(m_hookType.c_str()) << "&";
  }
  if(m_hookStatusHasBeenSet)
  {
      oStream << location << ".HookStatus=" << HookStatusMapper::GetNameForHookStatus(m_hookStatus) << "&";
  }
  if(m_hookStatusReasonHasBeenSet)
  {
      oStream << location << ".HookStatusReason=" << StringUtils::URLEncode(m_hookStatusReason.c_str()) << "&";
  }
  if(m_hookInvocationPointHasBeenSet)
  {
      oStream << location << ".HookInvocationPoint=" << HookInvocationPointMapper::GetNameForHookInvocationPoint(m_hookInvocationPoint) << "&";
  }
  if(m_hookFailureModeHasBeenSet)
  {
      oStream << location << ".HookFailureMode=" << HookFailureModeMapper::GetNameForHookFailureMode(m_hookFailureMode) << "&";
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
