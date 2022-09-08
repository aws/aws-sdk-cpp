/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackResourceDrift.h>
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

StackResourceDrift::StackResourceDrift() : 
    m_stackIdHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_physicalResourceIdContextHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_expectedPropertiesHasBeenSet(false),
    m_actualPropertiesHasBeenSet(false),
    m_propertyDifferencesHasBeenSet(false),
    m_stackResourceDriftStatus(StackResourceDriftStatus::NOT_SET),
    m_stackResourceDriftStatusHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_moduleInfoHasBeenSet(false)
{
}

StackResourceDrift::StackResourceDrift(const XmlNode& xmlNode) : 
    m_stackIdHasBeenSet(false),
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_physicalResourceIdContextHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_expectedPropertiesHasBeenSet(false),
    m_actualPropertiesHasBeenSet(false),
    m_propertyDifferencesHasBeenSet(false),
    m_stackResourceDriftStatus(StackResourceDriftStatus::NOT_SET),
    m_stackResourceDriftStatusHasBeenSet(false),
    m_timestampHasBeenSet(false),
    m_moduleInfoHasBeenSet(false)
{
  *this = xmlNode;
}

StackResourceDrift& StackResourceDrift::operator =(const XmlNode& xmlNode)
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
    XmlNode physicalResourceIdContextNode = resultNode.FirstChild("PhysicalResourceIdContext");
    if(!physicalResourceIdContextNode.IsNull())
    {
      XmlNode physicalResourceIdContextMember = physicalResourceIdContextNode.FirstChild("member");
      while(!physicalResourceIdContextMember.IsNull())
      {
        m_physicalResourceIdContext.push_back(physicalResourceIdContextMember);
        physicalResourceIdContextMember = physicalResourceIdContextMember.NextNode("member");
      }

      m_physicalResourceIdContextHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode expectedPropertiesNode = resultNode.FirstChild("ExpectedProperties");
    if(!expectedPropertiesNode.IsNull())
    {
      m_expectedProperties = Aws::Utils::Xml::DecodeEscapedXmlText(expectedPropertiesNode.GetText());
      m_expectedPropertiesHasBeenSet = true;
    }
    XmlNode actualPropertiesNode = resultNode.FirstChild("ActualProperties");
    if(!actualPropertiesNode.IsNull())
    {
      m_actualProperties = Aws::Utils::Xml::DecodeEscapedXmlText(actualPropertiesNode.GetText());
      m_actualPropertiesHasBeenSet = true;
    }
    XmlNode propertyDifferencesNode = resultNode.FirstChild("PropertyDifferences");
    if(!propertyDifferencesNode.IsNull())
    {
      XmlNode propertyDifferencesMember = propertyDifferencesNode.FirstChild("member");
      while(!propertyDifferencesMember.IsNull())
      {
        m_propertyDifferences.push_back(propertyDifferencesMember);
        propertyDifferencesMember = propertyDifferencesMember.NextNode("member");
      }

      m_propertyDifferencesHasBeenSet = true;
    }
    XmlNode stackResourceDriftStatusNode = resultNode.FirstChild("StackResourceDriftStatus");
    if(!stackResourceDriftStatusNode.IsNull())
    {
      m_stackResourceDriftStatus = StackResourceDriftStatusMapper::GetStackResourceDriftStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stackResourceDriftStatusNode.GetText()).c_str()).c_str());
      m_stackResourceDriftStatusHasBeenSet = true;
    }
    XmlNode timestampNode = resultNode.FirstChild("Timestamp");
    if(!timestampNode.IsNull())
    {
      m_timestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_timestampHasBeenSet = true;
    }
    XmlNode moduleInfoNode = resultNode.FirstChild("ModuleInfo");
    if(!moduleInfoNode.IsNull())
    {
      m_moduleInfo = moduleInfoNode;
      m_moduleInfoHasBeenSet = true;
    }
  }

  return *this;
}

