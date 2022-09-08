/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FlowLog.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

FlowLog::FlowLog() : 
    m_creationTimeHasBeenSet(false),
    m_deliverLogsErrorMessageHasBeenSet(false),
    m_deliverLogsPermissionArnHasBeenSet(false),
    m_deliverCrossAccountRoleHasBeenSet(false),
    m_deliverLogsStatusHasBeenSet(false),
    m_flowLogIdHasBeenSet(false),
    m_flowLogStatusHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false),
    m_logDestinationType(LogDestinationType::NOT_SET),
    m_logDestinationTypeHasBeenSet(false),
    m_logDestinationHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_maxAggregationInterval(0),
    m_maxAggregationIntervalHasBeenSet(false),
    m_destinationOptionsHasBeenSet(false)
{
}

FlowLog::FlowLog(const XmlNode& xmlNode) : 
    m_creationTimeHasBeenSet(false),
    m_deliverLogsErrorMessageHasBeenSet(false),
    m_deliverLogsPermissionArnHasBeenSet(false),
    m_deliverCrossAccountRoleHasBeenSet(false),
    m_deliverLogsStatusHasBeenSet(false),
    m_flowLogIdHasBeenSet(false),
    m_flowLogStatusHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false),
    m_logDestinationType(LogDestinationType::NOT_SET),
    m_logDestinationTypeHasBeenSet(false),
    m_logDestinationHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_maxAggregationInterval(0),
    m_maxAggregationIntervalHasBeenSet(false),
    m_destinationOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

FlowLog& FlowLog::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode deliverLogsErrorMessageNode = resultNode.FirstChild("deliverLogsErrorMessage");
    if(!deliverLogsErrorMessageNode.IsNull())
    {
      m_deliverLogsErrorMessage = Aws::Utils::Xml::DecodeEscapedXmlText(deliverLogsErrorMessageNode.GetText());
      m_deliverLogsErrorMessageHasBeenSet = true;
    }
    XmlNode deliverLogsPermissionArnNode = resultNode.FirstChild("deliverLogsPermissionArn");
    if(!deliverLogsPermissionArnNode.IsNull())
    {
      m_deliverLogsPermissionArn = Aws::Utils::Xml::DecodeEscapedXmlText(deliverLogsPermissionArnNode.GetText());
      m_deliverLogsPermissionArnHasBeenSet = true;
    }
    XmlNode deliverCrossAccountRoleNode = resultNode.FirstChild("deliverCrossAccountRole");
    if(!deliverCrossAccountRoleNode.IsNull())
    {
      m_deliverCrossAccountRole = Aws::Utils::Xml::DecodeEscapedXmlText(deliverCrossAccountRoleNode.GetText());
      m_deliverCrossAccountRoleHasBeenSet = true;
    }
    XmlNode deliverLogsStatusNode = resultNode.FirstChild("deliverLogsStatus");
    if(!deliverLogsStatusNode.IsNull())
    {
      m_deliverLogsStatus = Aws::Utils::Xml::DecodeEscapedXmlText(deliverLogsStatusNode.GetText());
      m_deliverLogsStatusHasBeenSet = true;
    }
    XmlNode flowLogIdNode = resultNode.FirstChild("flowLogId");
    if(!flowLogIdNode.IsNull())
    {
      m_flowLogId = Aws::Utils::Xml::DecodeEscapedXmlText(flowLogIdNode.GetText());
      m_flowLogIdHasBeenSet = true;
    }
    XmlNode flowLogStatusNode = resultNode.FirstChild("flowLogStatus");
    if(!flowLogStatusNode.IsNull())
    {
      m_flowLogStatus = Aws::Utils::Xml::DecodeEscapedXmlText(flowLogStatusNode.GetText());
      m_flowLogStatusHasBeenSet = true;
    }
    XmlNode logGroupNameNode = resultNode.FirstChild("logGroupName");
    if(!logGroupNameNode.IsNull())
    {
      m_logGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(logGroupNameNode.GetText());
      m_logGroupNameHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode trafficTypeNode = resultNode.FirstChild("trafficType");
    if(!trafficTypeNode.IsNull())
    {
      m_trafficType = TrafficTypeMapper::GetTrafficTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trafficTypeNode.GetText()).c_str()).c_str());
      m_trafficTypeHasBeenSet = true;
    }
    XmlNode logDestinationTypeNode = resultNode.FirstChild("logDestinationType");
    if(!logDestinationTypeNode.IsNull())
    {
      m_logDestinationType = LogDestinationTypeMapper::GetLogDestinationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(logDestinationTypeNode.GetText()).c_str()).c_str());
      m_logDestinationTypeHasBeenSet = true;
    }
    XmlNode logDestinationNode = resultNode.FirstChild("logDestination");
    if(!logDestinationNode.IsNull())
    {
      m_logDestination = Aws::Utils::Xml::DecodeEscapedXmlText(logDestinationNode.GetText());
      m_logDestinationHasBeenSet = true;
    }
    XmlNode logFormatNode = resultNode.FirstChild("logFormat");
    if(!logFormatNode.IsNull())
    {
      m_logFormat = Aws::Utils::Xml::DecodeEscapedXmlText(logFormatNode.GetText());
      m_logFormatHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode maxAggregationIntervalNode = resultNode.FirstChild("maxAggregationInterval");
    if(!maxAggregationIntervalNode.IsNull())
    {
      m_maxAggregationInterval = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxAggregationIntervalNode.GetText()).c_str()).c_str());
      m_maxAggregationIntervalHasBeenSet = true;
    }
    XmlNode destinationOptionsNode = resultNode.FirstChild("destinationOptions");
    if(!destinationOptionsNode.IsNull())
    {
      m_destinationOptions = destinationOptionsNode;
      m_destinationOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void FlowLog::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deliverLogsErrorMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliverLogsErrorMessage=" << StringUtils::URLEncode(m_deliverLogsErrorMessage.c_str()) << "&";
  }

  if(m_deliverLogsPermissionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliverLogsPermissionArn=" << StringUtils::URLEncode(m_deliverLogsPermissionArn.c_str()) << "&";
  }

  if(m_deliverCrossAccountRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliverCrossAccountRole=" << StringUtils::URLEncode(m_deliverCrossAccountRole.c_str()) << "&";
  }

  if(m_deliverLogsStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliverLogsStatus=" << StringUtils::URLEncode(m_deliverLogsStatus.c_str()) << "&";
  }

  if(m_flowLogIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".FlowLogId=" << StringUtils::URLEncode(m_flowLogId.c_str()) << "&";
  }

  if(m_flowLogStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".FlowLogStatus=" << StringUtils::URLEncode(m_flowLogStatus.c_str()) << "&";
  }

  if(m_logGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogGroupName=" << StringUtils::URLEncode(m_logGroupName.c_str()) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_trafficTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".TrafficType=" << TrafficTypeMapper::GetNameForTrafficType(m_trafficType) << "&";
  }

  if(m_logDestinationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogDestinationType=" << LogDestinationTypeMapper::GetNameForLogDestinationType(m_logDestinationType) << "&";
  }

  if(m_logDestinationHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogDestination=" << StringUtils::URLEncode(m_logDestination.c_str()) << "&";
  }

  if(m_logFormatHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogFormat=" << StringUtils::URLEncode(m_logFormat.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_maxAggregationIntervalHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxAggregationInterval=" << m_maxAggregationInterval << "&";
  }

  if(m_destinationOptionsHasBeenSet)
  {
      Aws::StringStream destinationOptionsLocationAndMemberSs;
      destinationOptionsLocationAndMemberSs << location << index << locationValue << ".DestinationOptions";
      m_destinationOptions.OutputToStream(oStream, destinationOptionsLocationAndMemberSs.str().c_str());
  }

}

