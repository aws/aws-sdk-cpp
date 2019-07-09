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
    m_clientRequestTokenHasBeenSet(false)
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
    m_clientRequestTokenHasBeenSet(false)
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
      m_stackId = stackIdNode.GetText();
      m_stackIdHasBeenSet = true;
    }
    XmlNode eventIdNode = resultNode.FirstChild("EventId");
    if(!eventIdNode.IsNull())
    {
      m_eventId = eventIdNode.GetText();
      m_eventIdHasBeenSet = true;
    }
    XmlNode stackNameNode = resultNode.FirstChild("StackName");
    if(!stackNameNode.IsNull())
    {
      m_stackName = stackNameNode.GetText();
      m_stackNameHasBeenSet = true;
    }
    XmlNode logicalResourceIdNode = resultNode.FirstChild("LogicalResourceId");
    if(!logicalResourceIdNode.IsNull())
    {
      m_logicalResourceId = logicalResourceIdNode.GetText();
      m_logicalResourceIdHasBeenSet = true;
    }
    XmlNode physicalResourceIdNode = resultNode.FirstChild("PhysicalResourceId");
    if(!physicalResourceIdNode.IsNull())
    {
      m_physicalResourceId = physicalResourceIdNode.GetText();
      m_physicalResourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = resourceTypeNode.GetText();
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(timestampNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode resourceStatusNode = resultNode.FirstChild("ResourceStatus");
    if(!resourceStatusNode.IsNull())
    {
      m_resourceStatus = ResourceStatusMapper::GetResourceStatusForName(StringUtils::Trim(resourceStatusNode.GetText().c_str()).c_str());
      m_resourceStatusHasBeenSet = true;
    }
    XmlNode resourceStatusReasonNode = resultNode.FirstChild("ResourceStatusReason");
    if(!resourceStatusReasonNode.IsNull())
    {
      m_resourceStatusReason = resourceStatusReasonNode.GetText();
      m_resourceStatusReasonHasBeenSet = true;
    }
    XmlNode resourcePropertiesNode = resultNode.FirstChild("ResourceProperties");
    if(!resourcePropertiesNode.IsNull())
    {
      m_resourceProperties = resourcePropertiesNode.GetText();
      m_resourcePropertiesHasBeenSet = true;
    }
    XmlNode clientRequestTokenNode = resultNode.FirstChild("ClientRequestToken");
    if(!clientRequestTokenNode.IsNull())
    {
      m_clientRequestToken = clientRequestTokenNode.GetText();
      m_clientRequestTokenHasBeenSet = true;
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
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
