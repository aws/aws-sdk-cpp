/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecs/model/InstanceRequirementsRequest.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECS {
namespace Model {

InstanceRequirementsRequest::InstanceRequirementsRequest(JsonView jsonValue) { *this = jsonValue; }

InstanceRequirementsRequest& InstanceRequirementsRequest::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("vCpuCount")) {
    m_vCpuCount = jsonValue.GetObject("vCpuCount");
    m_vCpuCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryMiB")) {
    m_memoryMiB = jsonValue.GetObject("memoryMiB");
    m_memoryMiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("cpuManufacturers")) {
    Aws::Utils::Array<JsonView> cpuManufacturersJsonList = jsonValue.GetArray("cpuManufacturers");
    for (unsigned cpuManufacturersIndex = 0; cpuManufacturersIndex < cpuManufacturersJsonList.GetLength(); ++cpuManufacturersIndex) {
      m_cpuManufacturers.push_back(
          CpuManufacturerMapper::GetCpuManufacturerForName(cpuManufacturersJsonList[cpuManufacturersIndex].AsString()));
    }
    m_cpuManufacturersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("memoryGiBPerVCpu")) {
    m_memoryGiBPerVCpu = jsonValue.GetObject("memoryGiBPerVCpu");
    m_memoryGiBPerVCpuHasBeenSet = true;
  }
  if (jsonValue.ValueExists("excludedInstanceTypes")) {
    Aws::Utils::Array<JsonView> excludedInstanceTypesJsonList = jsonValue.GetArray("excludedInstanceTypes");
    for (unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength();
         ++excludedInstanceTypesIndex) {
      m_excludedInstanceTypes.push_back(excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString());
    }
    m_excludedInstanceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("instanceGenerations")) {
    Aws::Utils::Array<JsonView> instanceGenerationsJsonList = jsonValue.GetArray("instanceGenerations");
    for (unsigned instanceGenerationsIndex = 0; instanceGenerationsIndex < instanceGenerationsJsonList.GetLength();
         ++instanceGenerationsIndex) {
      m_instanceGenerations.push_back(
          InstanceGenerationMapper::GetInstanceGenerationForName(instanceGenerationsJsonList[instanceGenerationsIndex].AsString()));
    }
    m_instanceGenerationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("spotMaxPricePercentageOverLowestPrice")) {
    m_spotMaxPricePercentageOverLowestPrice = jsonValue.GetInteger("spotMaxPricePercentageOverLowestPrice");
    m_spotMaxPricePercentageOverLowestPriceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("onDemandMaxPricePercentageOverLowestPrice")) {
    m_onDemandMaxPricePercentageOverLowestPrice = jsonValue.GetInteger("onDemandMaxPricePercentageOverLowestPrice");
    m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bareMetal")) {
    m_bareMetal = BareMetalMapper::GetBareMetalForName(jsonValue.GetString("bareMetal"));
    m_bareMetalHasBeenSet = true;
  }
  if (jsonValue.ValueExists("burstablePerformance")) {
    m_burstablePerformance = BurstablePerformanceMapper::GetBurstablePerformanceForName(jsonValue.GetString("burstablePerformance"));
    m_burstablePerformanceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("requireHibernateSupport")) {
    m_requireHibernateSupport = jsonValue.GetBool("requireHibernateSupport");
    m_requireHibernateSupportHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkInterfaceCount")) {
    m_networkInterfaceCount = jsonValue.GetObject("networkInterfaceCount");
    m_networkInterfaceCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("localStorage")) {
    m_localStorage = LocalStorageMapper::GetLocalStorageForName(jsonValue.GetString("localStorage"));
    m_localStorageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("localStorageTypes")) {
    Aws::Utils::Array<JsonView> localStorageTypesJsonList = jsonValue.GetArray("localStorageTypes");
    for (unsigned localStorageTypesIndex = 0; localStorageTypesIndex < localStorageTypesJsonList.GetLength(); ++localStorageTypesIndex) {
      m_localStorageTypes.push_back(
          LocalStorageTypeMapper::GetLocalStorageTypeForName(localStorageTypesJsonList[localStorageTypesIndex].AsString()));
    }
    m_localStorageTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("totalLocalStorageGB")) {
    m_totalLocalStorageGB = jsonValue.GetObject("totalLocalStorageGB");
    m_totalLocalStorageGBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("baselineEbsBandwidthMbps")) {
    m_baselineEbsBandwidthMbps = jsonValue.GetObject("baselineEbsBandwidthMbps");
    m_baselineEbsBandwidthMbpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acceleratorTypes")) {
    Aws::Utils::Array<JsonView> acceleratorTypesJsonList = jsonValue.GetArray("acceleratorTypes");
    for (unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex) {
      m_acceleratorTypes.push_back(
          AcceleratorTypeMapper::GetAcceleratorTypeForName(acceleratorTypesJsonList[acceleratorTypesIndex].AsString()));
    }
    m_acceleratorTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acceleratorCount")) {
    m_acceleratorCount = jsonValue.GetObject("acceleratorCount");
    m_acceleratorCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acceleratorManufacturers")) {
    Aws::Utils::Array<JsonView> acceleratorManufacturersJsonList = jsonValue.GetArray("acceleratorManufacturers");
    for (unsigned acceleratorManufacturersIndex = 0; acceleratorManufacturersIndex < acceleratorManufacturersJsonList.GetLength();
         ++acceleratorManufacturersIndex) {
      m_acceleratorManufacturers.push_back(AcceleratorManufacturerMapper::GetAcceleratorManufacturerForName(
          acceleratorManufacturersJsonList[acceleratorManufacturersIndex].AsString()));
    }
    m_acceleratorManufacturersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acceleratorNames")) {
    Aws::Utils::Array<JsonView> acceleratorNamesJsonList = jsonValue.GetArray("acceleratorNames");
    for (unsigned acceleratorNamesIndex = 0; acceleratorNamesIndex < acceleratorNamesJsonList.GetLength(); ++acceleratorNamesIndex) {
      m_acceleratorNames.push_back(
          AcceleratorNameMapper::GetAcceleratorNameForName(acceleratorNamesJsonList[acceleratorNamesIndex].AsString()));
    }
    m_acceleratorNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("acceleratorTotalMemoryMiB")) {
    m_acceleratorTotalMemoryMiB = jsonValue.GetObject("acceleratorTotalMemoryMiB");
    m_acceleratorTotalMemoryMiBHasBeenSet = true;
  }
  if (jsonValue.ValueExists("networkBandwidthGbps")) {
    m_networkBandwidthGbps = jsonValue.GetObject("networkBandwidthGbps");
    m_networkBandwidthGbpsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedInstanceTypes")) {
    Aws::Utils::Array<JsonView> allowedInstanceTypesJsonList = jsonValue.GetArray("allowedInstanceTypes");
    for (unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength();
         ++allowedInstanceTypesIndex) {
      m_allowedInstanceTypes.push_back(allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString());
    }
    m_allowedInstanceTypesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("maxSpotPriceAsPercentageOfOptimalOnDemandPrice")) {
    m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice = jsonValue.GetInteger("maxSpotPriceAsPercentageOfOptimalOnDemandPrice");
    m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet = true;
  }
  return *this;
}

