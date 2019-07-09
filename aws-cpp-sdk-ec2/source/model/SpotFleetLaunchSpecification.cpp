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

#include <aws/ec2/model/SpotFleetLaunchSpecification.h>
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

SpotFleetLaunchSpecification::SpotFleetLaunchSpecification() : 
    m_securityGroupsHasBeenSet(false),
    m_addressingTypeHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_monitoringHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_weightedCapacity(0.0),
    m_weightedCapacityHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

SpotFleetLaunchSpecification::SpotFleetLaunchSpecification(const XmlNode& xmlNode) : 
    m_securityGroupsHasBeenSet(false),
    m_addressingTypeHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_kernelIdHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_monitoringHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_ramdiskIdHasBeenSet(false),
    m_spotPriceHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_weightedCapacity(0.0),
    m_weightedCapacityHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
  *this = xmlNode;
}

SpotFleetLaunchSpecification& SpotFleetLaunchSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode securityGroupsNode = resultNode.FirstChild("groupSet");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("item");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember);
        securityGroupsMember = securityGroupsMember.NextNode("item");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode addressingTypeNode = resultNode.FirstChild("addressingType");
    if(!addressingTypeNode.IsNull())
    {
      m_addressingType = addressingTypeNode.GetText();
      m_addressingTypeHasBeenSet = true;
    }
    XmlNode blockDeviceMappingsNode = resultNode.FirstChild("blockDeviceMapping");
    if(!blockDeviceMappingsNode.IsNull())
    {
      XmlNode blockDeviceMappingsMember = blockDeviceMappingsNode.FirstChild("item");
      while(!blockDeviceMappingsMember.IsNull())
      {
        m_blockDeviceMappings.push_back(blockDeviceMappingsMember);
        blockDeviceMappingsMember = blockDeviceMappingsMember.NextNode("item");
      }

      m_blockDeviceMappingsHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("ebsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(ebsOptimizedNode.GetText().c_str()).c_str());
      m_ebsOptimizedHasBeenSet = true;
    }
    XmlNode iamInstanceProfileNode = resultNode.FirstChild("iamInstanceProfile");
    if(!iamInstanceProfileNode.IsNull())
    {
      m_iamInstanceProfile = iamInstanceProfileNode;
      m_iamInstanceProfileHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = imageIdNode.GetText();
      m_imageIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(instanceTypeNode.GetText().c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode kernelIdNode = resultNode.FirstChild("kernelId");
    if(!kernelIdNode.IsNull())
    {
      m_kernelId = kernelIdNode.GetText();
      m_kernelIdHasBeenSet = true;
    }
    XmlNode keyNameNode = resultNode.FirstChild("keyName");
    if(!keyNameNode.IsNull())
    {
      m_keyName = keyNameNode.GetText();
      m_keyNameHasBeenSet = true;
    }
    XmlNode monitoringNode = resultNode.FirstChild("monitoring");
    if(!monitoringNode.IsNull())
    {
      m_monitoring = monitoringNode;
      m_monitoringHasBeenSet = true;
    }
    XmlNode networkInterfacesNode = resultNode.FirstChild("networkInterfaceSet");
    if(!networkInterfacesNode.IsNull())
    {
      XmlNode networkInterfacesMember = networkInterfacesNode.FirstChild("item");
      while(!networkInterfacesMember.IsNull())
      {
        m_networkInterfaces.push_back(networkInterfacesMember);
        networkInterfacesMember = networkInterfacesMember.NextNode("item");
      }

      m_networkInterfacesHasBeenSet = true;
    }
    XmlNode placementNode = resultNode.FirstChild("placement");
    if(!placementNode.IsNull())
    {
      m_placement = placementNode;
      m_placementHasBeenSet = true;
    }
    XmlNode ramdiskIdNode = resultNode.FirstChild("ramdiskId");
    if(!ramdiskIdNode.IsNull())
    {
      m_ramdiskId = ramdiskIdNode.GetText();
      m_ramdiskIdHasBeenSet = true;
    }
    XmlNode spotPriceNode = resultNode.FirstChild("spotPrice");
    if(!spotPriceNode.IsNull())
    {
      m_spotPrice = spotPriceNode.GetText();
      m_spotPriceHasBeenSet = true;
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
      m_userData = userDataNode.GetText();
      m_userDataHasBeenSet = true;
    }
    XmlNode weightedCapacityNode = resultNode.FirstChild("weightedCapacity");
    if(!weightedCapacityNode.IsNull())
    {
      m_weightedCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(weightedCapacityNode.GetText().c_str()).c_str());
      m_weightedCapacityHasBeenSet = true;
    }
    XmlNode tagSpecificationsNode = resultNode.FirstChild("tagSpecificationSet");
    if(!tagSpecificationsNode.IsNull())
    {
      XmlNode tagSpecificationsMember = tagSpecificationsNode.FirstChild("item");
      while(!tagSpecificationsMember.IsNull())
      {
        m_tagSpecifications.push_back(tagSpecificationsMember);
        tagSpecificationsMember = tagSpecificationsMember.NextNode("item");
      }

      m_tagSpecificationsHasBeenSet = true;
    }
  }

  return *this;
}

void SpotFleetLaunchSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location << index << locationValue << ".GroupSet." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }

  if(m_addressingTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AddressingType=" << StringUtils::URLEncode(m_addressingType.c_str()) << "&";
  }

  if(m_blockDeviceMappingsHasBeenSet)
  {
      unsigned blockDeviceMappingsIdx = 1;
      for(auto& item : m_blockDeviceMappings)
      {
        Aws::StringStream blockDeviceMappingsSs;
        blockDeviceMappingsSs << location << index << locationValue << ".BlockDeviceMapping." << blockDeviceMappingsIdx++;
        item.OutputToStream(oStream, blockDeviceMappingsSs.str().c_str());
      }
  }

  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }

  if(m_iamInstanceProfileHasBeenSet)
  {
      Aws::StringStream iamInstanceProfileLocationAndMemberSs;
      iamInstanceProfileLocationAndMemberSs << location << index << locationValue << ".IamInstanceProfile";
      m_iamInstanceProfile.OutputToStream(oStream, iamInstanceProfileLocationAndMemberSs.str().c_str());
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_kernelIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_keyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_monitoringHasBeenSet)
  {
      Aws::StringStream monitoringLocationAndMemberSs;
      monitoringLocationAndMemberSs << location << index << locationValue << ".Monitoring";
      m_monitoring.OutputToStream(oStream, monitoringLocationAndMemberSs.str().c_str());
  }

  if(m_networkInterfacesHasBeenSet)
  {
      unsigned networkInterfacesIdx = 1;
      for(auto& item : m_networkInterfaces)
      {
        Aws::StringStream networkInterfacesSs;
        networkInterfacesSs << location << index << locationValue << ".NetworkInterfaceSet." << networkInterfacesIdx++;
        item.OutputToStream(oStream, networkInterfacesSs.str().c_str());
      }
  }

  if(m_placementHasBeenSet)
  {
      Aws::StringStream placementLocationAndMemberSs;
      placementLocationAndMemberSs << location << index << locationValue << ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMemberSs.str().c_str());
  }

  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }

  if(m_spotPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_userDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }

  if(m_weightedCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
      unsigned tagSpecificationsIdx = 1;
      for(auto& item : m_tagSpecifications)
      {
        Aws::StringStream tagSpecificationsSs;
        tagSpecificationsSs << location << index << locationValue << ".TagSpecificationSet." << tagSpecificationsIdx++;
        item.OutputToStream(oStream, tagSpecificationsSs.str().c_str());
      }
  }

}

void SpotFleetLaunchSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location <<  ".GroupSet." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }
  if(m_addressingTypeHasBeenSet)
  {
      oStream << location << ".AddressingType=" << StringUtils::URLEncode(m_addressingType.c_str()) << "&";
  }
  if(m_blockDeviceMappingsHasBeenSet)
  {
      unsigned blockDeviceMappingsIdx = 1;
      for(auto& item : m_blockDeviceMappings)
      {
        Aws::StringStream blockDeviceMappingsSs;
        blockDeviceMappingsSs << location <<  ".BlockDeviceMapping." << blockDeviceMappingsIdx++;
        item.OutputToStream(oStream, blockDeviceMappingsSs.str().c_str());
      }
  }
  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }
  if(m_iamInstanceProfileHasBeenSet)
  {
      Aws::String iamInstanceProfileLocationAndMember(location);
      iamInstanceProfileLocationAndMember += ".IamInstanceProfile";
      m_iamInstanceProfile.OutputToStream(oStream, iamInstanceProfileLocationAndMember.c_str());
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_kernelIdHasBeenSet)
  {
      oStream << location << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }
  if(m_keyNameHasBeenSet)
  {
      oStream << location << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }
  if(m_monitoringHasBeenSet)
  {
      Aws::String monitoringLocationAndMember(location);
      monitoringLocationAndMember += ".Monitoring";
      m_monitoring.OutputToStream(oStream, monitoringLocationAndMember.c_str());
  }
  if(m_networkInterfacesHasBeenSet)
  {
      unsigned networkInterfacesIdx = 1;
      for(auto& item : m_networkInterfaces)
      {
        Aws::StringStream networkInterfacesSs;
        networkInterfacesSs << location <<  ".NetworkInterfaceSet." << networkInterfacesIdx++;
        item.OutputToStream(oStream, networkInterfacesSs.str().c_str());
      }
  }
  if(m_placementHasBeenSet)
  {
      Aws::String placementLocationAndMember(location);
      placementLocationAndMember += ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMember.c_str());
  }
  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }
  if(m_spotPriceHasBeenSet)
  {
      oStream << location << ".SpotPrice=" << StringUtils::URLEncode(m_spotPrice.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_userDataHasBeenSet)
  {
      oStream << location << ".UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }
  if(m_weightedCapacityHasBeenSet)
  {
        oStream << location << ".WeightedCapacity=" << StringUtils::URLEncode(m_weightedCapacity) << "&";
  }
  if(m_tagSpecificationsHasBeenSet)
  {
      unsigned tagSpecificationsIdx = 1;
      for(auto& item : m_tagSpecifications)
      {
        Aws::StringStream tagSpecificationsSs;
        tagSpecificationsSs << location <<  ".TagSpecificationSet." << tagSpecificationsIdx++;
        item.OutputToStream(oStream, tagSpecificationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
