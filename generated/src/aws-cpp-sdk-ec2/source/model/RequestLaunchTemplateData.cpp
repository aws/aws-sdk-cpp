/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

RequestLaunchTemplateData::RequestLaunchTemplateData(const XmlNode& xmlNode)
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
      m_kernelId = Aws::Utils::Xml::DecodeEscapedXmlText(kernelIdNode.GetText());
      m_kernelIdHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("EbsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ebsOptimizedNode.GetText()).c_str()).c_str());
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
      m_blockDeviceMappingsHasBeenSet = !blockDeviceMappingsMember.IsNull();
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
      m_networkInterfacesHasBeenSet = !networkInterfacesMember.IsNull();
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
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()));
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode keyNameNode = resultNode.FirstChild("KeyName");
    if(!keyNameNode.IsNull())
    {
      m_keyName = Aws::Utils::Xml::DecodeEscapedXmlText(keyNameNode.GetText());
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
      m_ramDiskId = Aws::Utils::Xml::DecodeEscapedXmlText(ramDiskIdNode.GetText());
      m_ramDiskIdHasBeenSet = true;
    }
    XmlNode disableApiTerminationNode = resultNode.FirstChild("DisableApiTermination");
    if(!disableApiTerminationNode.IsNull())
    {
      m_disableApiTermination = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(disableApiTerminationNode.GetText()).c_str()).c_str());
      m_disableApiTerminationHasBeenSet = true;
    }
    XmlNode instanceInitiatedShutdownBehaviorNode = resultNode.FirstChild("InstanceInitiatedShutdownBehavior");
    if(!instanceInitiatedShutdownBehaviorNode.IsNull())
    {
      m_instanceInitiatedShutdownBehavior = ShutdownBehaviorMapper::GetShutdownBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceInitiatedShutdownBehaviorNode.GetText()).c_str()));
      m_instanceInitiatedShutdownBehaviorHasBeenSet = true;
    }
    XmlNode userDataNode = resultNode.FirstChild("UserData");
    if(!userDataNode.IsNull())
    {
      m_userData = Aws::Utils::Xml::DecodeEscapedXmlText(userDataNode.GetText());
      m_userDataHasBeenSet = true;
    }
    XmlNode tagSpecificationsNode = resultNode.FirstChild("TagSpecification");
    if(!tagSpecificationsNode.IsNull())
    {
      XmlNode tagSpecificationsMember = tagSpecificationsNode.FirstChild("LaunchTemplateTagSpecificationRequest");
      m_tagSpecificationsHasBeenSet = !tagSpecificationsMember.IsNull();
      while(!tagSpecificationsMember.IsNull())
      {
        m_tagSpecifications.push_back(tagSpecificationsMember);
        tagSpecificationsMember = tagSpecificationsMember.NextNode("LaunchTemplateTagSpecificationRequest");
      }

      m_tagSpecificationsHasBeenSet = true;
    }
    XmlNode securityGroupIdsNode = resultNode.FirstChild("SecurityGroupId");
    if(!securityGroupIdsNode.IsNull())
    {
      XmlNode securityGroupIdsMember = securityGroupIdsNode.FirstChild("SecurityGroupId");
      m_securityGroupIdsHasBeenSet = !securityGroupIdsMember.IsNull();
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
      m_securityGroupsHasBeenSet = !securityGroupsMember.IsNull();
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
      m_licenseSpecificationsHasBeenSet = !licenseSpecificationsMember.IsNull();
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
    XmlNode metadataOptionsNode = resultNode.FirstChild("MetadataOptions");
    if(!metadataOptionsNode.IsNull())
    {
      m_metadataOptions = metadataOptionsNode;
      m_metadataOptionsHasBeenSet = true;
    }
    XmlNode enclaveOptionsNode = resultNode.FirstChild("EnclaveOptions");
    if(!enclaveOptionsNode.IsNull())
    {
      m_enclaveOptions = enclaveOptionsNode;
      m_enclaveOptionsHasBeenSet = true;
    }
    XmlNode instanceRequirementsNode = resultNode.FirstChild("InstanceRequirements");
    if(!instanceRequirementsNode.IsNull())
    {
      m_instanceRequirements = instanceRequirementsNode;
      m_instanceRequirementsHasBeenSet = true;
    }
    XmlNode privateDnsNameOptionsNode = resultNode.FirstChild("PrivateDnsNameOptions");
    if(!privateDnsNameOptionsNode.IsNull())
    {
      m_privateDnsNameOptions = privateDnsNameOptionsNode;
      m_privateDnsNameOptionsHasBeenSet = true;
    }
    XmlNode maintenanceOptionsNode = resultNode.FirstChild("MaintenanceOptions");
    if(!maintenanceOptionsNode.IsNull())
    {
      m_maintenanceOptions = maintenanceOptionsNode;
      m_maintenanceOptionsHasBeenSet = true;
    }
    XmlNode disableApiStopNode = resultNode.FirstChild("DisableApiStop");
    if(!disableApiStopNode.IsNull())
    {
      m_disableApiStop = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(disableApiStopNode.GetText()).c_str()).c_str());
      m_disableApiStopHasBeenSet = true;
    }
    XmlNode operatorNode = resultNode.FirstChild("Operator");
    if(!operatorNode.IsNull())
    {
      m_operator = operatorNode;
      m_operatorHasBeenSet = true;
    }
    XmlNode networkPerformanceOptionsNode = resultNode.FirstChild("NetworkPerformanceOptions");
    if(!networkPerformanceOptionsNode.IsNull())
    {
      m_networkPerformanceOptions = networkPerformanceOptionsNode;
      m_networkPerformanceOptionsHasBeenSet = true;
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
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(InstanceTypeMapper::GetNameForInstanceType(m_instanceType)) << "&";
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
      oStream << location << index << locationValue << ".InstanceInitiatedShutdownBehavior=" << StringUtils::URLEncode(ShutdownBehaviorMapper::GetNameForShutdownBehavior(m_instanceInitiatedShutdownBehavior)) << "&";
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

  if(m_metadataOptionsHasBeenSet)
  {
      Aws::StringStream metadataOptionsLocationAndMemberSs;
      metadataOptionsLocationAndMemberSs << location << index << locationValue << ".MetadataOptions";
      m_metadataOptions.OutputToStream(oStream, metadataOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_enclaveOptionsHasBeenSet)
  {
      Aws::StringStream enclaveOptionsLocationAndMemberSs;
      enclaveOptionsLocationAndMemberSs << location << index << locationValue << ".EnclaveOptions";
      m_enclaveOptions.OutputToStream(oStream, enclaveOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_instanceRequirementsHasBeenSet)
  {
      Aws::StringStream instanceRequirementsLocationAndMemberSs;
      instanceRequirementsLocationAndMemberSs << location << index << locationValue << ".InstanceRequirements";
      m_instanceRequirements.OutputToStream(oStream, instanceRequirementsLocationAndMemberSs.str().c_str());
  }

  if(m_privateDnsNameOptionsHasBeenSet)
  {
      Aws::StringStream privateDnsNameOptionsLocationAndMemberSs;
      privateDnsNameOptionsLocationAndMemberSs << location << index << locationValue << ".PrivateDnsNameOptions";
      m_privateDnsNameOptions.OutputToStream(oStream, privateDnsNameOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_maintenanceOptionsHasBeenSet)
  {
      Aws::StringStream maintenanceOptionsLocationAndMemberSs;
      maintenanceOptionsLocationAndMemberSs << location << index << locationValue << ".MaintenanceOptions";
      m_maintenanceOptions.OutputToStream(oStream, maintenanceOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_disableApiStopHasBeenSet)
  {
      oStream << location << index << locationValue << ".DisableApiStop=" << std::boolalpha << m_disableApiStop << "&";
  }

  if(m_operatorHasBeenSet)
  {
      Aws::StringStream operatorLocationAndMemberSs;
      operatorLocationAndMemberSs << location << index << locationValue << ".Operator";
      m_operator.OutputToStream(oStream, operatorLocationAndMemberSs.str().c_str());
  }

  if(m_networkPerformanceOptionsHasBeenSet)
  {
      Aws::StringStream networkPerformanceOptionsLocationAndMemberSs;
      networkPerformanceOptionsLocationAndMemberSs << location << index << locationValue << ".NetworkPerformanceOptions";
      m_networkPerformanceOptions.OutputToStream(oStream, networkPerformanceOptionsLocationAndMemberSs.str().c_str());
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
        blockDeviceMappingsSs << location << ".BlockDeviceMapping." << blockDeviceMappingsIdx++;
        item.OutputToStream(oStream, blockDeviceMappingsSs.str().c_str());
      }
  }
  if(m_networkInterfacesHasBeenSet)
  {
      unsigned networkInterfacesIdx = 1;
      for(auto& item : m_networkInterfaces)
      {
        Aws::StringStream networkInterfacesSs;
        networkInterfacesSs << location << ".NetworkInterface." << networkInterfacesIdx++;
        item.OutputToStream(oStream, networkInterfacesSs.str().c_str());
      }
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(InstanceTypeMapper::GetNameForInstanceType(m_instanceType)) << "&";
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
      oStream << location << ".InstanceInitiatedShutdownBehavior=" << StringUtils::URLEncode(ShutdownBehaviorMapper::GetNameForShutdownBehavior(m_instanceInitiatedShutdownBehavior)) << "&";
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
        tagSpecificationsSs << location << ".TagSpecification." << tagSpecificationsIdx++;
        item.OutputToStream(oStream, tagSpecificationsSs.str().c_str());
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
        licenseSpecificationsSs << location << ".LicenseSpecification." << licenseSpecificationsIdx++;
        item.OutputToStream(oStream, licenseSpecificationsSs.str().c_str());
      }
  }
  if(m_hibernationOptionsHasBeenSet)
  {
      Aws::String hibernationOptionsLocationAndMember(location);
      hibernationOptionsLocationAndMember += ".HibernationOptions";
      m_hibernationOptions.OutputToStream(oStream, hibernationOptionsLocationAndMember.c_str());
  }
  if(m_metadataOptionsHasBeenSet)
  {
      Aws::String metadataOptionsLocationAndMember(location);
      metadataOptionsLocationAndMember += ".MetadataOptions";
      m_metadataOptions.OutputToStream(oStream, metadataOptionsLocationAndMember.c_str());
  }
  if(m_enclaveOptionsHasBeenSet)
  {
      Aws::String enclaveOptionsLocationAndMember(location);
      enclaveOptionsLocationAndMember += ".EnclaveOptions";
      m_enclaveOptions.OutputToStream(oStream, enclaveOptionsLocationAndMember.c_str());
  }
  if(m_instanceRequirementsHasBeenSet)
  {
      Aws::String instanceRequirementsLocationAndMember(location);
      instanceRequirementsLocationAndMember += ".InstanceRequirements";
      m_instanceRequirements.OutputToStream(oStream, instanceRequirementsLocationAndMember.c_str());
  }
  if(m_privateDnsNameOptionsHasBeenSet)
  {
      Aws::String privateDnsNameOptionsLocationAndMember(location);
      privateDnsNameOptionsLocationAndMember += ".PrivateDnsNameOptions";
      m_privateDnsNameOptions.OutputToStream(oStream, privateDnsNameOptionsLocationAndMember.c_str());
  }
  if(m_maintenanceOptionsHasBeenSet)
  {
      Aws::String maintenanceOptionsLocationAndMember(location);
      maintenanceOptionsLocationAndMember += ".MaintenanceOptions";
      m_maintenanceOptions.OutputToStream(oStream, maintenanceOptionsLocationAndMember.c_str());
  }
  if(m_disableApiStopHasBeenSet)
  {
      oStream << location << ".DisableApiStop=" << std::boolalpha << m_disableApiStop << "&";
  }
  if(m_operatorHasBeenSet)
  {
      Aws::String operatorLocationAndMember(location);
      operatorLocationAndMember += ".Operator";
      m_operator.OutputToStream(oStream, operatorLocationAndMember.c_str());
  }
  if(m_networkPerformanceOptionsHasBeenSet)
  {
      Aws::String networkPerformanceOptionsLocationAndMember(location);
      networkPerformanceOptionsLocationAndMember += ".NetworkPerformanceOptions";
      m_networkPerformanceOptions.OutputToStream(oStream, networkPerformanceOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
