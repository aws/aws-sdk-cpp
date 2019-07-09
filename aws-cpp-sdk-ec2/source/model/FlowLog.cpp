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
    m_deliverLogsStatusHasBeenSet(false),
    m_flowLogIdHasBeenSet(false),
    m_flowLogStatusHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false),
    m_logDestinationType(LogDestinationType::NOT_SET),
    m_logDestinationTypeHasBeenSet(false),
    m_logDestinationHasBeenSet(false)
{
}

FlowLog::FlowLog(const XmlNode& xmlNode) : 
    m_creationTimeHasBeenSet(false),
    m_deliverLogsErrorMessageHasBeenSet(false),
    m_deliverLogsPermissionArnHasBeenSet(false),
    m_deliverLogsStatusHasBeenSet(false),
    m_flowLogIdHasBeenSet(false),
    m_flowLogStatusHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false),
    m_logDestinationType(LogDestinationType::NOT_SET),
    m_logDestinationTypeHasBeenSet(false),
    m_logDestinationHasBeenSet(false)
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
      m_creationTime = DateTime(StringUtils::Trim(creationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
    }
    XmlNode deliverLogsErrorMessageNode = resultNode.FirstChild("deliverLogsErrorMessage");
    if(!deliverLogsErrorMessageNode.IsNull())
    {
      m_deliverLogsErrorMessage = deliverLogsErrorMessageNode.GetText();
      m_deliverLogsErrorMessageHasBeenSet = true;
    }
    XmlNode deliverLogsPermissionArnNode = resultNode.FirstChild("deliverLogsPermissionArn");
    if(!deliverLogsPermissionArnNode.IsNull())
    {
      m_deliverLogsPermissionArn = deliverLogsPermissionArnNode.GetText();
      m_deliverLogsPermissionArnHasBeenSet = true;
    }
    XmlNode deliverLogsStatusNode = resultNode.FirstChild("deliverLogsStatus");
    if(!deliverLogsStatusNode.IsNull())
    {
      m_deliverLogsStatus = deliverLogsStatusNode.GetText();
      m_deliverLogsStatusHasBeenSet = true;
    }
    XmlNode flowLogIdNode = resultNode.FirstChild("flowLogId");
    if(!flowLogIdNode.IsNull())
    {
      m_flowLogId = flowLogIdNode.GetText();
      m_flowLogIdHasBeenSet = true;
    }
    XmlNode flowLogStatusNode = resultNode.FirstChild("flowLogStatus");
    if(!flowLogStatusNode.IsNull())
    {
      m_flowLogStatus = flowLogStatusNode.GetText();
      m_flowLogStatusHasBeenSet = true;
    }
    XmlNode logGroupNameNode = resultNode.FirstChild("logGroupName");
    if(!logGroupNameNode.IsNull())
    {
      m_logGroupName = logGroupNameNode.GetText();
      m_logGroupNameHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = resourceIdNode.GetText();
      m_resourceIdHasBeenSet = true;
    }
    XmlNode trafficTypeNode = resultNode.FirstChild("trafficType");
    if(!trafficTypeNode.IsNull())
    {
      m_trafficType = TrafficTypeMapper::GetTrafficTypeForName(StringUtils::Trim(trafficTypeNode.GetText().c_str()).c_str());
      m_trafficTypeHasBeenSet = true;
    }
    XmlNode logDestinationTypeNode = resultNode.FirstChild("logDestinationType");
    if(!logDestinationTypeNode.IsNull())
    {
      m_logDestinationType = LogDestinationTypeMapper::GetLogDestinationTypeForName(StringUtils::Trim(logDestinationTypeNode.GetText().c_str()).c_str());
      m_logDestinationTypeHasBeenSet = true;
    }
    XmlNode logDestinationNode = resultNode.FirstChild("logDestination");
    if(!logDestinationNode.IsNull())
    {
      m_logDestination = logDestinationNode.GetText();
      m_logDestinationHasBeenSet = true;
    }
  }

  return *this;
}

void FlowLog::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deliverLogsErrorMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliverLogsErrorMessage=" << StringUtils::URLEncode(m_deliverLogsErrorMessage.c_str()) << "&";
  }

  if(m_deliverLogsPermissionArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".DeliverLogsPermissionArn=" << StringUtils::URLEncode(m_deliverLogsPermissionArn.c_str()) << "&";
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

}

void FlowLog::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_deliverLogsErrorMessageHasBeenSet)
  {
      oStream << location << ".DeliverLogsErrorMessage=" << StringUtils::URLEncode(m_deliverLogsErrorMessage.c_str()) << "&";
  }
  if(m_deliverLogsPermissionArnHasBeenSet)
  {
      oStream << location << ".DeliverLogsPermissionArn=" << StringUtils::URLEncode(m_deliverLogsPermissionArn.c_str()) << "&";
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