void FlowLog::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deliverLogsErrorMessageHasBeenSet)
  {
      oStream << location << ".DeliverLogsErrorMessage=" << StringUtils::URLEncode(m_deliverLogsErrorMessage.c_str()) << "&";
  }
  if(m_deliverLogsPermissionArnHasBeenSet)
  {
      oStream << location << ".DeliverLogsPermissionArn=" << StringUtils::URLEncode(m_deliverLogsPermissionArn.c_str()) << "&";
  }
  if(m_deliverCrossAccountRoleHasBeenSet)
  {
      oStream << location << ".DeliverCrossAccountRole=" << StringUtils::URLEncode(m_deliverCrossAccountRole.c_str()) << "&";
  }
  if(m_deliverLogsStatusHasBeenSet)
  {
      oStream << location << ".DeliverLogsStatus=" << StringUtils::URLEncode(m_deliverLogsStatus.c_str()) << "&";
  }
  if(m_flowLogIdHasBeenSet)
  {
      oStream << location << ".FlowLogId=" << StringUtils::URLEncode(m_flowLogId.c_str()) << "&";
  }
  if(m_flowLogStatusHasBeenSet)
  {
      oStream << location << ".FlowLogStatus=" << StringUtils::URLEncode(m_flowLogStatus.c_str()) << "&";
  }
  if(m_logGroupNameHasBeenSet)
  {
      oStream << location << ".LogGroupName=" << StringUtils::URLEncode(m_logGroupName.c_str()) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_trafficTypeHasBeenSet)
  {
      oStream << location << ".TrafficType=" << TrafficTypeMapper::GetNameForTrafficType(m_trafficType) << "&";
  }
  if(m_logDestinationTypeHasBeenSet)
  {
      oStream << location << ".LogDestinationType=" << LogDestinationTypeMapper::GetNameForLogDestinationType(m_logDestinationType) << "&";
  }
  if(m_logDestinationHasBeenSet)
  {
      oStream << location << ".LogDestination=" << StringUtils::URLEncode(m_logDestination.c_str()) << "&";
  }
  if(m_logFormatHasBeenSet)
  {
      oStream << location << ".LogFormat=" << StringUtils::URLEncode(m_logFormat.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_maxAggregationIntervalHasBeenSet)
  {
      oStream << location << ".MaxAggregationInterval=" << m_maxAggregationInterval << "&";
  }
  if(m_destinationOptionsHasBeenSet)
  {
      Aws::String destinationOptionsLocationAndMember(location);
      destinationOptionsLocationAndMember += ".DestinationOptions";
      m_destinationOptions.OutputToStream(oStream, destinationOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
