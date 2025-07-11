﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Instance.h>
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

Instance::Instance(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Instance& Instance::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode architectureNode = resultNode.FirstChild("architecture");
    if(!architectureNode.IsNull())
    {
      m_architecture = ArchitectureValuesMapper::GetArchitectureValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(architectureNode.GetText()).c_str()));
      m_architectureHasBeenSet = true;
    }
    XmlNode blockDeviceMappingsNode = resultNode.FirstChild("blockDeviceMapping");
    if(!blockDeviceMappingsNode.IsNull())
    {
      XmlNode blockDeviceMappingsMember = blockDeviceMappingsNode.FirstChild("item");
      m_blockDeviceMappingsHasBeenSet = !blockDeviceMappingsMember.IsNull();
      while(!blockDeviceMappingsMember.IsNull())
      {
        m_blockDeviceMappings.push_back(blockDeviceMappingsMember);
        blockDeviceMappingsMember = blockDeviceMappingsMember.NextNode("item");
      }

      m_blockDeviceMappingsHasBeenSet = true;
    }
    XmlNode clientTokenNode = resultNode.FirstChild("clientToken");
    if(!clientTokenNode.IsNull())
    {
      m_clientToken = Aws::Utils::Xml::DecodeEscapedXmlText(clientTokenNode.GetText());
      m_clientTokenHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("ebsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ebsOptimizedNode.GetText()).c_str()).c_str());
      m_ebsOptimizedHasBeenSet = true;
    }
    XmlNode enaSupportNode = resultNode.FirstChild("enaSupport");
    if(!enaSupportNode.IsNull())
    {
      m_enaSupport = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enaSupportNode.GetText()).c_str()).c_str());
      m_enaSupportHasBeenSet = true;
    }
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = HypervisorTypeMapper::GetHypervisorTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hypervisorNode.GetText()).c_str()));
      m_hypervisorHasBeenSet = true;
    }
    XmlNode iamInstanceProfileNode = resultNode.FirstChild("iamInstanceProfile");
    if(!iamInstanceProfileNode.IsNull())
    {
      m_iamInstanceProfile = iamInstanceProfileNode;
      m_iamInstanceProfileHasBeenSet = true;
    }
    XmlNode instanceLifecycleNode = resultNode.FirstChild("instanceLifecycle");
    if(!instanceLifecycleNode.IsNull())
    {
      m_instanceLifecycle = InstanceLifecycleTypeMapper::GetInstanceLifecycleTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceLifecycleNode.GetText()).c_str()));
      m_instanceLifecycleHasBeenSet = true;
    }
    XmlNode elasticGpuAssociationsNode = resultNode.FirstChild("elasticGpuAssociationSet");
    if(!elasticGpuAssociationsNode.IsNull())
    {
      XmlNode elasticGpuAssociationsMember = elasticGpuAssociationsNode.FirstChild("item");
      m_elasticGpuAssociationsHasBeenSet = !elasticGpuAssociationsMember.IsNull();
      while(!elasticGpuAssociationsMember.IsNull())
      {
        m_elasticGpuAssociations.push_back(elasticGpuAssociationsMember);
        elasticGpuAssociationsMember = elasticGpuAssociationsMember.NextNode("item");
      }

      m_elasticGpuAssociationsHasBeenSet = true;
    }
    XmlNode elasticInferenceAcceleratorAssociationsNode = resultNode.FirstChild("elasticInferenceAcceleratorAssociationSet");
    if(!elasticInferenceAcceleratorAssociationsNode.IsNull())
    {
      XmlNode elasticInferenceAcceleratorAssociationsMember = elasticInferenceAcceleratorAssociationsNode.FirstChild("item");
      m_elasticInferenceAcceleratorAssociationsHasBeenSet = !elasticInferenceAcceleratorAssociationsMember.IsNull();
      while(!elasticInferenceAcceleratorAssociationsMember.IsNull())
      {
        m_elasticInferenceAcceleratorAssociations.push_back(elasticInferenceAcceleratorAssociationsMember);
        elasticInferenceAcceleratorAssociationsMember = elasticInferenceAcceleratorAssociationsMember.NextNode("item");
      }

      m_elasticInferenceAcceleratorAssociationsHasBeenSet = true;
    }
    XmlNode networkInterfacesNode = resultNode.FirstChild("networkInterfaceSet");
    if(!networkInterfacesNode.IsNull())
    {
      XmlNode networkInterfacesMember = networkInterfacesNode.FirstChild("item");
      m_networkInterfacesHasBeenSet = !networkInterfacesMember.IsNull();
      while(!networkInterfacesMember.IsNull())
      {
        m_networkInterfaces.push_back(networkInterfacesMember);
        networkInterfacesMember = networkInterfacesMember.NextNode("item");
      }

      m_networkInterfacesHasBeenSet = true;
    }
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
    }
    XmlNode rootDeviceNameNode = resultNode.FirstChild("rootDeviceName");
    if(!rootDeviceNameNode.IsNull())
    {
      m_rootDeviceName = Aws::Utils::Xml::DecodeEscapedXmlText(rootDeviceNameNode.GetText());
      m_rootDeviceNameHasBeenSet = true;
    }
    XmlNode rootDeviceTypeNode = resultNode.FirstChild("rootDeviceType");
    if(!rootDeviceTypeNode.IsNull())
    {
      m_rootDeviceType = DeviceTypeMapper::GetDeviceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(rootDeviceTypeNode.GetText()).c_str()));
      m_rootDeviceTypeHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("groupSet");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("item");
      m_securityGroupsHasBeenSet = !securityGroupsMember.IsNull();
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember);
        securityGroupsMember = securityGroupsMember.NextNode("item");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode sourceDestCheckNode = resultNode.FirstChild("sourceDestCheck");
    if(!sourceDestCheckNode.IsNull())
    {
      m_sourceDestCheck = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceDestCheckNode.GetText()).c_str()).c_str());
      m_sourceDestCheckHasBeenSet = true;
    }
    XmlNode spotInstanceRequestIdNode = resultNode.FirstChild("spotInstanceRequestId");
    if(!spotInstanceRequestIdNode.IsNull())
    {
      m_spotInstanceRequestId = Aws::Utils::Xml::DecodeEscapedXmlText(spotInstanceRequestIdNode.GetText());
      m_spotInstanceRequestIdHasBeenSet = true;
    }
    XmlNode sriovNetSupportNode = resultNode.FirstChild("sriovNetSupport");
    if(!sriovNetSupportNode.IsNull())
    {
      m_sriovNetSupport = Aws::Utils::Xml::DecodeEscapedXmlText(sriovNetSupportNode.GetText());
      m_sriovNetSupportHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("stateReason");
    if(!stateReasonNode.IsNull())
    {
      m_stateReason = stateReasonNode;
      m_stateReasonHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode virtualizationTypeNode = resultNode.FirstChild("virtualizationType");
    if(!virtualizationTypeNode.IsNull())
    {
      m_virtualizationType = VirtualizationTypeMapper::GetVirtualizationTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(virtualizationTypeNode.GetText()).c_str()));
      m_virtualizationTypeHasBeenSet = true;
    }
    XmlNode cpuOptionsNode = resultNode.FirstChild("cpuOptions");
    if(!cpuOptionsNode.IsNull())
    {
      m_cpuOptions = cpuOptionsNode;
      m_cpuOptionsHasBeenSet = true;
    }
    XmlNode capacityBlockIdNode = resultNode.FirstChild("capacityBlockId");
    if(!capacityBlockIdNode.IsNull())
    {
      m_capacityBlockId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityBlockIdNode.GetText());
      m_capacityBlockIdHasBeenSet = true;
    }
    XmlNode capacityReservationIdNode = resultNode.FirstChild("capacityReservationId");
    if(!capacityReservationIdNode.IsNull())
    {
      m_capacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationIdNode.GetText());
      m_capacityReservationIdHasBeenSet = true;
    }
    XmlNode capacityReservationSpecificationNode = resultNode.FirstChild("capacityReservationSpecification");
    if(!capacityReservationSpecificationNode.IsNull())
    {
      m_capacityReservationSpecification = capacityReservationSpecificationNode;
      m_capacityReservationSpecificationHasBeenSet = true;
    }
    XmlNode hibernationOptionsNode = resultNode.FirstChild("hibernationOptions");
    if(!hibernationOptionsNode.IsNull())
    {
      m_hibernationOptions = hibernationOptionsNode;
      m_hibernationOptionsHasBeenSet = true;
    }
    XmlNode licensesNode = resultNode.FirstChild("licenseSet");
    if(!licensesNode.IsNull())
    {
      XmlNode licensesMember = licensesNode.FirstChild("item");
      m_licensesHasBeenSet = !licensesMember.IsNull();
      while(!licensesMember.IsNull())
      {
        m_licenses.push_back(licensesMember);
        licensesMember = licensesMember.NextNode("item");
      }

      m_licensesHasBeenSet = true;
    }
    XmlNode metadataOptionsNode = resultNode.FirstChild("metadataOptions");
    if(!metadataOptionsNode.IsNull())
    {
      m_metadataOptions = metadataOptionsNode;
      m_metadataOptionsHasBeenSet = true;
    }
    XmlNode enclaveOptionsNode = resultNode.FirstChild("enclaveOptions");
    if(!enclaveOptionsNode.IsNull())
    {
      m_enclaveOptions = enclaveOptionsNode;
      m_enclaveOptionsHasBeenSet = true;
    }
    XmlNode bootModeNode = resultNode.FirstChild("bootMode");
    if(!bootModeNode.IsNull())
    {
      m_bootMode = BootModeValuesMapper::GetBootModeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bootModeNode.GetText()).c_str()));
      m_bootModeHasBeenSet = true;
    }
    XmlNode platformDetailsNode = resultNode.FirstChild("platformDetails");
    if(!platformDetailsNode.IsNull())
    {
      m_platformDetails = Aws::Utils::Xml::DecodeEscapedXmlText(platformDetailsNode.GetText());
      m_platformDetailsHasBeenSet = true;
    }
    XmlNode usageOperationNode = resultNode.FirstChild("usageOperation");
    if(!usageOperationNode.IsNull())
    {
      m_usageOperation = Aws::Utils::Xml::DecodeEscapedXmlText(usageOperationNode.GetText());
      m_usageOperationHasBeenSet = true;
    }
    XmlNode usageOperationUpdateTimeNode = resultNode.FirstChild("usageOperationUpdateTime");
    if(!usageOperationUpdateTimeNode.IsNull())
    {
      m_usageOperationUpdateTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(usageOperationUpdateTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_usageOperationUpdateTimeHasBeenSet = true;
    }
    XmlNode privateDnsNameOptionsNode = resultNode.FirstChild("privateDnsNameOptions");
    if(!privateDnsNameOptionsNode.IsNull())
    {
      m_privateDnsNameOptions = privateDnsNameOptionsNode;
      m_privateDnsNameOptionsHasBeenSet = true;
    }
    XmlNode ipv6AddressNode = resultNode.FirstChild("ipv6Address");
    if(!ipv6AddressNode.IsNull())
    {
      m_ipv6Address = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6AddressNode.GetText());
      m_ipv6AddressHasBeenSet = true;
    }
    XmlNode tpmSupportNode = resultNode.FirstChild("tpmSupport");
    if(!tpmSupportNode.IsNull())
    {
      m_tpmSupport = Aws::Utils::Xml::DecodeEscapedXmlText(tpmSupportNode.GetText());
      m_tpmSupportHasBeenSet = true;
    }
    XmlNode maintenanceOptionsNode = resultNode.FirstChild("maintenanceOptions");
    if(!maintenanceOptionsNode.IsNull())
    {
      m_maintenanceOptions = maintenanceOptionsNode;
      m_maintenanceOptionsHasBeenSet = true;
    }
    XmlNode currentInstanceBootModeNode = resultNode.FirstChild("currentInstanceBootMode");
    if(!currentInstanceBootModeNode.IsNull())
    {
      m_currentInstanceBootMode = InstanceBootModeValuesMapper::GetInstanceBootModeValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currentInstanceBootModeNode.GetText()).c_str()));
      m_currentInstanceBootModeHasBeenSet = true;
    }
    XmlNode networkPerformanceOptionsNode = resultNode.FirstChild("networkPerformanceOptions");
    if(!networkPerformanceOptionsNode.IsNull())
    {
      m_networkPerformanceOptions = networkPerformanceOptionsNode;
      m_networkPerformanceOptionsHasBeenSet = true;
    }
    XmlNode operatorNode = resultNode.FirstChild("operator");
    if(!operatorNode.IsNull())
    {
      m_operator = operatorNode;
      m_operatorHasBeenSet = true;
    }
    XmlNode instanceIdNode = resultNode.FirstChild("instanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = Aws::Utils::Xml::DecodeEscapedXmlText(instanceIdNode.GetText());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if(!imageIdNode.IsNull())
    {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("instanceState");
    if(!stateNode.IsNull())
    {
      m_state = stateNode;
      m_stateHasBeenSet = true;
    }
    XmlNode privateDnsNameNode = resultNode.FirstChild("privateDnsName");
    if(!privateDnsNameNode.IsNull())
    {
      m_privateDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsNameNode.GetText());
      m_privateDnsNameHasBeenSet = true;
    }
    XmlNode publicDnsNameNode = resultNode.FirstChild("dnsName");
    if(!publicDnsNameNode.IsNull())
    {
      m_publicDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(publicDnsNameNode.GetText());
      m_publicDnsNameHasBeenSet = true;
    }
    XmlNode stateTransitionReasonNode = resultNode.FirstChild("reason");
    if(!stateTransitionReasonNode.IsNull())
    {
      m_stateTransitionReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateTransitionReasonNode.GetText());
      m_stateTransitionReasonHasBeenSet = true;
    }
    XmlNode keyNameNode = resultNode.FirstChild("keyName");
    if(!keyNameNode.IsNull())
    {
      m_keyName = Aws::Utils::Xml::DecodeEscapedXmlText(keyNameNode.GetText());
      m_keyNameHasBeenSet = true;
    }
    XmlNode amiLaunchIndexNode = resultNode.FirstChild("amiLaunchIndex");
    if(!amiLaunchIndexNode.IsNull())
    {
      m_amiLaunchIndex = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amiLaunchIndexNode.GetText()).c_str()).c_str());
      m_amiLaunchIndexHasBeenSet = true;
    }
    XmlNode productCodesNode = resultNode.FirstChild("productCodes");
    if(!productCodesNode.IsNull())
    {
      XmlNode productCodesMember = productCodesNode.FirstChild("item");
      m_productCodesHasBeenSet = !productCodesMember.IsNull();
      while(!productCodesMember.IsNull())
      {
        m_productCodes.push_back(productCodesMember);
        productCodesMember = productCodesMember.NextNode("item");
      }

      m_productCodesHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()));
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode launchTimeNode = resultNode.FirstChild("launchTime");
    if(!launchTimeNode.IsNull())
    {
      m_launchTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(launchTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_launchTimeHasBeenSet = true;
    }
    XmlNode placementNode = resultNode.FirstChild("placement");
    if(!placementNode.IsNull())
    {
      m_placement = placementNode;
      m_placementHasBeenSet = true;
    }
    XmlNode kernelIdNode = resultNode.FirstChild("kernelId");
    if(!kernelIdNode.IsNull())
    {
      m_kernelId = Aws::Utils::Xml::DecodeEscapedXmlText(kernelIdNode.GetText());
      m_kernelIdHasBeenSet = true;
    }
    XmlNode ramdiskIdNode = resultNode.FirstChild("ramdiskId");
    if(!ramdiskIdNode.IsNull())
    {
      m_ramdiskId = Aws::Utils::Xml::DecodeEscapedXmlText(ramdiskIdNode.GetText());
      m_ramdiskIdHasBeenSet = true;
    }
    XmlNode platformNode = resultNode.FirstChild("platform");
    if(!platformNode.IsNull())
    {
      m_platform = PlatformValuesMapper::GetPlatformValuesForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(platformNode.GetText()).c_str()));
      m_platformHasBeenSet = true;
    }
    XmlNode monitoringNode = resultNode.FirstChild("monitoring");
    if(!monitoringNode.IsNull())
    {
      m_monitoring = monitoringNode;
      m_monitoringHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("subnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("privateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressNode.GetText());
      m_privateIpAddressHasBeenSet = true;
    }
    XmlNode publicIpAddressNode = resultNode.FirstChild("ipAddress");
    if(!publicIpAddressNode.IsNull())
    {
      m_publicIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpAddressNode.GetText());
      m_publicIpAddressHasBeenSet = true;
    }
  }

  return *this;
}

