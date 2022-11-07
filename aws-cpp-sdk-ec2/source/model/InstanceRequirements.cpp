/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceRequirements.h>
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

InstanceRequirements::InstanceRequirements() : 
    m_vCpuCountHasBeenSet(false),
    m_memoryMiBHasBeenSet(false),
    m_cpuManufacturersHasBeenSet(false),
    m_memoryGiBPerVCpuHasBeenSet(false),
    m_excludedInstanceTypesHasBeenSet(false),
    m_instanceGenerationsHasBeenSet(false),
    m_spotMaxPricePercentageOverLowestPrice(0),
    m_spotMaxPricePercentageOverLowestPriceHasBeenSet(false),
    m_onDemandMaxPricePercentageOverLowestPrice(0),
    m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet(false),
    m_bareMetal(BareMetal::NOT_SET),
    m_bareMetalHasBeenSet(false),
    m_burstablePerformance(BurstablePerformance::NOT_SET),
    m_burstablePerformanceHasBeenSet(false),
    m_requireHibernateSupport(false),
    m_requireHibernateSupportHasBeenSet(false),
    m_networkInterfaceCountHasBeenSet(false),
    m_localStorage(LocalStorage::NOT_SET),
    m_localStorageHasBeenSet(false),
    m_localStorageTypesHasBeenSet(false),
    m_totalLocalStorageGBHasBeenSet(false),
    m_baselineEbsBandwidthMbpsHasBeenSet(false),
    m_acceleratorTypesHasBeenSet(false),
    m_acceleratorCountHasBeenSet(false),
    m_acceleratorManufacturersHasBeenSet(false),
    m_acceleratorNamesHasBeenSet(false),
    m_acceleratorTotalMemoryMiBHasBeenSet(false),
    m_networkBandwidthGbpsHasBeenSet(false),
    m_allowedInstanceTypesHasBeenSet(false)
{
}

InstanceRequirements::InstanceRequirements(const XmlNode& xmlNode) : 
    m_vCpuCountHasBeenSet(false),
    m_memoryMiBHasBeenSet(false),
    m_cpuManufacturersHasBeenSet(false),
    m_memoryGiBPerVCpuHasBeenSet(false),
    m_excludedInstanceTypesHasBeenSet(false),
    m_instanceGenerationsHasBeenSet(false),
    m_spotMaxPricePercentageOverLowestPrice(0),
    m_spotMaxPricePercentageOverLowestPriceHasBeenSet(false),
    m_onDemandMaxPricePercentageOverLowestPrice(0),
    m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet(false),
    m_bareMetal(BareMetal::NOT_SET),
    m_bareMetalHasBeenSet(false),
    m_burstablePerformance(BurstablePerformance::NOT_SET),
    m_burstablePerformanceHasBeenSet(false),
    m_requireHibernateSupport(false),
    m_requireHibernateSupportHasBeenSet(false),
    m_networkInterfaceCountHasBeenSet(false),
    m_localStorage(LocalStorage::NOT_SET),
    m_localStorageHasBeenSet(false),
    m_localStorageTypesHasBeenSet(false),
    m_totalLocalStorageGBHasBeenSet(false),
    m_baselineEbsBandwidthMbpsHasBeenSet(false),
    m_acceleratorTypesHasBeenSet(false),
    m_acceleratorCountHasBeenSet(false),
    m_acceleratorManufacturersHasBeenSet(false),
    m_acceleratorNamesHasBeenSet(false),
    m_acceleratorTotalMemoryMiBHasBeenSet(false),
    m_networkBandwidthGbpsHasBeenSet(false),
    m_allowedInstanceTypesHasBeenSet(false)
{
  *this = xmlNode;
}

