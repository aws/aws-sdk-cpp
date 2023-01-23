/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/StackResourceSummary.h>
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

StackResourceSummary::StackResourceSummary() : 
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_resourceStatus(ResourceStatus::NOT_SET),
    m_resourceStatusHasBeenSet(false),
    m_resourceStatusReasonHasBeenSet(false),
    m_driftInformationHasBeenSet(false),
    m_moduleInfoHasBeenSet(false)
{
}

StackResourceSummary::StackResourceSummary(const XmlNode& xmlNode) : 
    m_logicalResourceIdHasBeenSet(false),
    m_physicalResourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_lastUpdatedTimestampHasBeenSet(false),
    m_resourceStatus(ResourceStatus::NOT_SET),
    m_resourceStatusHasBeenSet(false),
    m_resourceStatusReasonHasBeenSet(false),
    m_driftInformationHasBeenSet(false),
    m_moduleInfoHasBeenSet(false)
{
  *this = xmlNode;
}

StackResourceSummary& StackResourceSummary::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
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
    XmlNode lastUpdatedTimestampNode = resultNode.FirstChild("LastUpdatedTimestamp");
    if(!lastUpdatedTimestampNode.IsNull())
    {
      m_lastUpdatedTimestamp = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdatedTimestampNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdatedTimestampHasBeenSet = true;
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
    XmlNode driftInformationNode = resultNode.FirstChild("DriftInformation");
    if(!driftInformationNode.IsNull())
    {
      m_driftInformation = driftInformationNode;
      m_driftInformationHasBeenSet = true;
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

void StackResourceSummary::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
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

  if(m_lastUpdatedTimestampHasBeenSet)
  {
      oStream << location << index << locationValue << ".LastUpdatedTimestamp=" << StringUtils::URLEncode(m_lastUpdatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_resourceStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceStatus=" << ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus) << "&";
  }

  if(m_resourceStatusReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }

  if(m_driftInformationHasBeenSet)
  {
      Aws::StringStream driftInformationLocationAndMemberSs;
      driftInformationLocationAndMemberSs << location << index << locationValue << ".DriftInformation";
      m_driftInformation.OutputToStream(oStream, driftInformationLocationAndMemberSs.str().c_str());
  }

  if(m_moduleInfoHasBeenSet)
  {
      Aws::StringStream moduleInfoLocationAndMemberSs;
      moduleInfoLocationAndMemberSs << location << index << locationValue << ".ModuleInfo";
      m_moduleInfo.OutputToStream(oStream, moduleInfoLocationAndMemberSs.str().c_str());
  }

}

void StackResourceSummary::OutputToStream(Aws::OStream& oStream, const char* location) const
{
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
  if(m_lastUpdatedTimestampHasBeenSet)
  {
      oStream << location << ".LastUpdatedTimestamp=" << StringUtils::URLEncode(m_lastUpdatedTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_resourceStatusHasBeenSet)
  {
      oStream << location << ".ResourceStatus=" << ResourceStatusMapper::GetNameForResourceStatus(m_resourceStatus) << "&";
  }
  if(m_resourceStatusReasonHasBeenSet)
  {
      oStream << location << ".ResourceStatusReason=" << StringUtils::URLEncode(m_resourceStatusReason.c_str()) << "&";
  }
  if(m_driftInformationHasBeenSet)
  {
      Aws::String driftInformationLocationAndMember(location);
      driftInformationLocationAndMember += ".DriftInformation";
      m_driftInformation.OutputToStream(oStream, driftInformationLocationAndMember.c_str());
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