JsonValue InstanceRequirementsRequest::Jsonize() const {
  JsonValue payload;

  if (m_vCpuCountHasBeenSet) {
    payload.WithObject("vCpuCount", m_vCpuCount.Jsonize());
  }

  if (m_memoryMiBHasBeenSet) {
    payload.WithObject("memoryMiB", m_memoryMiB.Jsonize());
  }

  if (m_cpuManufacturersHasBeenSet) {
    Aws::Utils::Array<JsonValue> cpuManufacturersJsonList(m_cpuManufacturers.size());
    for (unsigned cpuManufacturersIndex = 0; cpuManufacturersIndex < cpuManufacturersJsonList.GetLength(); ++cpuManufacturersIndex) {
      cpuManufacturersJsonList[cpuManufacturersIndex].AsString(
          CpuManufacturerMapper::GetNameForCpuManufacturer(m_cpuManufacturers[cpuManufacturersIndex]));
    }
    payload.WithArray("cpuManufacturers", std::move(cpuManufacturersJsonList));
  }

  if (m_memoryGiBPerVCpuHasBeenSet) {
    payload.WithObject("memoryGiBPerVCpu", m_memoryGiBPerVCpu.Jsonize());
  }

  if (m_excludedInstanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> excludedInstanceTypesJsonList(m_excludedInstanceTypes.size());
    for (unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength();
         ++excludedInstanceTypesIndex) {
      excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString(m_excludedInstanceTypes[excludedInstanceTypesIndex]);
    }
    payload.WithArray("excludedInstanceTypes", std::move(excludedInstanceTypesJsonList));
  }

  if (m_instanceGenerationsHasBeenSet) {
    Aws::Utils::Array<JsonValue> instanceGenerationsJsonList(m_instanceGenerations.size());
    for (unsigned instanceGenerationsIndex = 0; instanceGenerationsIndex < instanceGenerationsJsonList.GetLength();
         ++instanceGenerationsIndex) {
      instanceGenerationsJsonList[instanceGenerationsIndex].AsString(
          InstanceGenerationMapper::GetNameForInstanceGeneration(m_instanceGenerations[instanceGenerationsIndex]));
    }
    payload.WithArray("instanceGenerations", std::move(instanceGenerationsJsonList));
  }

  if (m_spotMaxPricePercentageOverLowestPriceHasBeenSet) {
    payload.WithInteger("spotMaxPricePercentageOverLowestPrice", m_spotMaxPricePercentageOverLowestPrice);
  }

  if (m_onDemandMaxPricePercentageOverLowestPriceHasBeenSet) {
    payload.WithInteger("onDemandMaxPricePercentageOverLowestPrice", m_onDemandMaxPricePercentageOverLowestPrice);
  }

  if (m_bareMetalHasBeenSet) {
    payload.WithString("bareMetal", BareMetalMapper::GetNameForBareMetal(m_bareMetal));
  }

  if (m_burstablePerformanceHasBeenSet) {
    payload.WithString("burstablePerformance", BurstablePerformanceMapper::GetNameForBurstablePerformance(m_burstablePerformance));
  }

  if (m_requireHibernateSupportHasBeenSet) {
    payload.WithBool("requireHibernateSupport", m_requireHibernateSupport);
  }

  if (m_networkInterfaceCountHasBeenSet) {
    payload.WithObject("networkInterfaceCount", m_networkInterfaceCount.Jsonize());
  }

  if (m_localStorageHasBeenSet) {
    payload.WithString("localStorage", LocalStorageMapper::GetNameForLocalStorage(m_localStorage));
  }

  if (m_localStorageTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> localStorageTypesJsonList(m_localStorageTypes.size());
    for (unsigned localStorageTypesIndex = 0; localStorageTypesIndex < localStorageTypesJsonList.GetLength(); ++localStorageTypesIndex) {
      localStorageTypesJsonList[localStorageTypesIndex].AsString(
          LocalStorageTypeMapper::GetNameForLocalStorageType(m_localStorageTypes[localStorageTypesIndex]));
    }
    payload.WithArray("localStorageTypes", std::move(localStorageTypesJsonList));
  }

  if (m_totalLocalStorageGBHasBeenSet) {
    payload.WithObject("totalLocalStorageGB", m_totalLocalStorageGB.Jsonize());
  }

  if (m_baselineEbsBandwidthMbpsHasBeenSet) {
    payload.WithObject("baselineEbsBandwidthMbps", m_baselineEbsBandwidthMbps.Jsonize());
  }

  if (m_acceleratorTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> acceleratorTypesJsonList(m_acceleratorTypes.size());
    for (unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex) {
      acceleratorTypesJsonList[acceleratorTypesIndex].AsString(
          AcceleratorTypeMapper::GetNameForAcceleratorType(m_acceleratorTypes[acceleratorTypesIndex]));
    }
    payload.WithArray("acceleratorTypes", std::move(acceleratorTypesJsonList));
  }

  if (m_acceleratorCountHasBeenSet) {
    payload.WithObject("acceleratorCount", m_acceleratorCount.Jsonize());
  }

  if (m_acceleratorManufacturersHasBeenSet) {
    Aws::Utils::Array<JsonValue> acceleratorManufacturersJsonList(m_acceleratorManufacturers.size());
    for (unsigned acceleratorManufacturersIndex = 0; acceleratorManufacturersIndex < acceleratorManufacturersJsonList.GetLength();
         ++acceleratorManufacturersIndex) {
      acceleratorManufacturersJsonList[acceleratorManufacturersIndex].AsString(
          AcceleratorManufacturerMapper::GetNameForAcceleratorManufacturer(m_acceleratorManufacturers[acceleratorManufacturersIndex]));
    }
    payload.WithArray("acceleratorManufacturers", std::move(acceleratorManufacturersJsonList));
  }

  if (m_acceleratorNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> acceleratorNamesJsonList(m_acceleratorNames.size());
    for (unsigned acceleratorNamesIndex = 0; acceleratorNamesIndex < acceleratorNamesJsonList.GetLength(); ++acceleratorNamesIndex) {
      acceleratorNamesJsonList[acceleratorNamesIndex].AsString(
          AcceleratorNameMapper::GetNameForAcceleratorName(m_acceleratorNames[acceleratorNamesIndex]));
    }
    payload.WithArray("acceleratorNames", std::move(acceleratorNamesJsonList));
  }

  if (m_acceleratorTotalMemoryMiBHasBeenSet) {
    payload.WithObject("acceleratorTotalMemoryMiB", m_acceleratorTotalMemoryMiB.Jsonize());
  }

  if (m_networkBandwidthGbpsHasBeenSet) {
    payload.WithObject("networkBandwidthGbps", m_networkBandwidthGbps.Jsonize());
  }

  if (m_allowedInstanceTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedInstanceTypesJsonList(m_allowedInstanceTypes.size());
    for (unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength();
         ++allowedInstanceTypesIndex) {
      allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString(m_allowedInstanceTypes[allowedInstanceTypesIndex]);
    }
    payload.WithArray("allowedInstanceTypes", std::move(allowedInstanceTypesJsonList));
  }

  if (m_maxSpotPriceAsPercentageOfOptimalOnDemandPriceHasBeenSet) {
    payload.WithInteger("maxSpotPriceAsPercentageOfOptimalOnDemandPrice", m_maxSpotPriceAsPercentageOfOptimalOnDemandPrice);
  }

  return payload;
}

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
