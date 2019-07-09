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

#include <aws/ec2/model/ImportInstanceLaunchSpecification.h>
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

ImportInstanceLaunchSpecification::ImportInstanceLaunchSpecification() : 
    m_additionalInfoHasBeenSet(false),
    m_architecture(ArchitectureValues::NOT_SET),
    m_architectureHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_groupNamesHasBeenSet(false),
    m_instanceInitiatedShutdownBehavior(ShutdownBehavior::NOT_SET),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_monitoring(false),
    m_monitoringHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
}

ImportInstanceLaunchSpecification::ImportInstanceLaunchSpecification(const XmlNode& xmlNode) : 
    m_additionalInfoHasBeenSet(false),
    m_architecture(ArchitectureValues::NOT_SET),
    m_architectureHasBeenSet(false),
    m_groupIdsHasBeenSet(false),
    m_groupNamesHasBeenSet(false),
    m_instanceInitiatedShutdownBehavior(ShutdownBehavior::NOT_SET),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_monitoring(false),
    m_monitoringHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_userDataHasBeenSet(false)
{
  *this = xmlNode;
}

ImportInstanceLaunchSpecification& ImportInstanceLaunchSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode additionalInfoNode = resultNode.FirstChild("additionalInfo");
    if(!additionalInfoNode.IsNull())
    {
      m_additionalInfo = additionalInfoNode.GetText();
      m_additionalInfoHasBeenSet = true;
    }
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = ArchitectureValuesMapper::GetArchitectureValuesForName(StringUtils::Trim(architectureNode.GetText().c_str()).c_str());
      m_architectureHasBeenSet = true;
    }
    XmlNode groupIdsNode = resultNode.FirstChild("GroupId");
    if(!groupIdsNode.IsNull())
    {
      XmlNode groupIdsMember = groupIdsNode.FirstChild("SecurityGroupId");
      while(!groupIdsMember.IsNull())
      {
        m_groupIds.push_back(groupIdsMember.GetText());
        groupIdsMember = groupIdsMember.NextNode("SecurityGroupId");
      }

      m_groupIdsHasBeenSet = true;
    }
    XmlNode groupNamesNode = resultNode.FirstChild("GroupName");
    if(!groupNamesNode.IsNull())
    {
      XmlNode groupNamesMember = groupNamesNode.FirstChild("SecurityGroup");
      while(!groupNamesMember.IsNull())
      {
        m_groupNames.push_back(groupNamesMember.GetText());
        groupNamesMember = groupNamesMember.NextNode("SecurityGroup");
      }

      m_groupNamesHasBeenSet = true;
    }
    XmlNode instanceInitiatedShutdownBehaviorNode = resultNode.FirstChild("instanceInitiatedShutdownBehavior");
    if(!instanceInitiatedShutdownBehaviorNode.IsNull())
    {
      m_instanceInitiatedShutdownBehavior = ShutdownBehaviorMapper::GetShutdownBehaviorForName(StringUtils::Trim(instanceInitiatedShutdownBehaviorNode.GetText().c_str()).c_str());
      m_instanceInitiatedShutdownBehaviorHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(instanceTypeNode.GetText().c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode monitoringNode = resultNode.FirstChild("monitoring");
    if(!monitoringNode.IsNull())
    {
      m_monitoring = StringUtils::ConvertToBool(StringUtils::Trim(monitoringNode.GetText().c_str()).c_str());
      m_monitoringHasBeenSet = true;
    }
    XmlNode placementNode = resultNode.FirstChild("placement");
    if(!placementNode.IsNull())
    {
      m_placement = placementNode;
      m_placementHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("privateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = privateIpAddressNode.GetText();
      m_privateIpAddressHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = subnetIdNode.GetText();
      m_subnetIdHasBeenSet = true;
    }
    XmlNode userDataNode = resultNode.FirstChild("userData");
    if(!userDataNode.IsNull())
    {
      m_userData = userDataNode;
      m_userDataHasBeenSet = true;
    }
  }

  return *this;
}

void ImportInstanceLaunchSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_additionalInfoHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }

  if(m_architectureHasBeenSet)
  {
      oStream << location << index << locationValue << ".Architecture=" << ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture) << "&";
  }

  if(m_groupIdsHasBeenSet)
  {
      unsigned groupIdsIdx = 1;
      for(auto& item : m_groupIds)
      {
        oStream << location << index << locationValue << ".GroupId." << groupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_groupNamesHasBeenSet)
  {
      unsigned groupNamesIdx = 1;
      for(auto& item : m_groupNames)
      {
        oStream << location << index << locationValue << ".GroupName." << groupNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceInitiatedShutdownBehavior=" << ShutdownBehaviorMapper::GetNameForShutdownBehavior(m_instanceInitiatedShutdownBehavior) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_monitoringHasBeenSet)
  {
      oStream << location << index << locationValue << ".Monitoring=" << std::boolalpha << m_monitoring << "&";
  }

  if(m_placementHasBeenSet)
  {
      Aws::StringStream placementLocationAndMemberSs;
      placementLocationAndMemberSs << location << index << locationValue << ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMemberSs.str().c_str());
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_userDataHasBeenSet)
  {
      Aws::StringStream userDataLocationAndMemberSs;
      userDataLocationAndMemberSs << location << index << locationValue << ".UserData";
      m_userData.OutputToStream(oStream, userDataLocationAndMemberSs.str().c_str());
  }

}

void ImportInstanceLaunchSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_additionalInfoHasBeenSet)
  {
      oStream << location << ".AdditionalInfo=" << StringUtils::URLEncode(m_additionalInfo.c_str()) << "&";
  }
  if(m_architectureHasBeenSet)
  {
      oStream << location << ".Architecture=" << ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture) << "&";
  }
  if(m_groupIdsHasBeenSet)
  {
      unsigned groupIdsIdx = 1;
      for(auto& item : m_groupIds)
      {
        oStream << location << ".GroupId." << groupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_groupNamesHasBeenSet)
  {
      unsigned groupNamesIdx = 1;
      for(auto& item : m_groupNames)
      {
        oStream << location << ".GroupName." << groupNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
      oStream << location << ".InstanceInitiatedShutdownBehavior=" << ShutdownBehaviorMapper::GetNameForShutdownBehavior(m_instanceInitiatedShutdownBehavior) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_monitoringHasBeenSet)
  {
      oStream << location << ".Monitoring=" << std::boolalpha << m_monitoring << "&";
  }
  if(m_placementHasBeenSet)
  {
      Aws::String placementLocationAndMember(location);
      placementLocationAndMember += ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMember.c_str());
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_userDataHasBeenSet)
  {
      Aws::String userDataLocationAndMember(location);
      userDataLocationAndMember += ".UserData";
      m_userData.OutputToStream(oStream, userDataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
