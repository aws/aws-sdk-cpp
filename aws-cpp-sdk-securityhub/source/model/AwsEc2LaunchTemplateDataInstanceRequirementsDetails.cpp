/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/AwsEc2LaunchTemplateDataInstanceRequirementsDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

AwsEc2LaunchTemplateDataInstanceRequirementsDetails::AwsEc2LaunchTemplateDataInstanceRequirementsDetails() : 
    m_acceleratorCountHasBeenSet(false),
    m_acceleratorManufacturersHasBeenSet(false),
    m_acceleratorNamesHasBeenSet(false),
    m_acceleratorTotalMemoryMiBHasBeenSet(false),
    m_acceleratorTypesHasBeenSet(false),
    m_bareMetalHasBeenSet(false),
    m_baselineEbsBandwidthMbpsHasBeenSet(false),
    m_burstablePerformanceHasBeenSet(false),
    m_cpuManufacturersHasBeenSet(false),
    m_excludedInstanceTypesHasBeenSet(false),
    m_instanceGenerationsHasBeenSet(false),
    m_localStorageHasBeenSet(false),
    m_localStorageTypesHasBeenSet(false),
    m_memoryGiBPerVCpuHasBeenSet(false),
    m_memoryMiBHasBeenSet(false),
    m_networkInterfaceCountHasBeenSet(false),
    m_onDemandMaxPricePercentageOverLowestPrice(0),
    m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet(false),
    m_requireHibernateSupport(false),
    m_requireHibernateSupportHasBeenSet(false),
    m_spotMaxPricePercentageOverLowestPrice(0),
    m_spotMaxPricePercentageOverLowestPriceHasBeenSet(false),
    m_totalLocalStorageGBHasBeenSet(false),
    m_vCpuCountHasBeenSet(false)
{
}