void Instance::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_architectureHasBeenSet)
  {
      oStream << location << index << locationValue << ".Architecture=" << StringUtils::URLEncode(ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture)) << "&";
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

  if(m_clientTokenHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }

  if(m_enaSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnaSupport=" << std::boolalpha << m_enaSupport << "&";
  }

  if(m_hypervisorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Hypervisor=" << StringUtils::URLEncode(HypervisorTypeMapper::GetNameForHypervisorType(m_hypervisor)) << "&";
  }

  if(m_iamInstanceProfileHasBeenSet)
  {
      Aws::StringStream iamInstanceProfileLocationAndMemberSs;
      iamInstanceProfileLocationAndMemberSs << location << index << locationValue << ".IamInstanceProfile";
      m_iamInstanceProfile.OutputToStream(oStream, iamInstanceProfileLocationAndMemberSs.str().c_str());
  }

  if(m_instanceLifecycleHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceLifecycle=" << StringUtils::URLEncode(InstanceLifecycleTypeMapper::GetNameForInstanceLifecycleType(m_instanceLifecycle)) << "&";
  }

  if(m_elasticGpuAssociationsHasBeenSet)
  {
      unsigned elasticGpuAssociationsIdx = 1;
      for(auto& item : m_elasticGpuAssociations)
      {
        Aws::StringStream elasticGpuAssociationsSs;
        elasticGpuAssociationsSs << location << index << locationValue << ".ElasticGpuAssociationSet." << elasticGpuAssociationsIdx++;
        item.OutputToStream(oStream, elasticGpuAssociationsSs.str().c_str());
      }
  }

  if(m_elasticInferenceAcceleratorAssociationsHasBeenSet)
  {
      unsigned elasticInferenceAcceleratorAssociationsIdx = 1;
      for(auto& item : m_elasticInferenceAcceleratorAssociations)
      {
        Aws::StringStream elasticInferenceAcceleratorAssociationsSs;
        elasticInferenceAcceleratorAssociationsSs << location << index << locationValue << ".ElasticInferenceAcceleratorAssociationSet." << elasticInferenceAcceleratorAssociationsIdx++;
        item.OutputToStream(oStream, elasticInferenceAcceleratorAssociationsSs.str().c_str());
      }
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

  if(m_outpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_rootDeviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RootDeviceName=" << StringUtils::URLEncode(m_rootDeviceName.c_str()) << "&";
  }

  if(m_rootDeviceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".RootDeviceType=" << StringUtils::URLEncode(DeviceTypeMapper::GetNameForDeviceType(m_rootDeviceType)) << "&";
  }

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

  if(m_sourceDestCheckHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceDestCheck=" << std::boolalpha << m_sourceDestCheck << "&";
  }

  if(m_spotInstanceRequestIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotInstanceRequestId=" << StringUtils::URLEncode(m_spotInstanceRequestId.c_str()) << "&";
  }

  if(m_sriovNetSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".SriovNetSupport=" << StringUtils::URLEncode(m_sriovNetSupport.c_str()) << "&";
  }

  if(m_stateReasonHasBeenSet)
  {
      Aws::StringStream stateReasonLocationAndMemberSs;
      stateReasonLocationAndMemberSs << location << index << locationValue << ".StateReason";
      m_stateReason.OutputToStream(oStream, stateReasonLocationAndMemberSs.str().c_str());
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".VirtualizationType=" << StringUtils::URLEncode(VirtualizationTypeMapper::GetNameForVirtualizationType(m_virtualizationType)) << "&";
  }

  if(m_cpuOptionsHasBeenSet)
  {
      Aws::StringStream cpuOptionsLocationAndMemberSs;
      cpuOptionsLocationAndMemberSs << location << index << locationValue << ".CpuOptions";
      m_cpuOptions.OutputToStream(oStream, cpuOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_capacityBlockIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityBlockId=" << StringUtils::URLEncode(m_capacityBlockId.c_str()) << "&";
  }

  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }

  if(m_capacityReservationSpecificationHasBeenSet)
  {
      Aws::StringStream capacityReservationSpecificationLocationAndMemberSs;
      capacityReservationSpecificationLocationAndMemberSs << location << index << locationValue << ".CapacityReservationSpecification";
      m_capacityReservationSpecification.OutputToStream(oStream, capacityReservationSpecificationLocationAndMemberSs.str().c_str());
  }

  if(m_hibernationOptionsHasBeenSet)
  {
      Aws::StringStream hibernationOptionsLocationAndMemberSs;
      hibernationOptionsLocationAndMemberSs << location << index << locationValue << ".HibernationOptions";
      m_hibernationOptions.OutputToStream(oStream, hibernationOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_licensesHasBeenSet)
  {
      unsigned licensesIdx = 1;
      for(auto& item : m_licenses)
      {
        Aws::StringStream licensesSs;
        licensesSs << location << index << locationValue << ".LicenseSet." << licensesIdx++;
        item.OutputToStream(oStream, licensesSs.str().c_str());
      }
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

  if(m_bootModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".BootMode=" << StringUtils::URLEncode(BootModeValuesMapper::GetNameForBootModeValues(m_bootMode)) << "&";
  }

  if(m_platformDetailsHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformDetails=" << StringUtils::URLEncode(m_platformDetails.c_str()) << "&";
  }

  if(m_usageOperationHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsageOperation=" << StringUtils::URLEncode(m_usageOperation.c_str()) << "&";
  }

  if(m_usageOperationUpdateTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsageOperationUpdateTime=" << StringUtils::URLEncode(m_usageOperationUpdateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_privateDnsNameOptionsHasBeenSet)
  {
      Aws::StringStream privateDnsNameOptionsLocationAndMemberSs;
      privateDnsNameOptionsLocationAndMemberSs << location << index << locationValue << ".PrivateDnsNameOptions";
      m_privateDnsNameOptions.OutputToStream(oStream, privateDnsNameOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_ipv6AddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }

  if(m_tpmSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".TpmSupport=" << StringUtils::URLEncode(m_tpmSupport.c_str()) << "&";
  }

  if(m_maintenanceOptionsHasBeenSet)
  {
      Aws::StringStream maintenanceOptionsLocationAndMemberSs;
      maintenanceOptionsLocationAndMemberSs << location << index << locationValue << ".MaintenanceOptions";
      m_maintenanceOptions.OutputToStream(oStream, maintenanceOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_currentInstanceBootModeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentInstanceBootMode=" << StringUtils::URLEncode(InstanceBootModeValuesMapper::GetNameForInstanceBootModeValues(m_currentInstanceBootMode)) << "&";
  }

  if(m_networkPerformanceOptionsHasBeenSet)
  {
      Aws::StringStream networkPerformanceOptionsLocationAndMemberSs;
      networkPerformanceOptionsLocationAndMemberSs << location << index << locationValue << ".NetworkPerformanceOptions";
      m_networkPerformanceOptions.OutputToStream(oStream, networkPerformanceOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_operatorHasBeenSet)
  {
      Aws::StringStream operatorLocationAndMemberSs;
      operatorLocationAndMemberSs << location << index << locationValue << ".Operator";
      m_operator.OutputToStream(oStream, operatorLocationAndMemberSs.str().c_str());
  }

  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_imageIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      Aws::StringStream stateLocationAndMemberSs;
      stateLocationAndMemberSs << location << index << locationValue << ".State";
      m_state.OutputToStream(oStream, stateLocationAndMemberSs.str().c_str());
  }

  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }

  if(m_publicDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicDnsName=" << StringUtils::URLEncode(m_publicDnsName.c_str()) << "&";
  }

  if(m_stateTransitionReasonHasBeenSet)
  {
      oStream << location << index << locationValue << ".StateTransitionReason=" << StringUtils::URLEncode(m_stateTransitionReason.c_str()) << "&";
  }

  if(m_keyNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }

  if(m_amiLaunchIndexHasBeenSet)
  {
      oStream << location << index << locationValue << ".AmiLaunchIndex=" << m_amiLaunchIndex << "&";
  }

  if(m_productCodesHasBeenSet)
  {
      unsigned productCodesIdx = 1;
      for(auto& item : m_productCodes)
      {
        Aws::StringStream productCodesSs;
        productCodesSs << location << index << locationValue << ".ProductCodes." << productCodesIdx++;
        item.OutputToStream(oStream, productCodesSs.str().c_str());
      }
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(InstanceTypeMapper::GetNameForInstanceType(m_instanceType)) << "&";
  }

  if(m_launchTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchTime=" << StringUtils::URLEncode(m_launchTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_placementHasBeenSet)
  {
      Aws::StringStream placementLocationAndMemberSs;
      placementLocationAndMemberSs << location << index << locationValue << ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMemberSs.str().c_str());
  }

  if(m_kernelIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }

  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }

  if(m_platformHasBeenSet)
  {
      oStream << location << index << locationValue << ".Platform=" << StringUtils::URLEncode(PlatformValuesMapper::GetNameForPlatformValues(m_platform)) << "&";
  }

  if(m_monitoringHasBeenSet)
  {
      Aws::StringStream monitoringLocationAndMemberSs;
      monitoringLocationAndMemberSs << location << index << locationValue << ".Monitoring";
      m_monitoring.OutputToStream(oStream, monitoringLocationAndMemberSs.str().c_str());
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_publicIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIpAddress=" << StringUtils::URLEncode(m_publicIpAddress.c_str()) << "&";
  }

}

void Instance::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_architectureHasBeenSet)
  {
      oStream << location << ".Architecture=" << StringUtils::URLEncode(ArchitectureValuesMapper::GetNameForArchitectureValues(m_architecture)) << "&";
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
  if(m_clientTokenHasBeenSet)
  {
      oStream << location << ".ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }
  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }
  if(m_enaSupportHasBeenSet)
  {
      oStream << location << ".EnaSupport=" << std::boolalpha << m_enaSupport << "&";
  }
  if(m_hypervisorHasBeenSet)
  {
      oStream << location << ".Hypervisor=" << StringUtils::URLEncode(HypervisorTypeMapper::GetNameForHypervisorType(m_hypervisor)) << "&";
  }
  if(m_iamInstanceProfileHasBeenSet)
  {
      Aws::String iamInstanceProfileLocationAndMember(location);
      iamInstanceProfileLocationAndMember += ".IamInstanceProfile";
      m_iamInstanceProfile.OutputToStream(oStream, iamInstanceProfileLocationAndMember.c_str());
  }
  if(m_instanceLifecycleHasBeenSet)
  {
      oStream << location << ".InstanceLifecycle=" << StringUtils::URLEncode(InstanceLifecycleTypeMapper::GetNameForInstanceLifecycleType(m_instanceLifecycle)) << "&";
  }
  if(m_elasticGpuAssociationsHasBeenSet)
  {
      unsigned elasticGpuAssociationsIdx = 1;
      for(auto& item : m_elasticGpuAssociations)
      {
        Aws::StringStream elasticGpuAssociationsSs;
        elasticGpuAssociationsSs << location << ".ElasticGpuAssociationSet." << elasticGpuAssociationsIdx++;
        item.OutputToStream(oStream, elasticGpuAssociationsSs.str().c_str());
      }
  }
  if(m_elasticInferenceAcceleratorAssociationsHasBeenSet)
  {
      unsigned elasticInferenceAcceleratorAssociationsIdx = 1;
      for(auto& item : m_elasticInferenceAcceleratorAssociations)
      {
        Aws::StringStream elasticInferenceAcceleratorAssociationsSs;
        elasticInferenceAcceleratorAssociationsSs << location << ".ElasticInferenceAcceleratorAssociationSet." << elasticInferenceAcceleratorAssociationsIdx++;
        item.OutputToStream(oStream, elasticInferenceAcceleratorAssociationsSs.str().c_str());
      }
  }
  if(m_networkInterfacesHasBeenSet)
  {
      unsigned networkInterfacesIdx = 1;
      for(auto& item : m_networkInterfaces)
      {
        Aws::StringStream networkInterfacesSs;
        networkInterfacesSs << location << ".NetworkInterfaceSet." << networkInterfacesIdx++;
        item.OutputToStream(oStream, networkInterfacesSs.str().c_str());
      }
  }
  if(m_outpostArnHasBeenSet)
  {
      oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }
  if(m_rootDeviceNameHasBeenSet)
  {
      oStream << location << ".RootDeviceName=" << StringUtils::URLEncode(m_rootDeviceName.c_str()) << "&";
  }
  if(m_rootDeviceTypeHasBeenSet)
  {
      oStream << location << ".RootDeviceType=" << StringUtils::URLEncode(DeviceTypeMapper::GetNameForDeviceType(m_rootDeviceType)) << "&";
  }
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location << ".GroupSet." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }
  if(m_sourceDestCheckHasBeenSet)
  {
      oStream << location << ".SourceDestCheck=" << std::boolalpha << m_sourceDestCheck << "&";
  }
  if(m_spotInstanceRequestIdHasBeenSet)
  {
      oStream << location << ".SpotInstanceRequestId=" << StringUtils::URLEncode(m_spotInstanceRequestId.c_str()) << "&";
  }
  if(m_sriovNetSupportHasBeenSet)
  {
      oStream << location << ".SriovNetSupport=" << StringUtils::URLEncode(m_sriovNetSupport.c_str()) << "&";
  }
  if(m_stateReasonHasBeenSet)
  {
      Aws::String stateReasonLocationAndMember(location);
      stateReasonLocationAndMember += ".StateReason";
      m_stateReason.OutputToStream(oStream, stateReasonLocationAndMember.c_str());
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_virtualizationTypeHasBeenSet)
  {
      oStream << location << ".VirtualizationType=" << StringUtils::URLEncode(VirtualizationTypeMapper::GetNameForVirtualizationType(m_virtualizationType)) << "&";
  }
  if(m_cpuOptionsHasBeenSet)
  {
      Aws::String cpuOptionsLocationAndMember(location);
      cpuOptionsLocationAndMember += ".CpuOptions";
      m_cpuOptions.OutputToStream(oStream, cpuOptionsLocationAndMember.c_str());
  }
  if(m_capacityBlockIdHasBeenSet)
  {
      oStream << location << ".CapacityBlockId=" << StringUtils::URLEncode(m_capacityBlockId.c_str()) << "&";
  }
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }
  if(m_capacityReservationSpecificationHasBeenSet)
  {
      Aws::String capacityReservationSpecificationLocationAndMember(location);
      capacityReservationSpecificationLocationAndMember += ".CapacityReservationSpecification";
      m_capacityReservationSpecification.OutputToStream(oStream, capacityReservationSpecificationLocationAndMember.c_str());
  }
  if(m_hibernationOptionsHasBeenSet)
  {
      Aws::String hibernationOptionsLocationAndMember(location);
      hibernationOptionsLocationAndMember += ".HibernationOptions";
      m_hibernationOptions.OutputToStream(oStream, hibernationOptionsLocationAndMember.c_str());
  }
  if(m_licensesHasBeenSet)
  {
      unsigned licensesIdx = 1;
      for(auto& item : m_licenses)
      {
        Aws::StringStream licensesSs;
        licensesSs << location << ".LicenseSet." << licensesIdx++;
        item.OutputToStream(oStream, licensesSs.str().c_str());
      }
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
  if(m_bootModeHasBeenSet)
  {
      oStream << location << ".BootMode=" << StringUtils::URLEncode(BootModeValuesMapper::GetNameForBootModeValues(m_bootMode)) << "&";
  }
  if(m_platformDetailsHasBeenSet)
  {
      oStream << location << ".PlatformDetails=" << StringUtils::URLEncode(m_platformDetails.c_str()) << "&";
  }
  if(m_usageOperationHasBeenSet)
  {
      oStream << location << ".UsageOperation=" << StringUtils::URLEncode(m_usageOperation.c_str()) << "&";
  }
  if(m_usageOperationUpdateTimeHasBeenSet)
  {
      oStream << location << ".UsageOperationUpdateTime=" << StringUtils::URLEncode(m_usageOperationUpdateTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_privateDnsNameOptionsHasBeenSet)
  {
      Aws::String privateDnsNameOptionsLocationAndMember(location);
      privateDnsNameOptionsLocationAndMember += ".PrivateDnsNameOptions";
      m_privateDnsNameOptions.OutputToStream(oStream, privateDnsNameOptionsLocationAndMember.c_str());
  }
  if(m_ipv6AddressHasBeenSet)
  {
      oStream << location << ".Ipv6Address=" << StringUtils::URLEncode(m_ipv6Address.c_str()) << "&";
  }
  if(m_tpmSupportHasBeenSet)
  {
      oStream << location << ".TpmSupport=" << StringUtils::URLEncode(m_tpmSupport.c_str()) << "&";
  }
  if(m_maintenanceOptionsHasBeenSet)
  {
      Aws::String maintenanceOptionsLocationAndMember(location);
      maintenanceOptionsLocationAndMember += ".MaintenanceOptions";
      m_maintenanceOptions.OutputToStream(oStream, maintenanceOptionsLocationAndMember.c_str());
  }
  if(m_currentInstanceBootModeHasBeenSet)
  {
      oStream << location << ".CurrentInstanceBootMode=" << StringUtils::URLEncode(InstanceBootModeValuesMapper::GetNameForInstanceBootModeValues(m_currentInstanceBootMode)) << "&";
  }
  if(m_networkPerformanceOptionsHasBeenSet)
  {
      Aws::String networkPerformanceOptionsLocationAndMember(location);
      networkPerformanceOptionsLocationAndMember += ".NetworkPerformanceOptions";
      m_networkPerformanceOptions.OutputToStream(oStream, networkPerformanceOptionsLocationAndMember.c_str());
  }
  if(m_operatorHasBeenSet)
  {
      Aws::String operatorLocationAndMember(location);
      operatorLocationAndMember += ".Operator";
      m_operator.OutputToStream(oStream, operatorLocationAndMember.c_str());
  }
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_imageIdHasBeenSet)
  {
      oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      Aws::String stateLocationAndMember(location);
      stateLocationAndMember += ".State";
      m_state.OutputToStream(oStream, stateLocationAndMember.c_str());
  }
  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }
  if(m_publicDnsNameHasBeenSet)
  {
      oStream << location << ".PublicDnsName=" << StringUtils::URLEncode(m_publicDnsName.c_str()) << "&";
  }
  if(m_stateTransitionReasonHasBeenSet)
  {
      oStream << location << ".StateTransitionReason=" << StringUtils::URLEncode(m_stateTransitionReason.c_str()) << "&";
  }
  if(m_keyNameHasBeenSet)
  {
      oStream << location << ".KeyName=" << StringUtils::URLEncode(m_keyName.c_str()) << "&";
  }
  if(m_amiLaunchIndexHasBeenSet)
  {
      oStream << location << ".AmiLaunchIndex=" << m_amiLaunchIndex << "&";
  }
  if(m_productCodesHasBeenSet)
  {
      unsigned productCodesIdx = 1;
      for(auto& item : m_productCodes)
      {
        Aws::StringStream productCodesSs;
        productCodesSs << location << ".ProductCodes." << productCodesIdx++;
        item.OutputToStream(oStream, productCodesSs.str().c_str());
      }
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(InstanceTypeMapper::GetNameForInstanceType(m_instanceType)) << "&";
  }
  if(m_launchTimeHasBeenSet)
  {
      oStream << location << ".LaunchTime=" << StringUtils::URLEncode(m_launchTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_placementHasBeenSet)
  {
      Aws::String placementLocationAndMember(location);
      placementLocationAndMember += ".Placement";
      m_placement.OutputToStream(oStream, placementLocationAndMember.c_str());
  }
  if(m_kernelIdHasBeenSet)
  {
      oStream << location << ".KernelId=" << StringUtils::URLEncode(m_kernelId.c_str()) << "&";
  }
  if(m_ramdiskIdHasBeenSet)
  {
      oStream << location << ".RamdiskId=" << StringUtils::URLEncode(m_ramdiskId.c_str()) << "&";
  }
  if(m_platformHasBeenSet)
  {
      oStream << location << ".Platform=" << StringUtils::URLEncode(PlatformValuesMapper::GetNameForPlatformValues(m_platform)) << "&";
  }
  if(m_monitoringHasBeenSet)
  {
      Aws::String monitoringLocationAndMember(location);
      monitoringLocationAndMember += ".Monitoring";
      m_monitoring.OutputToStream(oStream, monitoringLocationAndMember.c_str());
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
  if(m_publicIpAddressHasBeenSet)
  {
      oStream << location << ".PublicIpAddress=" << StringUtils::URLEncode(m_publicIpAddress.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
