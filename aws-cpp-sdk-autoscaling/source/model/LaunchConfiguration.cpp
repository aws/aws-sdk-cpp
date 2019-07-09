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

#include <aws/autoscaling/model/LaunchConfiguration.h>
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

LaunchConfiguration::LaunchConfiguration() : 
    m_launchConfigurationNameHasBeenSet(false),
    m_launchConfigurationARNHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_classicLinkVPCIdHasBeenSet(false),
    m_classicLinkVPCSecurityGroupsHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_instanceMonitoringHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_placementTenancyHasBeenSet(false)
{
}

LaunchConfiguration::LaunchConfiguration(const XmlNode& xmlNode) : 
    m_launchConfigurationNameHasBeenSet(false),
    m_launchConfigurationARNHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_classicLinkVPCIdHasBeenSet(false),
    m_classicLinkVPCSecurityGroupsHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_instanceMonitoringHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_associatePublicIpAddress(false),
    m_associatePublicIpAddressHasBeenSet(false),
    m_placementTenancyHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchConfiguration& LaunchConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode launchConfigurationNameNode = resultNode.FirstChild("LaunchConfigurationName");
    if(!launchConfigurationNameNode.IsNull())
    {
      m_launchConfigurationName = launchConfigurationNameNode.GetText();
      m_launchConfigurationNameHasBeenSet = true;
    }
    XmlNode launchConfigurationARNNode = resultNode.FirstChild("LaunchConfigurationARN");
    if(!launchConfigurationARNNode.IsNull())
    {
      m_launchConfigurationARN = launchConfigurationARNNode.GetText();
      m_launchConfigurationARNHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("ImageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = imageIdNode.GetText();
      m_imageIdHasBeenSet = true;
    }
    XmlNode keyNameNode = resultNode.FirstChild("KeyName");
    if(!keyNameNode.IsNull())
    {
      m_keyName = keyNameNode.GetText();
      m_keyNameHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("SecurityGroups");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("member");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember.GetText());
        securityGroupsMember = securityGroupsMember.NextNode("member");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode classicLinkVPCIdNode = resultNode.FirstChild("ClassicLinkVPCId");
    if(!classicLinkVPCIdNode.IsNull())
    {
      m_classicLinkVPCId = classicLinkVPCIdNode.GetText();
      m_classicLinkVPCIdHasBeenSet = true;
    }
    XmlNode classicLinkVPCSecurityGroupsNode = resultNode.FirstChild("ClassicLinkVPCSecurityGroups");
    if(!classicLinkVPCSecurityGroupsNode.IsNull())
    {
      XmlNode classicLinkVPCSecurityGroupsMember = classicLinkVPCSecurityGroupsNode.FirstChild("member");
      while(!classicLinkVPCSecurityGroupsMember.IsNull())
      {
        m_classicLinkVPCSecurityGroups.push_back(classicLinkVPCSecurityGroupsMember.GetText());
        classicLinkVPCSecurityGroupsMember = classicLinkVPCSecurityGroupsMember.NextNode("member");
      }

      m_classicLinkVPCSecurityGroupsHasBeenSet = true;
    }
    XmlNode userDataNode = resultNode.FirstChild("UserData");
    if(!userDataNode.IsNull())
    {
      m_userData = userDataNode.GetText();
      m_userDataHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = instanceTypeNode.GetText();
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode kernelIdNode = resultNode.FirstChild("KernelId");
    if(!kernelIdNode.IsNull())
    {
      m_kernelId = kernelIdNode.GetText();
      m_kernelIdHasBeenSet = true;
    }
    XmlNode ramdiskIdNode = resultNode.FirstChild("RamdiskId");
    if(!ramdiskIdNode.IsNull())
    {
      m_ramdiskId = ramdiskIdNode.GetText();
      m_ramdiskIdHasBeenSet = true;
    }
    XmlNode blockDeviceMappingsNode = resultNode.FirstChild("BlockDeviceMappings");
    if(!blockDeviceMappingsNode.IsNull())
    {
      XmlNode blockDeviceMappingsMember = blockDeviceMappingsNode.FirstChild("member");
      while(!blockDeviceMappingsMember.IsNull())
      {
        m_blockDeviceMappings.push_back(blockDeviceMappingsMember);
        blockDeviceMappingsMember = blockDeviceMappingsMember.NextNode("member");
      }

      m_blockDeviceMappingsHasBeenSet = true;
    }
    XmlNode instanceMonitoringNode = resultNode.FirstChild("InstanceMonitoring");
    if(!instanceMonitoringNode.IsNull())
    {
      m_instanceMonitoring = instanceMonitoringNode;
      m_instanceMonitoringHasBeenSet = true;
    }
    XmlNode spotPriceNode = resultNode.FirstChild("SpotPrice");
    if(!spotPriceNode.IsNull())
    {
      m_spotPrice = spotPriceNode.GetText();
      m_spotPriceHasBeenSet = true;
    }
    XmlNode iamInstanceProfileNode = resultNode.FirstChild("IamInstanceProfile");
    if(!iamInstanceProfileNode.IsNull())
    {
      m_iamInstanceProfile = iamInstanceProfileNode.GetText();
      m_iamInstanceProfileHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(createdTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("EbsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(ebsOptimizedNode.GetText().c_str()).c_str());
      m_ebsOptimizedHasBeenSet = true;
    }
    XmlNode associatePublicIpAddressNode = resultNode.FirstChild("AssociatePublicIpAddress");
    if(!associatePublicIpAddressNode.IsNull())
    {
      m_associatePublicIpAddress = StringUtils::ConvertToBool(StringUtils::Trim(associatePublicIpAddressNode.GetText().c_str()).c_str());
      m_associatePublicIpAddressHasBeenSet = true;
    }
    XmlNode placementTenancyNode = resultNode.FirstChild("PlacementTenancy");
    if(!placementTenancyNode.IsNull())
    {
      m_placementTenancy = placementTenancyNode.GetText();
      m_placementTenancyHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_launchConfigurationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }

  if(m_launchConfigurationARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchConfigurationARN=" << StringUtils::URLEncode(m_launchConfigurationARN.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_keyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << index << locationValue << ".SecurityGroups.member." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_classicLinkVPCIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClassicLinkVPCId=" << StringUtils::URLEncode(m_classicLinkVPCId.c_str()) << "&";
  }

  if(m_classicLinkVPCSecurityGroupsHasBeenSet)
  {
      unsigned classicLinkVPCSecurityGroupsIdx = 1;
      for(auto& item : m_classicLinkVPCSecurityGroups)
      {
        oStream << location << index << locationValue << ".ClassicLinkVPCSecurityGroups.member." << classicLinkVPCSecurityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_userDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_kernelIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
      unsigned blockDeviceMappingsIdx = 1;
      for(auto& item : m_blockDeviceMappings)
      {
        Aws::StringStream blockDeviceMappingsSs;
        blockDeviceMappingsSs << location << index << locationValue << ".BlockDeviceMappings.member." << blockDeviceMappingsIdx++;
        item.OutputToStream(oStream, blockDeviceMappingsSs.str().c_str());
      }
  }

  if(m_instanceMonitoringHasBeenSet)
  {
      Aws::StringStream instanceMonitoringLocationAndMemberSs;
      instanceMonitoringLocationAndMemberSs << location << index << locationValue << ".InstanceMonitoring";
      m_instanceMonitoring.OutputToStream(oStream, instanceMonitoringLocationAndMemberSs.str().c_str());
  }

  if(m_spotPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }

  if(m_iamInstanceProfileHasBeenSet)
  {
      oStream << location << index << locationValue << ".IamInstanceProfile=" << StringUtils::URLEncode(m_iamInstanceProfile.c_str()) << "&";
  }

  if(m_createdTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }

  if(m_associatePublicIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatePublicIpAddress=" << std::boolalpha << m_associatePublicIpAddress << "&";
  }

  if(m_placementTenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlacementTenancy=" << StringUtils::URLEncode(m_placementTenancy.c_str()) << "&";
  }

}

void LaunchConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_launchConfigurationNameHasBeenSet)
  {
      oStream << location << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }
  if(m_launchConfigurationARNHasBeenSet)
  {
      oStream << location << ".LaunchConfigurationARN=" << StringUtils::URLEncode(m_launchConfigurationARN.c_str()) << "&";
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_keyNameHasBeenSet)
  {
      oStream << location << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << ".SecurityGroups.member." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_classicLinkVPCIdHasBeenSet)
  {
      oStream << location << ".ClassicLinkVPCId=" << StringUtils::URLEncode(m_classicLinkVPCId.c_str()) << "&";
  }
  if(m_classicLinkVPCSecurityGroupsHasBeenSet)
  {
      unsigned classicLinkVPCSecurityGroupsIdx = 1;
      for(auto& item : m_classicLinkVPCSecurityGroups)
      {
        oStream << location << ".ClassicLinkVPCSecurityGroups.member." << classicLinkVPCSecurityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_userDataHasBeenSet)
  {
      oStream << location << ".UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_kernelIdHasBeenSet)
  {
      oStream << location << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }
  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }
  if(m_blockDeviceMappingsHasBeenSet)
  {
      unsigned blockDeviceMappingsIdx = 1;
      for(auto& item : m_blockDeviceMappings)
      {
        Aws::StringStream blockDeviceMappingsSs;
        blockDeviceMappingsSs << location <<  ".BlockDeviceMappings.member." << blockDeviceMappingsIdx++;
        item.OutputToStream(oStream, blockDeviceMappingsSs.str().c_str());
      }
  }
  if(m_instanceMonitoringHasBeenSet)
  {
      Aws::String instanceMonitoringLocationAndMember(location);
      instanceMonitoringLocationAndMember += ".InstanceMonitoring";
      m_instanceMonitoring.OutputToStream(oStream, instanceMonitoringLocationAndMember.c_str());
  }
  if(m_spotPriceHasBeenSet)
  {
      oStream << location << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }
  if(m_iamInstanceProfileHasBeenSet)
  {
      oStream << location << ".IamInstanceProfile=" << StringUtils::URLEncode(m_iamInstanceProfile.c_str()) << "&";
  }
  if(m_createdTimeHasBeenSet)
  {
      oStream << location << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }
  if(m_associatePublicIpAddressHasBeenSet)
  {
      oStream << location << ".AssociatePublicIpAddress=" << std::boolalpha << m_associatePublicIpAddress << "&";
  }
  if(m_placementTenancyHasBeenSet)
  {
      oStream << location << ".PlacementTenancy=" << StringUtils::URLEncode(m_placementTenancy.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