InstanceRequirements& InstanceRequirements::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode vCpuCountNode = resultNode.FirstChild("vCpuCount");
    if(!vCpuCountNode.IsNull())
    {
      m_vCpuCount = vCpuCountNode;
      m_vCpuCountHasBeenSet = true;
    }
    XmlNode memoryMiBNode = resultNode.FirstChild("memoryMiB");
    if(!memoryMiBNode.IsNull())
    {
      m_memoryMiB = memoryMiBNode;
      m_memoryMiBHasBeenSet = true;
    }
    XmlNode cpuManufacturersNode = resultNode.FirstChild("cpuManufacturerSet");
    if(!cpuManufacturersNode.IsNull())
    {
      XmlNode cpuManufacturersMember = cpuManufacturersNode.FirstChild("item");
      while(!cpuManufacturersMember.IsNull())
      {
        m_cpuManufacturers.push_back(CpuManufacturerMapper::GetCpuManufacturerForName(StringUtils::Trim(cpuManufacturersMember.GetText().c_str())));
        cpuManufacturersMember = cpuManufacturersMember.NextNode("item");
      }

      m_cpuManufacturersHasBeenSet = true;
    }
    XmlNode memoryGiBPerVCpuNode = resultNode.FirstChild("memoryGiBPerVCpu");
    if(!memoryGiBPerVCpuNode.IsNull())
    {
      m_memoryGiBPerVCpu = memoryGiBPerVCpuNode;
      m_memoryGiBPerVCpuHasBeenSet = true;
    }
    XmlNode excludedInstanceTypesNode = resultNode.FirstChild("excludedInstanceTypeSet");
    if(!excludedInstanceTypesNode.IsNull())
    {
      XmlNode excludedInstanceTypesMember = excludedInstanceTypesNode.FirstChild("item");
      while(!excludedInstanceTypesMember.IsNull())
      {
        m_excludedInstanceTypes.push_back(excludedInstanceTypesMember.GetText());
        excludedInstanceTypesMember = excludedInstanceTypesMember.NextNode("item");
      }

      m_excludedInstanceTypesHasBeenSet = true;
    }
    XmlNode instanceGenerationsNode = resultNode.FirstChild("instanceGenerationSet");
    if(!instanceGenerationsNode.IsNull())
    {
      XmlNode instanceGenerationsMember = instanceGenerationsNode.FirstChild("item");
      while(!instanceGenerationsMember.IsNull())
      {
        m_instanceGenerations.push_back(InstanceGenerationMapper::GetInstanceGenerationForName(StringUtils::Trim(instanceGenerationsMember.GetText().c_str())));
        instanceGenerationsMember = instanceGenerationsMember.NextNode("item");
      }

      m_instanceGenerationsHasBeenSet = true;
    }
    XmlNode spotMaxPricePercentageOverLowestPriceNode = resultNode.FirstChild("spotMaxPricePercentageOverLowestPrice");
    if(!spotMaxPricePercentageOverLowestPriceNode.IsNull())
    {
      m_spotMaxPricePercentageOverLowestPrice = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(spotMaxPricePercentageOverLowestPriceNode.GetText()).c_str()).c_str());
      m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true;
    }
    XmlNode onDemandMaxPricePercentageOverLowestPriceNode = resultNode.FirstChild("onDemandMaxPricePercentageOverLowestPrice");
    if(!onDemandMaxPricePercentageOverLowestPriceNode.IsNull())
    {
      m_onDemandMaxPricePercentageOverLowestPrice = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(onDemandMaxPricePercentageOverLowestPriceNode.GetText()).c_str()).c_str());
      m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true;
    }
    XmlNode bareMetalNode = resultNode.FirstChild("bareMetal");
    if(!bareMetalNode.IsNull())
    {
      m_bareMetal = BareMetalMapper::GetBareMetalForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bareMetalNode.GetText()).c_str()).c_str());
      m_bareMetalHasBeenSet = true;
    }
    XmlNode burstablePerformanceNode = resultNode.FirstChild("burstablePerformance");
    if(!burstablePerformanceNode.IsNull())
    {
      m_burstablePerformance = BurstablePerformanceMapper::GetBurstablePerformanceForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(burstablePerformanceNode.GetText()).c_str()).c_str());
      m_burstablePerformanceHasBeenSet = true;
    }
    XmlNode requireHibernateSupportNode = resultNode.FirstChild("requireHibernateSupport");
    if(!requireHibernateSupportNode.IsNull())
    {
      m_requireHibernateSupport = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(requireHibernateSupportNode.GetText()).c_str()).c_str());
      m_requireHibernateSupportHasBeenSet = true;
    }
    XmlNode networkInterfaceCountNode = resultNode.FirstChild("networkInterfaceCount");
    if(!networkInterfaceCountNode.IsNull())
    {
      m_networkInterfaceCount = networkInterfaceCountNode;
      m_networkInterfaceCountHasBeenSet = true;
    }
    XmlNode localStorageNode = resultNode.FirstChild("localStorage");
    if(!localStorageNode.IsNull())
    {
      m_localStorage = LocalStorageMapper::GetLocalStorageForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(localStorageNode.GetText()).c_str()).c_str());
      m_localStorageHasBeenSet = true;
    }
    XmlNode localStorageTypesNode = resultNode.FirstChild("localStorageTypeSet");
    if(!localStorageTypesNode.IsNull())
    {
      XmlNode localStorageTypesMember = localStorageTypesNode.FirstChild("item");
      while(!localStorageTypesMember.IsNull())
      {
        m_localStorageTypes.push_back(LocalStorageTypeMapper::GetLocalStorageTypeForName(StringUtils::Trim(localStorageTypesMember.GetText().c_str())));
        localStorageTypesMember = localStorageTypesMember.NextNode("item");
      }

      m_localStorageTypesHasBeenSet = true;
    }
    XmlNode totalLocalStorageGBNode = resultNode.FirstChild("totalLocalStorageGB");
    if(!totalLocalStorageGBNode.IsNull())
    {
      m_totalLocalStorageGB = totalLocalStorageGBNode;
      m_totalLocalStorageGBHasBeenSet = true;
    }
    XmlNode baselineEbsBandwidthMbpsNode = resultNode.FirstChild("baselineEbsBandwidthMbps");
    if(!baselineEbsBandwidthMbpsNode.IsNull())
    {
      m_baselineEbsBandwidthMbps = baselineEbsBandwidthMbpsNode;
      m_baselineEbsBandwidthMbpsHasBeenSet = true;
    }
    XmlNode acceleratorTypesNode = resultNode.FirstChild("acceleratorTypeSet");
    if(!acceleratorTypesNode.IsNull())
    {
      XmlNode acceleratorTypesMember = acceleratorTypesNode.FirstChild("item");
      while(!acceleratorTypesMember.IsNull())
      {
        m_acceleratorTypes.push_back(AcceleratorTypeMapper::GetAcceleratorTypeForName(StringUtils::Trim(acceleratorTypesMember.GetText().c_str())));
        acceleratorTypesMember = acceleratorTypesMember.NextNode("item");
      }

      m_acceleratorTypesHasBeenSet = true;
    }
    XmlNode acceleratorCountNode = resultNode.FirstChild("acceleratorCount");
    if(!acceleratorCountNode.IsNull())
    {
      m_acceleratorCount = acceleratorCountNode;
      m_acceleratorCountHasBeenSet = true;
    }
    XmlNode acceleratorManufacturersNode = resultNode.FirstChild("acceleratorManufacturerSet");
    if(!acceleratorManufacturersNode.IsNull())
    {
      XmlNode acceleratorManufacturersMember = acceleratorManufacturersNode.FirstChild("item");
      while(!acceleratorManufacturersMember.IsNull())
      {
        m_acceleratorManufacturers.push_back(AcceleratorManufacturerMapper::GetAcceleratorManufacturerForName(StringUtils::Trim(acceleratorManufacturersMember.GetText().c_str())));
        acceleratorManufacturersMember = acceleratorManufacturersMember.NextNode("item");
      }

      m_acceleratorManufacturersHasBeenSet = true;
    }
    XmlNode acceleratorNamesNode = resultNode.FirstChild("acceleratorNameSet");
    if(!acceleratorNamesNode.IsNull())
    {
      XmlNode acceleratorNamesMember = acceleratorNamesNode.FirstChild("item");
      while(!acceleratorNamesMember.IsNull())
      {
        m_acceleratorNames.push_back(AcceleratorNameMapper::GetAcceleratorNameForName(StringUtils::Trim(acceleratorNamesMember.GetText().c_str())));
        acceleratorNamesMember = acceleratorNamesMember.NextNode("item");
      }

      m_acceleratorNamesHasBeenSet = true;
    }
    XmlNode acceleratorTotalMemoryMiBNode = resultNode.FirstChild("acceleratorTotalMemoryMiB");
    if(!acceleratorTotalMemoryMiBNode.IsNull())
    {
      m_acceleratorTotalMemoryMiB = acceleratorTotalMemoryMiBNode;
      m_acceleratorTotalMemoryMiBHasBeenSet = true;
    }
    XmlNode networkBandwidthGbpsNode = resultNode.FirstChild("networkBandwidthGbps");
    if(!networkBandwidthGbpsNode.IsNull())
    {
      m_networkBandwidthGbps = networkBandwidthGbpsNode;
      m_networkBandwidthGbpsHasBeenSet = true;
    }
    XmlNode allowedInstanceTypesNode = resultNode.FirstChild("allowedInstanceTypeSet");
    if(!allowedInstanceTypesNode.IsNull())
    {
      XmlNode allowedInstanceTypesMember = allowedInstanceTypesNode.FirstChild("item");
      while(!allowedInstanceTypesMember.IsNull())
      {
        m_allowedInstanceTypes.push_back(allowedInstanceTypesMember.GetText());
        allowedInstanceTypesMember = allowedInstanceTypesMember.NextNode("item");
      }

      m_allowedInstanceTypesHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceRequirements::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_vCpuCountHasBeenSet)
  {
      Aws::StringStream vCpuCountLocationAndMemberSs;
      vCpuCountLocationAndMemberSs << location << index << locationValue << ".VCpuCount";
      m_vCpuCount.OutputToStream(oStream, vCpuCountLocationAndMemberSs.str().c_str());
  }

  if(m_memoryMiBHasBeenSet)
  {
      Aws::StringStream memoryMiBLocationAndMemberSs;
      memoryMiBLocationAndMemberSs << location << index << locationValue << ".MemoryMiB";
      m_memoryMiB.OutputToStream(oStream, memoryMiBLocationAndMemberSs.str().c_str());
  }

  if(m_cpuManufacturersHasBeenSet)
  {
      unsigned cpuManufacturersIdx = 1;
      for(auto& item : m_cpuManufacturers)
      {
        oStream << location << index << locationValue << ".CpuManufacturerSet." << cpuManufacturersIdx++ << "=" << CpuManufacturerMapper::GetNameForCpuManufacturer(item) << "&";
      }
  }

  if(m_memoryGiBPerVCpuHasBeenSet)
  {
      Aws::StringStream memoryGiBPerVCpuLocationAndMemberSs;
      memoryGiBPerVCpuLocationAndMemberSs << location << index << locationValue << ".MemoryGiBPerVCpu";
      m_memoryGiBPerVCpu.OutputToStream(oStream, memoryGiBPerVCpuLocationAndMemberSs.str().c_str());
  }

  if(m_excludedInstanceTypesHasBeenSet)
  {
      unsigned excludedInstanceTypesIdx = 1;
      for(auto& item : m_excludedInstanceTypes)
      {
        oStream << location << index << locationValue << ".ExcludedInstanceTypeSet." << excludedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_instanceGenerationsHasBeenSet)
  {
      unsigned instanceGenerationsIdx = 1;
      for(auto& item : m_instanceGenerations)
      {
        oStream << location << index << locationValue << ".InstanceGenerationSet." << instanceGenerationsIdx++ << "=" << InstanceGenerationMapper::GetNameForInstanceGeneration(item) << "&";
      }
  }

  if(m_spotMaxPricePercentageOverLowestPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpotMaxPricePercentageOverLowestPrice=" << m_spotMaxPricePercentageOverLowestPrice << "&";
  }

  if(m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".OnDemandMaxPricePercentageOverLowestPrice=" << m_onDemandMaxPricePercentageOverLowestPrice << "&";
  }

  if(m_bareMetalHasBeenSet)
  {
      oStream << location << index << locationValue << ".BareMetal=" << BareMetalMapper::GetNameForBareMetal(m_bareMetal) << "&";
  }

  if(m_burstablePerformanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".BurstablePerformance=" << BurstablePerformanceMapper::GetNameForBurstablePerformance(m_burstablePerformance) << "&";
  }

  if(m_requireHibernateSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".RequireHibernateSupport=" << std::boolalpha << m_requireHibernateSupport << "&";
  }

  if(m_networkInterfaceCountHasBeenSet)
  {
      Aws::StringStream networkInterfaceCountLocationAndMemberSs;
      networkInterfaceCountLocationAndMemberSs << location << index << locationValue << ".NetworkInterfaceCount";
      m_networkInterfaceCount.OutputToStream(oStream, networkInterfaceCountLocationAndMemberSs.str().c_str());
  }

  if(m_localStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalStorage=" << LocalStorageMapper::GetNameForLocalStorage(m_localStorage) << "&";
  }

  if(m_localStorageTypesHasBeenSet)
  {
      unsigned localStorageTypesIdx = 1;
      for(auto& item : m_localStorageTypes)
      {
        oStream << location << index << locationValue << ".LocalStorageTypeSet." << localStorageTypesIdx++ << "=" << LocalStorageTypeMapper::GetNameForLocalStorageType(item) << "&";
      }
  }

  if(m_totalLocalStorageGBHasBeenSet)
  {
      Aws::StringStream totalLocalStorageGBLocationAndMemberSs;
      totalLocalStorageGBLocationAndMemberSs << location << index << locationValue << ".TotalLocalStorageGB";
      m_totalLocalStorageGB.OutputToStream(oStream, totalLocalStorageGBLocationAndMemberSs.str().c_str());
  }

  if(m_baselineEbsBandwidthMbpsHasBeenSet)
  {
      Aws::StringStream baselineEbsBandwidthMbpsLocationAndMemberSs;
      baselineEbsBandwidthMbpsLocationAndMemberSs << location << index << locationValue << ".BaselineEbsBandwidthMbps";
      m_baselineEbsBandwidthMbps.OutputToStream(oStream, baselineEbsBandwidthMbpsLocationAndMemberSs.str().c_str());
  }

  if(m_acceleratorTypesHasBeenSet)
  {
      unsigned acceleratorTypesIdx = 1;
      for(auto& item : m_acceleratorTypes)
      {
        oStream << location << index << locationValue << ".AcceleratorTypeSet." << acceleratorTypesIdx++ << "=" << AcceleratorTypeMapper::GetNameForAcceleratorType(item) << "&";
      }
  }

  if(m_acceleratorCountHasBeenSet)
  {
      Aws::StringStream acceleratorCountLocationAndMemberSs;
      acceleratorCountLocationAndMemberSs << location << index << locationValue << ".AcceleratorCount";
      m_acceleratorCount.OutputToStream(oStream, acceleratorCountLocationAndMemberSs.str().c_str());
  }

  if(m_acceleratorManufacturersHasBeenSet)
  {
      unsigned acceleratorManufacturersIdx = 1;
      for(auto& item : m_acceleratorManufacturers)
      {
        oStream << location << index << locationValue << ".AcceleratorManufacturerSet." << acceleratorManufacturersIdx++ << "=" << AcceleratorManufacturerMapper::GetNameForAcceleratorManufacturer(item) << "&";
      }
  }

  if(m_acceleratorNamesHasBeenSet)
  {
      unsigned acceleratorNamesIdx = 1;
      for(auto& item : m_acceleratorNames)
      {
        oStream << location << index << locationValue << ".AcceleratorNameSet." << acceleratorNamesIdx++ << "=" << AcceleratorNameMapper::GetNameForAcceleratorName(item) << "&";
      }
  }

  if(m_acceleratorTotalMemoryMiBHasBeenSet)
  {
      Aws::StringStream acceleratorTotalMemoryMiBLocationAndMemberSs;
      acceleratorTotalMemoryMiBLocationAndMemberSs << location << index << locationValue << ".AcceleratorTotalMemoryMiB";
      m_acceleratorTotalMemoryMiB.OutputToStream(oStream, acceleratorTotalMemoryMiBLocationAndMemberSs.str().c_str());
  }

  if(m_networkBandwidthGbpsHasBeenSet)
  {
      Aws::StringStream networkBandwidthGbpsLocationAndMemberSs;
      networkBandwidthGbpsLocationAndMemberSs << location << index << locationValue << ".NetworkBandwidthGbps";
      m_networkBandwidthGbps.OutputToStream(oStream, networkBandwidthGbpsLocationAndMemberSs.str().c_str());
  }

  if(m_allowedInstanceTypesHasBeenSet)
  {
      unsigned allowedInstanceTypesIdx = 1;
      for(auto& item : m_allowedInstanceTypes)
      {
        oStream << location << index << locationValue << ".AllowedInstanceTypeSet." << allowedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void InstanceRequirements::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_vCpuCountHasBeenSet)
  {
      Aws::String vCpuCountLocationAndMember(location);
      vCpuCountLocationAndMember += ".VCpuCount";
      m_vCpuCount.OutputToStream(oStream, vCpuCountLocationAndMember.c_str());
  }
  if(m_memoryMiBHasBeenSet)
  {
      Aws::String memoryMiBLocationAndMember(location);
      memoryMiBLocationAndMember += ".MemoryMiB";
      m_memoryMiB.OutputToStream(oStream, memoryMiBLocationAndMember.c_str());
  }
  if(m_cpuManufacturersHasBeenSet)
  {
      unsigned cpuManufacturersIdx = 1;
      for(auto& item : m_cpuManufacturers)
      {
        oStream << location << ".CpuManufacturerSet." << cpuManufacturersIdx++ << "=" << CpuManufacturerMapper::GetNameForCpuManufacturer(item) << "&";
      }
  }
  if(m_memoryGiBPerVCpuHasBeenSet)
  {
      Aws::String memoryGiBPerVCpuLocationAndMember(location);
      memoryGiBPerVCpuLocationAndMember += ".MemoryGiBPerVCpu";
      m_memoryGiBPerVCpu.OutputToStream(oStream, memoryGiBPerVCpuLocationAndMember.c_str());
  }
  if(m_excludedInstanceTypesHasBeenSet)
  {
      unsigned excludedInstanceTypesIdx = 1;
      for(auto& item : m_excludedInstanceTypes)
      {
        oStream << location << ".ExcludedInstanceTypeSet." << excludedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_instanceGenerationsHasBeenSet)
  {
      unsigned instanceGenerationsIdx = 1;
      for(auto& item : m_instanceGenerations)
      {
        oStream << location << ".InstanceGenerationSet." << instanceGenerationsIdx++ << "=" << InstanceGenerationMapper::GetNameForInstanceGeneration(item) << "&";
      }
  }
  if(m_spotMaxPricePercentageOverLowestPriceHasBeenSet)
  {
      oStream << location << ".SpotMaxPricePercentageOverLowestPrice=" << m_spotMaxPricePercentageOverLowestPrice << "&";
  }
  if(m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet)
  {
      oStream << location << ".OnDemandMaxPricePercentageOverLowestPrice=" << m_onDemandMaxPricePercentageOverLowestPrice << "&";
  }
  if(m_bareMetalHasBeenSet)
  {
      oStream << location << ".BareMetal=" << BareMetalMapper::GetNameForBareMetal(m_bareMetal) << "&";
  }
  if(m_burstablePerformanceHasBeenSet)
  {
      oStream << location << ".BurstablePerformance=" << BurstablePerformanceMapper::GetNameForBurstablePerformance(m_burstablePerformance) << "&";
  }
  if(m_requireHibernateSupportHasBeenSet)
  {
      oStream << location << ".RequireHibernateSupport=" << std::boolalpha << m_requireHibernateSupport << "&";
  }
  if(m_networkInterfaceCountHasBeenSet)
  {
      Aws::String networkInterfaceCountLocationAndMember(location);
      networkInterfaceCountLocationAndMember += ".NetworkInterfaceCount";
      m_networkInterfaceCount.OutputToStream(oStream, networkInterfaceCountLocationAndMember.c_str());
  }
  if(m_localStorageHasBeenSet)
  {
      oStream << location << ".LocalStorage=" << LocalStorageMapper::GetNameForLocalStorage(m_localStorage) << "&";
  }
  if(m_localStorageTypesHasBeenSet)
  {
      unsigned localStorageTypesIdx = 1;
      for(auto& item : m_localStorageTypes)
      {
        oStream << location << ".LocalStorageTypeSet." << localStorageTypesIdx++ << "=" << LocalStorageTypeMapper::GetNameForLocalStorageType(item) << "&";
      }
  }
  if(m_totalLocalStorageGBHasBeenSet)
  {
      Aws::String totalLocalStorageGBLocationAndMember(location);
      totalLocalStorageGBLocationAndMember += ".TotalLocalStorageGB";
      m_totalLocalStorageGB.OutputToStream(oStream, totalLocalStorageGBLocationAndMember.c_str());
  }
  if(m_baselineEbsBandwidthMbpsHasBeenSet)
  {
      Aws::String baselineEbsBandwidthMbpsLocationAndMember(location);
      baselineEbsBandwidthMbpsLocationAndMember += ".BaselineEbsBandwidthMbps";
      m_baselineEbsBandwidthMbps.OutputToStream(oStream, baselineEbsBandwidthMbpsLocationAndMember.c_str());
  }
  if(m_acceleratorTypesHasBeenSet)
  {
      unsigned acceleratorTypesIdx = 1;
      for(auto& item : m_acceleratorTypes)
      {
        oStream << location << ".AcceleratorTypeSet." << acceleratorTypesIdx++ << "=" << AcceleratorTypeMapper::GetNameForAcceleratorType(item) << "&";
      }
  }
  if(m_acceleratorCountHasBeenSet)
  {
      Aws::String acceleratorCountLocationAndMember(location);
      acceleratorCountLocationAndMember += ".AcceleratorCount";
      m_acceleratorCount.OutputToStream(oStream, acceleratorCountLocationAndMember.c_str());
  }
  if(m_acceleratorManufacturersHasBeenSet)
  {
      unsigned acceleratorManufacturersIdx = 1;
      for(auto& item : m_acceleratorManufacturers)
      {
        oStream << location << ".AcceleratorManufacturerSet." << acceleratorManufacturersIdx++ << "=" << AcceleratorManufacturerMapper::GetNameForAcceleratorManufacturer(item) << "&";
      }
  }
  if(m_acceleratorNamesHasBeenSet)
  {
      unsigned acceleratorNamesIdx = 1;
      for(auto& item : m_acceleratorNames)
      {
        oStream << location << ".AcceleratorNameSet." << acceleratorNamesIdx++ << "=" << AcceleratorNameMapper::GetNameForAcceleratorName(item) << "&";
      }
  }
  if(m_acceleratorTotalMemoryMiBHasBeenSet)
  {
      Aws::String acceleratorTotalMemoryMiBLocationAndMember(location);
      acceleratorTotalMemoryMiBLocationAndMember += ".AcceleratorTotalMemoryMiB";
      m_acceleratorTotalMemoryMiB.OutputToStream(oStream, acceleratorTotalMemoryMiBLocationAndMember.c_str());
  }
  if(m_networkBandwidthGbpsHasBeenSet)
  {
      Aws::String networkBandwidthGbpsLocationAndMember(location);
      networkBandwidthGbpsLocationAndMember += ".NetworkBandwidthGbps";
      m_networkBandwidthGbps.OutputToStream(oStream, networkBandwidthGbpsLocationAndMember.c_str());
  }
  if(m_allowedInstanceTypesHasBeenSet)
  {
      unsigned allowedInstanceTypesIdx = 1;
      for(auto& item : m_allowedInstanceTypes)
      {
        oStream << location << ".AllowedInstanceTypeSet." << allowedInstanceTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