AwsEc2LaunchTemplateDataInstanceRequirementsDetails::AwsEc2LaunchTemplateDataInstanceRequirementsDetails(JsonView jsonValue) : 
    m_acceleratorCountHasBeenSet(false),
    m_acceleratorManufacturersHasBeenSet(false),
    m_acceleratorNamesHasBeenSet(false),
    m_acceleratorTotalMemoryMiBHasBeenSet(false),
    m_acceleratorTypesHasBeenSet(false),
    m_bareMetalHasBeenSet(false),
    m_baselineEbsBandwidthMbpsHasBeenSet(false),
    m_burstablePerformanceHasBeenSet(false),
    m_cpuManufacturersHasBeenSet(false),
    m_excludedInstanceTypesHasBeenSet(false),
    m_instanceGenerationsHasBeenSet(false),
    m_localStorageHasBeenSet(false),
    m_localStorageTypesHasBeenSet(false),
    m_memoryGiBPerVCpuHasBeenSet(false),
    m_memoryMiBHasBeenSet(false),
    m_networkInterfaceCountHasBeenSet(false),
    m_onDemandMaxPricePercentageOverLowestPrice(0),
    m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet(false),
    m_requireHibernateSupport(false),
    m_requireHibernateSupportHasBeenSet(false),
    m_spotMaxPricePercentageOverLowestPrice(0),
    m_spotMaxPricePercentageOverLowestPriceHasBeenSet(false),
    m_totalLocalStorageGBHasBeenSet(false),
    m_vCpuCountHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEc2LaunchTemplateDataInstanceRequirementsDetails& AwsEc2LaunchTemplateDataInstanceRequirementsDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AcceleratorCount"))
  {
    m_acceleratorCount = jsonValue.GetObject("AcceleratorCount");

    m_acceleratorCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceleratorManufacturers"))
  {
    Aws::Utils::Array<JsonView> acceleratorManufacturersJsonList = jsonValue.GetArray("AcceleratorManufacturers");
    for(unsigned acceleratorManufacturersIndex = 0; acceleratorManufacturersIndex < acceleratorManufacturersJsonList.GetLength(); ++acceleratorManufacturersIndex)
    {
      m_acceleratorManufacturers.push_back(acceleratorManufacturersJsonList[acceleratorManufacturersIndex].AsString());
    }
    m_acceleratorManufacturersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceleratorNames"))
  {
    Aws::Utils::Array<JsonView> acceleratorNamesJsonList = jsonValue.GetArray("AcceleratorNames");
    for(unsigned acceleratorNamesIndex = 0; acceleratorNamesIndex < acceleratorNamesJsonList.GetLength(); ++acceleratorNamesIndex)
    {
      m_acceleratorNames.push_back(acceleratorNamesJsonList[acceleratorNamesIndex].AsString());
    }
    m_acceleratorNamesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceleratorTotalMemoryMiB"))
  {
    m_acceleratorTotalMemoryMiB = jsonValue.GetObject("AcceleratorTotalMemoryMiB");

    m_acceleratorTotalMemoryMiBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceleratorTypes"))
  {
    Aws::Utils::Array<JsonView> acceleratorTypesJsonList = jsonValue.GetArray("AcceleratorTypes");
    for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
    {
      m_acceleratorTypes.push_back(acceleratorTypesJsonList[acceleratorTypesIndex].AsString());
    }
    m_acceleratorTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BareMetal"))
  {
    m_bareMetal = jsonValue.GetString("BareMetal");

    m_bareMetalHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BaselineEbsBandwidthMbps"))
  {
    m_baselineEbsBandwidthMbps = jsonValue.GetObject("BaselineEbsBandwidthMbps");

    m_baselineEbsBandwidthMbpsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BurstablePerformance"))
  {
    m_burstablePerformance = jsonValue.GetString("BurstablePerformance");

    m_burstablePerformanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CpuManufacturers"))
  {
    Aws::Utils::Array<JsonView> cpuManufacturersJsonList = jsonValue.GetArray("CpuManufacturers");
    for(unsigned cpuManufacturersIndex = 0; cpuManufacturersIndex < cpuManufacturersJsonList.GetLength(); ++cpuManufacturersIndex)
    {
      m_cpuManufacturers.push_back(cpuManufacturersJsonList[cpuManufacturersIndex].AsString());
    }
    m_cpuManufacturersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExcludedInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> excludedInstanceTypesJsonList = jsonValue.GetArray("ExcludedInstanceTypes");
    for(unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength(); ++excludedInstanceTypesIndex)
    {
      m_excludedInstanceTypes.push_back(excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString());
    }
    m_excludedInstanceTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceGenerations"))
  {
    Aws::Utils::Array<JsonView> instanceGenerationsJsonList = jsonValue.GetArray("InstanceGenerations");
    for(unsigned instanceGenerationsIndex = 0; instanceGenerationsIndex < instanceGenerationsJsonList.GetLength(); ++instanceGenerationsIndex)
    {
      m_instanceGenerations.push_back(instanceGenerationsJsonList[instanceGenerationsIndex].AsString());
    }
    m_instanceGenerationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalStorage"))
  {
    m_localStorage = jsonValue.GetString("LocalStorage");

    m_localStorageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LocalStorageTypes"))
  {
    Aws::Utils::Array<JsonView> localStorageTypesJsonList = jsonValue.GetArray("LocalStorageTypes");
    for(unsigned localStorageTypesIndex = 0; localStorageTypesIndex < localStorageTypesJsonList.GetLength(); ++localStorageTypesIndex)
    {
      m_localStorageTypes.push_back(localStorageTypesJsonList[localStorageTypesIndex].AsString());
    }
    m_localStorageTypesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryGiBPerVCpu"))
  {
    m_memoryGiBPerVCpu = jsonValue.GetObject("MemoryGiBPerVCpu");

    m_memoryGiBPerVCpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryMiB"))
  {
    m_memoryMiB = jsonValue.GetObject("MemoryMiB");

    m_memoryMiBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkInterfaceCount"))
  {
    m_networkInterfaceCount = jsonValue.GetObject("NetworkInterfaceCount");

    m_networkInterfaceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OnDemandMaxPricePercentageOverLowestPrice"))
  {
    m_onDemandMaxPricePercentageOverLowestPrice = jsonValue.GetInteger("OnDemandMaxPricePercentageOverLowestPrice");

    m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RequireHibernateSupport"))
  {
    m_requireHibernateSupport = jsonValue.GetBool("RequireHibernateSupport");

    m_requireHibernateSupportHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpotMaxPricePercentageOverLowestPrice"))
  {
    m_spotMaxPricePercentageOverLowestPrice = jsonValue.GetInteger("SpotMaxPricePercentageOverLowestPrice");

    m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalLocalStorageGB"))
  {
    m_totalLocalStorageGB = jsonValue.GetObject("TotalLocalStorageGB");

    m_totalLocalStorageGBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VCpuCount"))
  {
    m_vCpuCount = jsonValue.GetObject("VCpuCount");

    m_vCpuCountHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEc2LaunchTemplateDataInstanceRequirementsDetails::Jsonize() const
{
  JsonValue payload;

  if(m_acceleratorCountHasBeenSet)
  {
   payload.WithObject("AcceleratorCount", m_acceleratorCount.Jsonize());

  }

  if(m_acceleratorManufacturersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorManufacturersJsonList(m_acceleratorManufacturers.size());
   for(unsigned acceleratorManufacturersIndex = 0; acceleratorManufacturersIndex < acceleratorManufacturersJsonList.GetLength(); ++acceleratorManufacturersIndex)
   {
     acceleratorManufacturersJsonList[acceleratorManufacturersIndex].AsString(m_acceleratorManufacturers[acceleratorManufacturersIndex]);
   }
   payload.WithArray("AcceleratorManufacturers", std::move(acceleratorManufacturersJsonList));

  }

  if(m_acceleratorNamesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorNamesJsonList(m_acceleratorNames.size());
   for(unsigned acceleratorNamesIndex = 0; acceleratorNamesIndex < acceleratorNamesJsonList.GetLength(); ++acceleratorNamesIndex)
   {
     acceleratorNamesJsonList[acceleratorNamesIndex].AsString(m_acceleratorNames[acceleratorNamesIndex]);
   }
   payload.WithArray("AcceleratorNames", std::move(acceleratorNamesJsonList));

  }

  if(m_acceleratorTotalMemoryMiBHasBeenSet)
  {
   payload.WithObject("AcceleratorTotalMemoryMiB", m_acceleratorTotalMemoryMiB.Jsonize());

  }

  if(m_acceleratorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorTypesJsonList(m_acceleratorTypes.size());
   for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
   {
     acceleratorTypesJsonList[acceleratorTypesIndex].AsString(m_acceleratorTypes[acceleratorTypesIndex]);
   }
   payload.WithArray("AcceleratorTypes", std::move(acceleratorTypesJsonList));

  }

  if(m_bareMetalHasBeenSet)
  {
   payload.WithString("BareMetal", m_bareMetal);

  }

  if(m_baselineEbsBandwidthMbpsHasBeenSet)
  {
   payload.WithObject("BaselineEbsBandwidthMbps", m_baselineEbsBandwidthMbps.Jsonize());

  }

  if(m_burstablePerformanceHasBeenSet)
  {
   payload.WithString("BurstablePerformance", m_burstablePerformance);

  }

  if(m_cpuManufacturersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> cpuManufacturersJsonList(m_cpuManufacturers.size());
   for(unsigned cpuManufacturersIndex = 0; cpuManufacturersIndex < cpuManufacturersJsonList.GetLength(); ++cpuManufacturersIndex)
   {
     cpuManufacturersJsonList[cpuManufacturersIndex].AsString(m_cpuManufacturers[cpuManufacturersIndex]);
   }
   payload.WithArray("CpuManufacturers", std::move(cpuManufacturersJsonList));

  }

  if(m_excludedInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedInstanceTypesJsonList(m_excludedInstanceTypes.size());
   for(unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength(); ++excludedInstanceTypesIndex)
   {
     excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString(m_excludedInstanceTypes[excludedInstanceTypesIndex]);
   }
   payload.WithArray("ExcludedInstanceTypes", std::move(excludedInstanceTypesJsonList));

  }

  if(m_instanceGenerationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceGenerationsJsonList(m_instanceGenerations.size());
   for(unsigned instanceGenerationsIndex = 0; instanceGenerationsIndex < instanceGenerationsJsonList.GetLength(); ++instanceGenerationsIndex)
   {
     instanceGenerationsJsonList[instanceGenerationsIndex].AsString(m_instanceGenerations[instanceGenerationsIndex]);
   }
   payload.WithArray("InstanceGenerations", std::move(instanceGenerationsJsonList));

  }

  if(m_localStorageHasBeenSet)
  {
   payload.WithString("LocalStorage", m_localStorage);

  }

  if(m_localStorageTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> localStorageTypesJsonList(m_localStorageTypes.size());
   for(unsigned localStorageTypesIndex = 0; localStorageTypesIndex < localStorageTypesJsonList.GetLength(); ++localStorageTypesIndex)
   {
     localStorageTypesJsonList[localStorageTypesIndex].AsString(m_localStorageTypes[localStorageTypesIndex]);
   }
   payload.WithArray("LocalStorageTypes", std::move(localStorageTypesJsonList));

  }

  if(m_memoryGiBPerVCpuHasBeenSet)
  {
   payload.WithObject("MemoryGiBPerVCpu", m_memoryGiBPerVCpu.Jsonize());

  }

  if(m_memoryMiBHasBeenSet)
  {
   payload.WithObject("MemoryMiB", m_memoryMiB.Jsonize());

  }

  if(m_networkInterfaceCountHasBeenSet)
  {
   payload.WithObject("NetworkInterfaceCount", m_networkInterfaceCount.Jsonize());

  }

  if(m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet)
  {
   payload.WithInteger("OnDemandMaxPricePercentageOverLowestPrice", m_onDemandMaxPricePercentageOverLowestPrice);

  }

  if(m_requireHibernateSupportHasBeenSet)
  {
   payload.WithBool("RequireHibernateSupport", m_requireHibernateSupport);

  }

  if(m_spotMaxPricePercentageOverLowestPriceHasBeenSet)
  {
   payload.WithInteger("SpotMaxPricePercentageOverLowestPrice", m_spotMaxPricePercentageOverLowestPrice);

  }

  if(m_totalLocalStorageGBHasBeenSet)
  {
   payload.WithObject("TotalLocalStorageGB", m_totalLocalStorageGB.Jsonize());

  }

  if(m_vCpuCountHasBeenSet)
  {
   payload.WithObject("VCpuCount", m_vCpuCount.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
