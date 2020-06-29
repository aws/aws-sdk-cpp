/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceTypeInfo.h>
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

InstanceTypeInfo::InstanceTypeInfo() : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_currentGeneration(false),
    m_currentGenerationHasBeenSet(false),
    m_freeTierEligible(false),
    m_freeTierEligibleHasBeenSet(false),
    m_supportedUsageClassesHasBeenSet(false),
    m_supportedRootDeviceTypesHasBeenSet(false),
    m_supportedVirtualizationTypesHasBeenSet(false),
    m_bareMetal(false),
    m_bareMetalHasBeenSet(false),
    m_hypervisor(InstanceTypeHypervisor::NOT_SET),
    m_hypervisorHasBeenSet(false),
    m_processorInfoHasBeenSet(false),
    m_vCpuInfoHasBeenSet(false),
    m_memoryInfoHasBeenSet(false),
    m_instanceStorageSupported(false),
    m_instanceStorageSupportedHasBeenSet(false),
    m_instanceStorageInfoHasBeenSet(false),
    m_ebsInfoHasBeenSet(false),
    m_networkInfoHasBeenSet(false),
    m_gpuInfoHasBeenSet(false),
    m_fpgaInfoHasBeenSet(false),
    m_placementGroupInfoHasBeenSet(false),
    m_inferenceAcceleratorInfoHasBeenSet(false),
    m_hibernationSupported(false),
    m_hibernationSupportedHasBeenSet(false),
    m_burstablePerformanceSupported(false),
    m_burstablePerformanceSupportedHasBeenSet(false),
    m_dedicatedHostsSupported(false),
    m_dedicatedHostsSupportedHasBeenSet(false),
    m_autoRecoverySupported(false),
    m_autoRecoverySupportedHasBeenSet(false)
{
}