void StackResourceDrift::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }

  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }

  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }

  if(m_physicalResourceIdContextHasBeenSet)
  {
      unsigned physicalResourceIdContextIdx = 1;
      for(auto& item : m_physicalResourceIdContext)
      {
        Aws::StringStream physicalResourceIdContextSs;
        physicalResourceIdContextSs << location << index << locationValue << ".PhysicalResourceIdContext.member." << physicalResourceIdContextIdx++;
        item.OutputToStream(oStream, physicalResourceIdContextSs.str().c_str());
      }
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

  if(m_expectedPropertiesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExpectedProperties=" << StringUtils::URLEncode(m_expectedProperties.c_str()) << "&";
  }

  if(m_actualPropertiesHasBeenSet)
  {
      oStream << location << index << locationValue << ".ActualProperties=" << StringUtils::URLEncode(m_actualProperties.c_str()) << "&";
  }

  if(m_propertyDifferencesHasBeenSet)
  {
      unsigned propertyDifferencesIdx = 1;
      for(auto& item : m_propertyDifferences)
      {
        Aws::StringStream propertyDifferencesSs;
        propertyDifferencesSs << location << index << locationValue << ".PropertyDifferences.member." << propertyDifferencesIdx++;
        item.OutputToStream(oStream, propertyDifferencesSs.str().c_str());
      }
  }

  if(m_stackResourceDriftStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".StackResourceDriftStatus=" << StackResourceDriftStatusMapper::GetNameForStackResourceDriftStatus(m_stackResourceDriftStatus) << "&";
  }

  if(m_timestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_moduleInfoHasBeenSet)
  {
      Aws::StringStream moduleInfoLocationAndMemberSs;
      moduleInfoLocationAndMemberSs << location << index << locationValue << ".ModuleInfo";
      m_moduleInfo.OutputToStream(oStream, moduleInfoLocationAndMemberSs.str().c_str());
  }

}

void StackResourceDrift::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_stackIdHasBeenSet)
  {
      oStream << location << ".StackId=" << StringUtils::URLEncode(m_stackId.c_str()) << "&";
  }
  if(m_logicalResourceIdHasBeenSet)
  {
      oStream << location << ".LogicalResourceId=" << StringUtils::URLEncode(m_logicalResourceId.c_str()) << "&";
  }
  if(m_physicalResourceIdHasBeenSet)
  {
      oStream << location << ".PhysicalResourceId=" << StringUtils::URLEncode(m_physicalResourceId.c_str()) << "&";
  }
  if(m_physicalResourceIdContextHasBeenSet)
  {
      unsigned physicalResourceIdContextIdx = 1;
      for(auto& item : m_physicalResourceIdContext)
      {
        Aws::StringStream physicalResourceIdContextSs;
        physicalResourceIdContextSs << location <<  ".PhysicalResourceIdContext.member." << physicalResourceIdContextIdx++;
        item.OutputToStream(oStream, physicalResourceIdContextSs.str().c_str());
      }
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
  if(m_expectedPropertiesHasBeenSet)
  {
      oStream << location << ".ExpectedProperties=" << StringUtils::URLEncode(m_expectedProperties.c_str()) << "&";
  }
  if(m_actualPropertiesHasBeenSet)
  {
      oStream << location << ".ActualProperties=" << StringUtils::URLEncode(m_actualProperties.c_str()) << "&";
  }
  if(m_propertyDifferencesHasBeenSet)
  {
      unsigned propertyDifferencesIdx = 1;
      for(auto& item : m_propertyDifferences)
      {
        Aws::StringStream propertyDifferencesSs;
        propertyDifferencesSs << location <<  ".PropertyDifferences.member." << propertyDifferencesIdx++;
        item.OutputToStream(oStream, propertyDifferencesSs.str().c_str());
      }
  }
  if(m_stackResourceDriftStatusHasBeenSet)
  {
      oStream << location << ".StackResourceDriftStatus=" << StackResourceDriftStatusMapper::GetNameForStackResourceDriftStatus(m_stackResourceDriftStatus) << "&";
  }
  if(m_timestampHasBeenSet)
  {
      oStream << location << ".Timestamp=" << StringUtils::URLEncode(m_timestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_moduleInfoHasBeenSet)
  {
      Aws::String moduleInfoLocationAndMember(location);
      moduleInfoLocationAndMember += ".ModuleInfo";
      m_moduleInfo.OutputToStream(oStream, moduleInfoLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
