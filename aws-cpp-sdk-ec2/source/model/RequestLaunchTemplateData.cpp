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

#include <aws/ec2/model/RequestLaunchTemplateData.h>
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

RequestLaunchTemplateData::RequestLaunchTemplateData() : 
    m_kernelIdHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_monitoringHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_ramDiskIdHasBeenSet(false),
    m_disableApiTermination(false),
    m_disableApiTerminationHasBeenSet(false),
    m_instanceInitiatedShutdownBehavior(ShutdownBehavior::NOT_SET),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_elasticGpuSpecificationsHasBeenSet(false),
    m_elasticInferenceAcceleratorsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_creditSpecificationHasBeenSet(false),
    m_cpuOptionsHasBeenSet(false),
    m_capacityReservationSpecificationHasBeenSet(false),
    m_licenseSpecificationsHasBeenSet(false),
    m_hibernationOptionsHasBeenSet(false)
{
}

RequestLaunchTemplateData::RequestLaunchTemplateData(const XmlNode& xmlNode) : 
    m_kernelIdHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_iamInstanceProfileHasBeenSet(false),
    m_blockDeviceMappingsHasBeenSet(false),
    m_networkInterfacesHasBeenSet(false),
    m_imageIdHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_keyNameHasBeenSet(false),
    m_monitoringHasBeenSet(false),
    m_placementHasBeenSet(false),
    m_ramDiskIdHasBeenSet(false),
    m_disableApiTermination(false),
    m_disableApiTerminationHasBeenSet(false),
    m_instanceInitiatedShutdownBehavior(ShutdownBehavior::NOT_SET),
    m_instanceInitiatedShutdownBehaviorHasBeenSet(false),
    m_userDataHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_elasticGpuSpecificationsHasBeenSet(false),
    m_elasticInferenceAcceleratorsHasBeenSet(false),
    m_securityGroupIdsHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_instanceMarketOptionsHasBeenSet(false),
    m_creditSpecificationHasBeenSet(false),
    m_cpuOptionsHasBeenSet(false),
    m_capacityReservationSpecificationHasBeenSet(false),
    m_licenseSpecificationsHasBeenSet(false),
    m_hibernationOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