InstanceTypeInfo::InstanceTypeInfo(const XmlNode& xmlNode) : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_currentGeneration(false),
    m_currentGenerationHasBeenSet(false),
    m_freeTierEligible(false),
    m_freeTierEligibleHasBeenSet(false),
    m_supportedUsageClassesHasBeenSet(false),
    m_supportedRootDeviceTypesHasBeenSet(false),
    m_supportedVirtualizationTypesHasBeenSet(false),
    m_bareMetal(false),
    m_bareMetalHasBeenSet(false),
    m_hypervisor(InstanceTypeHypervisor::NOT_SET),
    m_hypervisorHasBeenSet(false),
    m_processorInfoHasBeenSet(false),
    m_vCpuInfoHasBeenSet(false),
    m_memoryInfoHasBeenSet(false),
    m_instanceStorageSupported(false),
    m_instanceStorageSupportedHasBeenSet(false),
    m_instanceStorageInfoHasBeenSet(false),
    m_ebsInfoHasBeenSet(false),
    m_networkInfoHasBeenSet(false),
    m_gpuInfoHasBeenSet(false),
    m_fpgaInfoHasBeenSet(false),
    m_placementGroupInfoHasBeenSet(false),
    m_inferenceAcceleratorInfoHasBeenSet(false),
    m_hibernationSupported(false),
    m_hibernationSupportedHasBeenSet(false),
    m_burstablePerformanceSupported(false),
    m_burstablePerformanceSupportedHasBeenSet(false),
    m_dedicatedHostsSupported(false),
    m_dedicatedHostsSupportedHasBeenSet(false),
    m_autoRecoverySupported(false),
    m_autoRecoverySupportedHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceTypeInfo& InstanceTypeInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode currentGenerationNode = resultNode.FirstChild("currentGeneration");
    if(!currentGenerationNode.IsNull())
    {
      m_currentGeneration = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(currentGenerationNode.GetText()).c_str()).c_str());
      m_currentGenerationHasBeenSet = true;
    }
    XmlNode freeTierEligibleNode = resultNode.FirstChild("freeTierEligible");
    if(!freeTierEligibleNode.IsNull())
    {
      m_freeTierEligible = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(freeTierEligibleNode.GetText()).c_str()).c_str());
      m_freeTierEligibleHasBeenSet = true;
    }
    XmlNode supportedUsageClassesNode = resultNode.FirstChild("supportedUsageClasses");
    if(!supportedUsageClassesNode.IsNull())
    {
      XmlNode supportedUsageClassesMember = supportedUsageClassesNode.FirstChild("item");
      while(!supportedUsageClassesMember.IsNull())
      {
        m_supportedUsageClasses.push_back(UsageClassTypeMapper::GetUsageClassTypeForName(StringUtils::Trim(supportedUsageClassesMember.GetText().c_str())));
        supportedUsageClassesMember = supportedUsageClassesMember.NextNode("item");
      }

      m_supportedUsageClassesHasBeenSet = true;
    }
    XmlNode supportedRootDeviceTypesNode = resultNode.FirstChild("supportedRootDeviceTypes");
    if(!supportedRootDeviceTypesNode.IsNull())
    {
      XmlNode supportedRootDeviceTypesMember = supportedRootDeviceTypesNode.FirstChild("item");
      while(!supportedRootDeviceTypesMember.IsNull())
      {
        m_supportedRootDeviceTypes.push_back(RootDeviceTypeMapper::GetRootDeviceTypeForName(StringUtils::Trim(supportedRootDeviceTypesMember.GetText().c_str())));
        supportedRootDeviceTypesMember = supportedRootDeviceTypesMember.NextNode("item");
      }

      m_supportedRootDeviceTypesHasBeenSet = true;
    }
    XmlNode supportedVirtualizationTypesNode = resultNode.FirstChild("supportedVirtualizationTypes");
    if(!supportedVirtualizationTypesNode.IsNull())
    {
      XmlNode supportedVirtualizationTypesMember = supportedVirtualizationTypesNode.FirstChild("item");
      while(!supportedVirtualizationTypesMember.IsNull())
      {
        m_supportedVirtualizationTypes.push_back(VirtualizationTypeMapper::GetVirtualizationTypeForName(StringUtils::Trim(supportedVirtualizationTypesMember.GetText().c_str())));
        supportedVirtualizationTypesMember = supportedVirtualizationTypesMember.NextNode("item");
      }

      m_supportedVirtualizationTypesHasBeenSet = true;
    }
    XmlNode bareMetalNode = resultNode.FirstChild("bareMetal");
    if(!bareMetalNode.IsNull())
    {
      m_bareMetal = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bareMetalNode.GetText()).c_str()).c_str());
      m_bareMetalHasBeenSet = true;
    }
    XmlNode hypervisorNode = resultNode.FirstChild("hypervisor");
    if(!hypervisorNode.IsNull())
    {
      m_hypervisor = InstanceTypeHypervisorMapper::GetInstanceTypeHypervisorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hypervisorNode.GetText()).c_str()).c_str());
      m_hypervisorHasBeenSet = true;
    }
    XmlNode processorInfoNode = resultNode.FirstChild("processorInfo");
    if(!processorInfoNode.IsNull())
    {
      m_processorInfo = processorInfoNode;
      m_processorInfoHasBeenSet = true;
    }
    XmlNode vCpuInfoNode = resultNode.FirstChild("vCpuInfo");
    if(!vCpuInfoNode.IsNull())
    {
      m_vCpuInfo = vCpuInfoNode;
      m_vCpuInfoHasBeenSet = true;
    }
    XmlNode memoryInfoNode = resultNode.FirstChild("memoryInfo");
    if(!memoryInfoNode.IsNull())
    {
      m_memoryInfo = memoryInfoNode;
      m_memoryInfoHasBeenSet = true;
    }
    XmlNode instanceStorageSupportedNode = resultNode.FirstChild("instanceStorageSupported");
    if(!instanceStorageSupportedNode.IsNull())
    {
      m_instanceStorageSupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceStorageSupportedNode.GetText()).c_str()).c_str());
      m_instanceStorageSupportedHasBeenSet = true;
    }
    XmlNode instanceStorageInfoNode = resultNode.FirstChild("instanceStorageInfo");
    if(!instanceStorageInfoNode.IsNull())
    {
      m_instanceStorageInfo = instanceStorageInfoNode;
      m_instanceStorageInfoHasBeenSet = true;
    }
    XmlNode ebsInfoNode = resultNode.FirstChild("ebsInfo");
    if(!ebsInfoNode.IsNull())
    {
      m_ebsInfo = ebsInfoNode;
      m_ebsInfoHasBeenSet = true;
    }
    XmlNode networkInfoNode = resultNode.FirstChild("networkInfo");
    if(!networkInfoNode.IsNull())
    {
      m_networkInfo = networkInfoNode;
      m_networkInfoHasBeenSet = true;
    }
    XmlNode gpuInfoNode = resultNode.FirstChild("gpuInfo");
    if(!gpuInfoNode.IsNull())
    {
      m_gpuInfo = gpuInfoNode;
      m_gpuInfoHasBeenSet = true;
    }
    XmlNode fpgaInfoNode = resultNode.FirstChild("fpgaInfo");
    if(!fpgaInfoNode.IsNull())
    {
      m_fpgaInfo = fpgaInfoNode;
      m_fpgaInfoHasBeenSet = true;
    }
    XmlNode placementGroupInfoNode = resultNode.FirstChild("placementGroupInfo");
    if(!placementGroupInfoNode.IsNull())
    {
      m_placementGroupInfo = placementGroupInfoNode;
      m_placementGroupInfoHasBeenSet = true;
    }
    XmlNode inferenceAcceleratorInfoNode = resultNode.FirstChild("inferenceAcceleratorInfo");
    if(!inferenceAcceleratorInfoNode.IsNull())
    {
      m_inferenceAcceleratorInfo = inferenceAcceleratorInfoNode;
      m_inferenceAcceleratorInfoHasBeenSet = true;
    }
    XmlNode hibernationSupportedNode = resultNode.FirstChild("hibernationSupported");
    if(!hibernationSupportedNode.IsNull())
    {
      m_hibernationSupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(hibernationSupportedNode.GetText()).c_str()).c_str());
      m_hibernationSupportedHasBeenSet = true;
    }
    XmlNode burstablePerformanceSupportedNode = resultNode.FirstChild("burstablePerformanceSupported");
    if(!burstablePerformanceSupportedNode.IsNull())
    {
      m_burstablePerformanceSupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(burstablePerformanceSupportedNode.GetText()).c_str()).c_str());
      m_burstablePerformanceSupportedHasBeenSet = true;
    }
    XmlNode dedicatedHostsSupportedNode = resultNode.FirstChild("dedicatedHostsSupported");
    if(!dedicatedHostsSupportedNode.IsNull())
    {
      m_dedicatedHostsSupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dedicatedHostsSupportedNode.GetText()).c_str()).c_str());
      m_dedicatedHostsSupportedHasBeenSet = true;
    }
    XmlNode autoRecoverySupportedNode = resultNode.FirstChild("autoRecoverySupported");
    if(!autoRecoverySupportedNode.IsNull())
    {
      m_autoRecoverySupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoRecoverySupportedNode.GetText()).c_str()).c_str());
      m_autoRecoverySupportedHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceTypeInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_currentGenerationHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentGeneration=" << std::boolalpha << m_currentGeneration << "&";
  }

  if(m_freeTierEligibleHasBeenSet)
  {
      oStream << location << index << locationValue << ".FreeTierEligible=" << std::boolalpha << m_freeTierEligible << "&";
  }

  if(m_supportedUsageClassesHasBeenSet)
  {
      unsigned supportedUsageClassesIdx = 1;
      for(auto& item : m_supportedUsageClasses)
      {
        oStream << location << index << locationValue << ".SupportedUsageClasses." << supportedUsageClassesIdx++ << "=" << UsageClassTypeMapper::GetNameForUsageClassType(item) << "&";
      }
  }

  if(m_supportedRootDeviceTypesHasBeenSet)
  {
      unsigned supportedRootDeviceTypesIdx = 1;
      for(auto& item : m_supportedRootDeviceTypes)
      {
        oStream << location << index << locationValue << ".SupportedRootDeviceTypes." << supportedRootDeviceTypesIdx++ << "=" << RootDeviceTypeMapper::GetNameForRootDeviceType(item) << "&";
      }
  }

  if(m_supportedVirtualizationTypesHasBeenSet)
  {
      unsigned supportedVirtualizationTypesIdx = 1;
      for(auto& item : m_supportedVirtualizationTypes)
      {
        oStream << location << index << locationValue << ".SupportedVirtualizationTypes." << supportedVirtualizationTypesIdx++ << "=" << VirtualizationTypeMapper::GetNameForVirtualizationType(item) << "&";
      }
  }

  if(m_bareMetalHasBeenSet)
  {
      oStream << location << index << locationValue << ".BareMetal=" << std::boolalpha << m_bareMetal << "&";
  }

  if(m_hypervisorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Hypervisor=" << InstanceTypeHypervisorMapper::GetNameForInstanceTypeHypervisor(m_hypervisor) << "&";
  }

  if(m_processorInfoHasBeenSet)
  {
      Aws::StringStream processorInfoLocationAndMemberSs;
      processorInfoLocationAndMemberSs << location << index << locationValue << ".ProcessorInfo";
      m_processorInfo.OutputToStream(oStream, processorInfoLocationAndMemberSs.str().c_str());
  }

  if(m_vCpuInfoHasBeenSet)
  {
      Aws::StringStream vCpuInfoLocationAndMemberSs;
      vCpuInfoLocationAndMemberSs << location << index << locationValue << ".VCpuInfo";
      m_vCpuInfo.OutputToStream(oStream, vCpuInfoLocationAndMemberSs.str().c_str());
  }

  if(m_memoryInfoHasBeenSet)
  {
      Aws::StringStream memoryInfoLocationAndMemberSs;
      memoryInfoLocationAndMemberSs << location << index << locationValue << ".MemoryInfo";
      m_memoryInfo.OutputToStream(oStream, memoryInfoLocationAndMemberSs.str().c_str());
  }

  if(m_instanceStorageSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceStorageSupported=" << std::boolalpha << m_instanceStorageSupported << "&";
  }

  if(m_instanceStorageInfoHasBeenSet)
  {
      Aws::StringStream instanceStorageInfoLocationAndMemberSs;
      instanceStorageInfoLocationAndMemberSs << location << index << locationValue << ".InstanceStorageInfo";
      m_instanceStorageInfo.OutputToStream(oStream, instanceStorageInfoLocationAndMemberSs.str().c_str());
  }

  if(m_ebsInfoHasBeenSet)
  {
      Aws::StringStream ebsInfoLocationAndMemberSs;
      ebsInfoLocationAndMemberSs << location << index << locationValue << ".EbsInfo";
      m_ebsInfo.OutputToStream(oStream, ebsInfoLocationAndMemberSs.str().c_str());
  }

  if(m_networkInfoHasBeenSet)
  {
      Aws::StringStream networkInfoLocationAndMemberSs;
      networkInfoLocationAndMemberSs << location << index << locationValue << ".NetworkInfo";
      m_networkInfo.OutputToStream(oStream, networkInfoLocationAndMemberSs.str().c_str());
  }

  if(m_gpuInfoHasBeenSet)
  {
      Aws::StringStream gpuInfoLocationAndMemberSs;
      gpuInfoLocationAndMemberSs << location << index << locationValue << ".GpuInfo";
      m_gpuInfo.OutputToStream(oStream, gpuInfoLocationAndMemberSs.str().c_str());
  }

  if(m_fpgaInfoHasBeenSet)
  {
      Aws::StringStream fpgaInfoLocationAndMemberSs;
      fpgaInfoLocationAndMemberSs << location << index << locationValue << ".FpgaInfo";
      m_fpgaInfo.OutputToStream(oStream, fpgaInfoLocationAndMemberSs.str().c_str());
  }

  if(m_placementGroupInfoHasBeenSet)
  {
      Aws::StringStream placementGroupInfoLocationAndMemberSs;
      placementGroupInfoLocationAndMemberSs << location << index << locationValue << ".PlacementGroupInfo";
      m_placementGroupInfo.OutputToStream(oStream, placementGroupInfoLocationAndMemberSs.str().c_str());
  }

  if(m_inferenceAcceleratorInfoHasBeenSet)
  {
      Aws::StringStream inferenceAcceleratorInfoLocationAndMemberSs;
      inferenceAcceleratorInfoLocationAndMemberSs << location << index << locationValue << ".InferenceAcceleratorInfo";
      m_inferenceAcceleratorInfo.OutputToStream(oStream, inferenceAcceleratorInfoLocationAndMemberSs.str().c_str());
  }

  if(m_hibernationSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".HibernationSupported=" << std::boolalpha << m_hibernationSupported << "&";
  }

  if(m_burstablePerformanceSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".BurstablePerformanceSupported=" << std::boolalpha << m_burstablePerformanceSupported << "&";
  }

  if(m_dedicatedHostsSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".DedicatedHostsSupported=" << std::boolalpha << m_dedicatedHostsSupported << "&";
  }

  if(m_autoRecoverySupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoRecoverySupported=" << std::boolalpha << m_autoRecoverySupported << "&";
  }

}

void InstanceTypeInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_currentGenerationHasBeenSet)
  {
      oStream << location << ".CurrentGeneration=" << std::boolalpha << m_currentGeneration << "&";
  }
  if(m_freeTierEligibleHasBeenSet)
  {
      oStream << location << ".FreeTierEligible=" << std::boolalpha << m_freeTierEligible << "&";
  }
  if(m_supportedUsageClassesHasBeenSet)
  {
      unsigned supportedUsageClassesIdx = 1;
      for(auto& item : m_supportedUsageClasses)
      {
        oStream << location << ".SupportedUsageClasses." << supportedUsageClassesIdx++ << "=" << UsageClassTypeMapper::GetNameForUsageClassType(item) << "&";
      }
  }
  if(m_supportedRootDeviceTypesHasBeenSet)
  {
      unsigned supportedRootDeviceTypesIdx = 1;
      for(auto& item : m_supportedRootDeviceTypes)
      {
        oStream << location << ".SupportedRootDeviceTypes." << supportedRootDeviceTypesIdx++ << "=" << RootDeviceTypeMapper::GetNameForRootDeviceType(item) << "&";
      }
  }
  if(m_supportedVirtualizationTypesHasBeenSet)
  {
      unsigned supportedVirtualizationTypesIdx = 1;
      for(auto& item : m_supportedVirtualizationTypes)
      {
        oStream << location << ".SupportedVirtualizationTypes." << supportedVirtualizationTypesIdx++ << "=" << VirtualizationTypeMapper::GetNameForVirtualizationType(item) << "&";
      }
  }
  if(m_bareMetalHasBeenSet)
  {
      oStream << location << ".BareMetal=" << std::boolalpha << m_bareMetal << "&";
  }
  if(m_hypervisorHasBeenSet)
  {
      oStream << location << ".Hypervisor=" << InstanceTypeHypervisorMapper::GetNameForInstanceTypeHypervisor(m_hypervisor) << "&";
  }
  if(m_processorInfoHasBeenSet)
  {
      Aws::String processorInfoLocationAndMember(location);
      processorInfoLocationAndMember += ".ProcessorInfo";
      m_processorInfo.OutputToStream(oStream, processorInfoLocationAndMember.c_str());
  }
  if(m_vCpuInfoHasBeenSet)
  {
      Aws::String vCpuInfoLocationAndMember(location);
      vCpuInfoLocationAndMember += ".VCpuInfo";
      m_vCpuInfo.OutputToStream(oStream, vCpuInfoLocationAndMember.c_str());
  }
  if(m_memoryInfoHasBeenSet)
  {
      Aws::String memoryInfoLocationAndMember(location);
      memoryInfoLocationAndMember += ".MemoryInfo";
      m_memoryInfo.OutputToStream(oStream, memoryInfoLocationAndMember.c_str());
  }
  if(m_instanceStorageSupportedHasBeenSet)
  {
      oStream << location << ".InstanceStorageSupported=" << std::boolalpha << m_instanceStorageSupported << "&";
  }
  if(m_instanceStorageInfoHasBeenSet)
  {
      Aws::String instanceStorageInfoLocationAndMember(location);
      instanceStorageInfoLocationAndMember += ".InstanceStorageInfo";
      m_instanceStorageInfo.OutputToStream(oStream, instanceStorageInfoLocationAndMember.c_str());
  }
  if(m_ebsInfoHasBeenSet)
  {
      Aws::String ebsInfoLocationAndMember(location);
      ebsInfoLocationAndMember += ".EbsInfo";
      m_ebsInfo.OutputToStream(oStream, ebsInfoLocationAndMember.c_str());
  }
  if(m_networkInfoHasBeenSet)
  {
      Aws::String networkInfoLocationAndMember(location);
      networkInfoLocationAndMember += ".NetworkInfo";
      m_networkInfo.OutputToStream(oStream, networkInfoLocationAndMember.c_str());
  }
  if(m_gpuInfoHasBeenSet)
  {
      Aws::String gpuInfoLocationAndMember(location);
      gpuInfoLocationAndMember += ".GpuInfo";
      m_gpuInfo.OutputToStream(oStream, gpuInfoLocationAndMember.c_str());
  }
  if(m_fpgaInfoHasBeenSet)
  {
      Aws::String fpgaInfoLocationAndMember(location);
      fpgaInfoLocationAndMember += ".FpgaInfo";
      m_fpgaInfo.OutputToStream(oStream, fpgaInfoLocationAndMember.c_str());
  }
  if(m_placementGroupInfoHasBeenSet)
  {
      Aws::String placementGroupInfoLocationAndMember(location);
      placementGroupInfoLocationAndMember += ".PlacementGroupInfo";
      m_placementGroupInfo.OutputToStream(oStream, placementGroupInfoLocationAndMember.c_str());
  }
  if(m_inferenceAcceleratorInfoHasBeenSet)
  {
      Aws::String inferenceAcceleratorInfoLocationAndMember(location);
      inferenceAcceleratorInfoLocationAndMember += ".InferenceAcceleratorInfo";
      m_inferenceAcceleratorInfo.OutputToStream(oStream, inferenceAcceleratorInfoLocationAndMember.c_str());
  }
  if(m_hibernationSupportedHasBeenSet)
  {
      oStream << location << ".HibernationSupported=" << std::boolalpha << m_hibernationSupported << "&";
  }
  if(m_burstablePerformanceSupportedHasBeenSet)
  {
      oStream << location << ".BurstablePerformanceSupported=" << std::boolalpha << m_burstablePerformanceSupported << "&";
  }
  if(m_dedicatedHostsSupportedHasBeenSet)
  {
      oStream << location << ".DedicatedHostsSupported=" << std::boolalpha << m_dedicatedHostsSupported << "&";
  }
  if(m_autoRecoverySupportedHasBeenSet)
  {
      oStream << location << ".AutoRecoverySupported=" << std::boolalpha << m_autoRecoverySupported << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
