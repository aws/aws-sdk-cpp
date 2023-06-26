/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceRequirementsWithMetadataRequest.h>
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

InstanceRequirementsWithMetadataRequest::InstanceRequirementsWithMetadataRequest() : 
    m_architectureTypesHasBeenSet(false),
    m_virtualizationTypesHasBeenSet(false),
    m_instanceRequirementsHasBeenSet(false)
{
}

InstanceRequirementsWithMetadataRequest::InstanceRequirementsWithMetadataRequest(const XmlNode& xmlNode) : 
    m_architectureTypesHasBeenSet(false),
    m_virtualizationTypesHasBeenSet(false),
    m_instanceRequirementsHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceRequirementsWithMetadataRequest& InstanceRequirementsWithMetadataRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode architectureTypesNode = resultNode.FirstChild("ArchitectureType");
    if(!architectureTypesNode.IsNull())
    {
      XmlNode architectureTypesMember = architectureTypesNode.FirstChild("item");
      while(!architectureTypesMember.IsNull())
      {
        m_architectureTypes.push_back(ArchitectureTypeMapper::GetArchitectureTypeForName(StringUtils::Trim(architectureTypesMember.GetText().c_str())));
        architectureTypesMember = architectureTypesMember.NextNode("item");
      }

      m_architectureTypesHasBeenSet = true;
    }
    XmlNode virtualizationTypesNode = resultNode.FirstChild("VirtualizationType");
    if(!virtualizationTypesNode.IsNull())
    {
      XmlNode virtualizationTypesMember = virtualizationTypesNode.FirstChild("item");
      while(!virtualizationTypesMember.IsNull())
      {
        m_virtualizationTypes.push_back(VirtualizationTypeMapper::GetVirtualizationTypeForName(StringUtils::Trim(virtualizationTypesMember.GetText().c_str())));
        virtualizationTypesMember = virtualizationTypesMember.NextNode("item");
      }

      m_virtualizationTypesHasBeenSet = true;
    }
    XmlNode instanceRequirementsNode = resultNode.FirstChild("InstanceRequirements");
    if(!instanceRequirementsNode.IsNull())
    {
      m_instanceRequirements = instanceRequirementsNode;
      m_instanceRequirementsHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceRequirementsWithMetadataRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_architectureTypesHasBeenSet)
  {
      unsigned architectureTypesIdx = 1;
      for(auto& item : m_architectureTypes)
      {
        oStream << location << index << locationValue << ".ArchitectureType." << architectureTypesIdx++ << "=" << ArchitectureTypeMapper::GetNameForArchitectureType(item) << "&";
      }
  }

  if(m_virtualizationTypesHasBeenSet)
  {
      unsigned virtualizationTypesIdx = 1;
      for(auto& item : m_virtualizationTypes)
      {
        oStream << location << index << locationValue << ".VirtualizationType." << virtualizationTypesIdx++ << "=" << VirtualizationTypeMapper::GetNameForVirtualizationType(item) << "&";
      }
  }

  if(m_instanceRequirementsHasBeenSet)
  {
      Aws::StringStream instanceRequirementsLocationAndMemberSs;
      instanceRequirementsLocationAndMemberSs << location << index << locationValue << ".InstanceRequirements";
      m_instanceRequirements.OutputToStream(oStream, instanceRequirementsLocationAndMemberSs.str().c_str());
  }

}

void InstanceRequirementsWithMetadataRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_architectureTypesHasBeenSet)
  {
      unsigned architectureTypesIdx = 1;
      for(auto& item : m_architectureTypes)
      {
        oStream << location << ".ArchitectureType." << architectureTypesIdx++ << "=" << ArchitectureTypeMapper::GetNameForArchitectureType(item) << "&";
      }
  }
  if(m_virtualizationTypesHasBeenSet)
  {
      unsigned virtualizationTypesIdx = 1;
      for(auto& item : m_virtualizationTypes)
      {
        oStream << location << ".VirtualizationType." << virtualizationTypesIdx++ << "=" << VirtualizationTypeMapper::GetNameForVirtualizationType(item) << "&";
      }
  }
  if(m_instanceRequirementsHasBeenSet)
  {
      Aws::String instanceRequirementsLocationAndMember(location);
      instanceRequirementsLocationAndMember += ".InstanceRequirements";
      m_instanceRequirements.OutputToStream(oStream, instanceRequirementsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