RequestLaunchTemplateData& RequestLaunchTemplateData::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode kernelIdNode = resultNode.FirstChild("KernelId");
    if(!kernelIdNode.IsNull())
    {
      m_kernelId = kernelIdNode.GetText();
      m_kernelIdHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("EbsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(ebsOptimizedNode.GetText().c_str()).c_str());
      m_ebsOptimizedHasBeenSet = true;
    }
    XmlNode iamInstanceProfileNode = resultNode.FirstChild("IamInstanceProfile");
    if(!iamInstanceProfileNode.IsNull())
    {
      m_iamInstanceProfile = iamInstanceProfileNode;
      m_iamInstanceProfileHasBeenSet = true;
    }
    XmlNode blockDeviceMappingsNode = resultNode.FirstChild("BlockDeviceMapping");
    if(!blockDeviceMappingsNode.IsNull())
    {
      XmlNode blockDeviceMappingsMember = blockDeviceMappingsNode.FirstChild("BlockDeviceMapping");
      while(!blockDeviceMappingsMember.IsNull())
      {
        m_blockDeviceMappings.push_back(blockDeviceMappingsMember);
        blockDeviceMappingsMember = blockDeviceMappingsMember.NextNode("BlockDeviceMapping");
      }

      m_blockDeviceMappingsHasBeenSet = true;
    }
    XmlNode networkInterfacesNode = resultNode.FirstChild("NetworkInterface");
    if(!networkInterfacesNode.IsNull())
    {
      XmlNode networkInterfacesMember = networkInterfacesNode.FirstChild("InstanceNetworkInterfaceSpecification");
      while(!networkInterfacesMember.IsNull())
      {
        m_networkInterfaces.push_back(networkInterfacesMember);
        networkInterfacesMember = networkInterfacesMember.NextNode("InstanceNetworkInterfaceSpecification");
      }

      m_networkInterfacesHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("ImageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = imageIdNode.GetText();
      m_imageIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(instanceTypeNode.GetText().c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode keyNameNode = resultNode.FirstChild("KeyName");
    if(!keyNameNode.IsNull())
    {
      m_keyName = keyNameNode.GetText();
      m_keyNameHasBeenSet = true;
    }
    XmlNode monitoringNode = resultNode.FirstChild("Monitoring");
    if(!monitoringNode.IsNull())
    {
      m_monitoring = monitoringNode;
      m_monitoringHasBeenSet = true;
    }
    XmlNode placementNode = resultNode.FirstChild("Placement");
    if(!placementNode.IsNull())
    {
      m_placement = placementNode;
      m_placementHasBeenSet = true;
    }
    XmlNode ramDiskIdNode = resultNode.FirstChild("RamDiskId");
    if(!ramDiskIdNode.IsNull())
    {
      m_ramDiskId = ramDiskIdNode.GetText();
      m_ramDiskIdHasBeenSet = true;
    }
    XmlNode disableApiTerminationNode = resultNode.FirstChild("DisableApiTermination");
    if(!disableApiTerminationNode.IsNull())
    {
      m_disableApiTermination = StringUtils::ConvertToBool(StringUtils::Trim(disableApiTerminationNode.GetText().c_str()).c_str());
      m_disableApiTerminationHasBeenSet = true;
    }
    XmlNode instanceInitiatedShutdownBehaviorNode = resultNode.FirstChild("InstanceInitiatedShutdownBehavior");
    if(!instanceInitiatedShutdownBehaviorNode.IsNull())
    {
      m_instanceInitiatedShutdownBehavior = ShutdownBehaviorMapper::GetShutdownBehaviorForName(StringUtils::Trim(instanceInitiatedShutdownBehaviorNode.GetText().c_str()).c_str());
      m_instanceInitiatedShutdownBehaviorHasBeenSet = true;
    }
    XmlNode userDataNode = resultNode.FirstChild("UserData");
    if(!userDataNode.IsNull())
    {
      m_userData = userDataNode.GetText();
      m_userDataHasBeenSet = true;
    }
    XmlNode tagSpecificationsNode = resultNode.FirstChild("TagSpecification");
    if(!tagSpecificationsNode.IsNull())
    {
      XmlNode tagSpecificationsMember = tagSpecificationsNode.FirstChild("LaunchTemplateTagSpecificationRequest");
      while(!tagSpecificationsMember.IsNull())
      {
        m_tagSpecifications.push_back(tagSpecificationsMember);
        tagSpecificationsMember = tagSpecificationsMember.NextNode("LaunchTemplateTagSpecificationRequest");
      }

      m_tagSpecificationsHasBeenSet = true;
    }
    XmlNode elasticGpuSpecificationsNode = resultNode.FirstChild("ElasticGpuSpecification");
    if(!elasticGpuSpecificationsNode.IsNull())
    {
      XmlNode elasticGpuSpecificationsMember = elasticGpuSpecificationsNode.FirstChild("ElasticGpuSpecification");
      while(!elasticGpuSpecificationsMember.IsNull())
      {
        m_elasticGpuSpecifications.push_back(elasticGpuSpecificationsMember);
        elasticGpuSpecificationsMember = elasticGpuSpecificationsMember.NextNode("ElasticGpuSpecification");
      }

      m_elasticGpuSpecificationsHasBeenSet = true;
    }
    XmlNode elasticInferenceAcceleratorsNode = resultNode.FirstChild("ElasticInferenceAccelerator");
    if(!elasticInferenceAcceleratorsNode.IsNull())
    {
      XmlNode elasticInferenceAcceleratorsMember = elasticInferenceAcceleratorsNode.FirstChild("item");
      while(!elasticInferenceAcceleratorsMember.IsNull())
      {
        m_elasticInferenceAccelerators.push_back(elasticInferenceAcceleratorsMember);
        elasticInferenceAcceleratorsMember = elasticInferenceAcceleratorsMember.NextNode("item");
      }

      m_elasticInferenceAcceleratorsHasBeenSet = true;
    }
    XmlNode securityGroupIdsNode = resultNode.FirstChild("SecurityGroupId");
    if(!securityGroupIdsNode.IsNull())
    {
      XmlNode securityGroupIdsMember = securityGroupIdsNode.FirstChild("SecurityGroupId");
      while(!securityGroupIdsMember.IsNull())
      {
        m_securityGroupIds.push_back(securityGroupIdsMember.GetText());
        securityGroupIdsMember = securityGroupIdsMember.NextNode("SecurityGroupId");
      }

      m_securityGroupIdsHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("SecurityGroup");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("SecurityGroup");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember.GetText());
        securityGroupsMember = securityGroupsMember.NextNode("SecurityGroup");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode instanceMarketOptionsNode = resultNode.FirstChild("InstanceMarketOptions");
    if(!instanceMarketOptionsNode.IsNull())
    {
      m_instanceMarketOptions = instanceMarketOptionsNode;
      m_instanceMarketOptionsHasBeenSet = true;
    }
    XmlNode creditSpecificationNode = resultNode.FirstChild("CreditSpecification");
    if(!creditSpecificationNode.IsNull())
    {
      m_creditSpecification = creditSpecificationNode;
      m_creditSpecificationHasBeenSet = true;
    }
    XmlNode cpuOptionsNode = resultNode.FirstChild("CpuOptions");
    if(!cpuOptionsNode.IsNull())
    {
      m_cpuOptions = cpuOptionsNode;
      m_cpuOptionsHasBeenSet = true;
    }
    XmlNode capacityReservationSpecificationNode = resultNode.FirstChild("CapacityReservationSpecification");
    if(!capacityReservationSpecificationNode.IsNull())
    {
      m_capacityReservationSpecification = capacityReservationSpecificationNode;
      m_capacityReservationSpecificationHasBeenSet = true;
    }
    XmlNode licenseSpecificationsNode = resultNode.FirstChild("LicenseSpecification");
    if(!licenseSpecificationsNode.IsNull())
    {
      XmlNode licenseSpecificationsMember = licenseSpecificationsNode.FirstChild("item");
      while(!licenseSpecificationsMember.IsNull())
      {
        m_licenseSpecifications.push_back(licenseSpecificationsMember);
        licenseSpecificationsMember = licenseSpecificationsMember.NextNode("item");
      }

      m_licenseSpecificationsHasBeenSet = true;
    }
    XmlNode hibernationOptionsNode = resultNode.FirstChild("HibernationOptions");
    if(!hibernationOptionsNode.IsNull())
    {
      m_hibernationOptions = hibernationOptionsNode;
      m_hibernationOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void RequestLaunchTemplateData::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_kernelIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
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

  if(m_networkInterfacesHasBeenSet)
  {
      unsigned networkInterfacesIdx = 1;
      for(auto& item : m_networkInterfaces)
      {
        Aws::StringStream networkInterfacesSs;
        networkInterfacesSs << location << index << locationValue << ".NetworkInterface." << networkInterfacesIdx++;
        item.OutputToStream(oStream, networkInterfacesSs.str().c_str());
      }
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
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

  if(m_placementHasBeenSet)
  {
      Aws::StringStream placementLocationAndMemberSs;
      placementLocationAndMemberSs << location << index << locationValue << ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMemberSs.str().c_str());
  }

  if(m_ramDiskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RamDiskId=" << StringUtils::URLEncode(m_ramDiskId.c_str()) << "&";
  }

  if(m_disableApiTerminationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DisableApiTermination=" << std::boolalpha << m_disableApiTermination << "&";
  }

  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceInitiatedShutdownBehavior=" << ShutdownBehaviorMapper::GetNameForShutdownBehavior(m_instanceInitiatedShutdownBehavior) << "&";
  }

  if(m_userDataHasBeenSet)
  {
      oStream << location << index << locationValue << ".UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
      unsigned tagSpecificationsIdx = 1;
      for(auto& item : m_tagSpecifications)
      {
        Aws::StringStream tagSpecificationsSs;
        tagSpecificationsSs << location << index << locationValue << ".TagSpecification." << tagSpecificationsIdx++;
        item.OutputToStream(oStream, tagSpecificationsSs.str().c_str());
      }
  }

  if(m_elasticGpuSpecificationsHasBeenSet)
  {
      unsigned elasticGpuSpecificationsIdx = 1;
      for(auto& item : m_elasticGpuSpecifications)
      {
        Aws::StringStream elasticGpuSpecificationsSs;
        elasticGpuSpecificationsSs << location << index << locationValue << ".ElasticGpuSpecification." << elasticGpuSpecificationsIdx++;
        item.OutputToStream(oStream, elasticGpuSpecificationsSs.str().c_str());
      }
  }

  if(m_elasticInferenceAcceleratorsHasBeenSet)
  {
      unsigned elasticInferenceAcceleratorsIdx = 1;
      for(auto& item : m_elasticInferenceAccelerators)
      {
        Aws::StringStream elasticInferenceAcceleratorsSs;
        elasticInferenceAcceleratorsSs << location << index << locationValue << ".ElasticInferenceAccelerator." << elasticInferenceAcceleratorsIdx++;
        item.OutputToStream(oStream, elasticInferenceAcceleratorsSs.str().c_str());
      }
  }

  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << index << locationValue << ".SecurityGroupId." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << index << locationValue << ".SecurityGroup." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_instanceMarketOptionsHasBeenSet)
  {
      Aws::StringStream instanceMarketOptionsLocationAndMemberSs;
      instanceMarketOptionsLocationAndMemberSs << location << index << locationValue << ".InstanceMarketOptions";
      m_instanceMarketOptions.OutputToStream(oStream, instanceMarketOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_creditSpecificationHasBeenSet)
  {
      Aws::StringStream creditSpecificationLocationAndMemberSs;
      creditSpecificationLocationAndMemberSs << location << index << locationValue << ".CreditSpecification";
      m_creditSpecification.OutputToStream(oStream, creditSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_cpuOptionsHasBeenSet)
  {
      Aws::StringStream cpuOptionsLocationAndMemberSs;
      cpuOptionsLocationAndMemberSs << location << index << locationValue << ".CpuOptions";
      m_cpuOptions.OutputToStream(oStream, cpuOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_capacityReservationSpecificationHasBeenSet)
  {
      Aws::StringStream capacityReservationSpecificationLocationAndMemberSs;
      capacityReservationSpecificationLocationAndMemberSs << location << index << locationValue << ".CapacityReservationSpecification";
      m_capacityReservationSpecification.OutputToStream(oStream, capacityReservationSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_licenseSpecificationsHasBeenSet)
  {
      unsigned licenseSpecificationsIdx = 1;
      for(auto& item : m_licenseSpecifications)
      {
        Aws::StringStream licenseSpecificationsSs;
        licenseSpecificationsSs << location << index << locationValue << ".LicenseSpecification." << licenseSpecificationsIdx++;
        item.OutputToStream(oStream, licenseSpecificationsSs.str().c_str());
      }
  }

  if(m_hibernationOptionsHasBeenSet)
  {
      Aws::StringStream hibernationOptionsLocationAndMemberSs;
      hibernationOptionsLocationAndMemberSs << location << index << locationValue << ".HibernationOptions";
      m_hibernationOptions.OutputToStream(oStream, hibernationOptionsLocationAndMemberSs.str().c_str());
  }

}

void RequestLaunchTemplateData::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_kernelIdHasBeenSet)
  {
      oStream << location << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
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
  if(m_networkInterfacesHasBeenSet)
  {
      unsigned networkInterfacesIdx = 1;
      for(auto& item : m_networkInterfaces)
      {
        Aws::StringStream networkInterfacesSs;
        networkInterfacesSs << location <<  ".NetworkInterface." << networkInterfacesIdx++;
        item.OutputToStream(oStream, networkInterfacesSs.str().c_str());
      }
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
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
  if(m_placementHasBeenSet)
  {
      Aws::String placementLocationAndMember(location);
      placementLocationAndMember += ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMember.c_str());
  }
  if(m_ramDiskIdHasBeenSet)
  {
      oStream << location << ".RamDiskId=" << StringUtils::URLEncode(m_ramDiskId.c_str()) << "&";
  }
  if(m_disableApiTerminationHasBeenSet)
  {
      oStream << location << ".DisableApiTermination=" << std::boolalpha << m_disableApiTermination << "&";
  }
  if(m_instanceInitiatedShutdownBehaviorHasBeenSet)
  {
      oStream << location << ".InstanceInitiatedShutdownBehavior=" << ShutdownBehaviorMapper::GetNameForShutdownBehavior(m_instanceInitiatedShutdownBehavior) << "&";
  }
  if(m_userDataHasBeenSet)
  {
      oStream << location << ".UserData=" << StringUtils::URLEncode(m_userData.c_str()) << "&";
  }
  if(m_tagSpecificationsHasBeenSet)
  {
      unsigned tagSpecificationsIdx = 1;
      for(auto& item : m_tagSpecifications)
      {
        Aws::StringStream tagSpecificationsSs;
        tagSpecificationsSs << location <<  ".TagSpecification." << tagSpecificationsIdx++;
        item.OutputToStream(oStream, tagSpecificationsSs.str().c_str());
      }
  }
  if(m_elasticGpuSpecificationsHasBeenSet)
  {
      unsigned elasticGpuSpecificationsIdx = 1;
      for(auto& item : m_elasticGpuSpecifications)
      {
        Aws::StringStream elasticGpuSpecificationsSs;
        elasticGpuSpecificationsSs << location <<  ".ElasticGpuSpecification." << elasticGpuSpecificationsIdx++;
        item.OutputToStream(oStream, elasticGpuSpecificationsSs.str().c_str());
      }
  }
  if(m_elasticInferenceAcceleratorsHasBeenSet)
  {
      unsigned elasticInferenceAcceleratorsIdx = 1;
      for(auto& item : m_elasticInferenceAccelerators)
      {
        Aws::StringStream elasticInferenceAcceleratorsSs;
        elasticInferenceAcceleratorsSs << location <<  ".ElasticInferenceAccelerator." << elasticInferenceAcceleratorsIdx++;
        item.OutputToStream(oStream, elasticInferenceAcceleratorsSs.str().c_str());
      }
  }
  if(m_securityGroupIdsHasBeenSet)
  {
      unsigned securityGroupIdsIdx = 1;
      for(auto& item : m_securityGroupIds)
      {
        oStream << location << ".SecurityGroupId." << securityGroupIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << ".SecurityGroup." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_instanceMarketOptionsHasBeenSet)
  {
      Aws::String instanceMarketOptionsLocationAndMember(location);
      instanceMarketOptionsLocationAndMember += ".InstanceMarketOptions";
      m_instanceMarketOptions.OutputToStream(oStream, instanceMarketOptionsLocationAndMember.c_str());
  }
  if(m_creditSpecificationHasBeenSet)
  {
      Aws::String creditSpecificationLocationAndMember(location);
      creditSpecificationLocationAndMember += ".CreditSpecification";
      m_creditSpecification.OutputToStream(oStream, creditSpecificationLocationAndMember.c_str());
  }
  if(m_cpuOptionsHasBeenSet)
  {
      Aws::String cpuOptionsLocationAndMember(location);
      cpuOptionsLocationAndMember += ".CpuOptions";
      m_cpuOptions.OutputToStream(oStream, cpuOptionsLocationAndMember.c_str());
  }
  if(m_capacityReservationSpecificationHasBeenSet)
  {
      Aws::String capacityReservationSpecificationLocationAndMember(location);
      capacityReservationSpecificationLocationAndMember += ".CapacityReservationSpecification";
      m_capacityReservationSpecification.OutputToStream(oStream, capacityReservationSpecificationLocationAndMember.c_str());
  }
  if(m_licenseSpecificationsHasBeenSet)
  {
      unsigned licenseSpecificationsIdx = 1;
      for(auto& item : m_licenseSpecifications)
      {
        Aws::StringStream licenseSpecificationsSs;
        licenseSpecificationsSs << location <<  ".LicenseSpecification." << licenseSpecificationsIdx++;
        item.OutputToStream(oStream, licenseSpecificationsSs.str().c_str());
      }
  }
  if(m_hibernationOptionsHasBeenSet)
  {
      Aws::String hibernationOptionsLocationAndMember(location);
      hibernationOptionsLocationAndMember += ".HibernationOptions";
      m_hibernationOptions.OutputToStream(oStream, hibernationOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
