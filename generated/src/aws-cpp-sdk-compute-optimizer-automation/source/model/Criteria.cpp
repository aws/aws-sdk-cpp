/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer-automation/model/Criteria.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ComputeOptimizerAutomation {
namespace Model {

Criteria::Criteria(JsonView jsonValue) { *this = jsonValue; }

Criteria& Criteria::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("region")) {
    Aws::Utils::Array<JsonView> regionJsonList = jsonValue.GetArray("region");
    for (unsigned regionIndex = 0; regionIndex < regionJsonList.GetLength(); ++regionIndex) {
      m_region.push_back(regionJsonList[regionIndex].AsObject());
    }
    m_regionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceArn")) {
    Aws::Utils::Array<JsonView> resourceArnJsonList = jsonValue.GetArray("resourceArn");
    for (unsigned resourceArnIndex = 0; resourceArnIndex < resourceArnJsonList.GetLength(); ++resourceArnIndex) {
      m_resourceArn.push_back(resourceArnJsonList[resourceArnIndex].AsObject());
    }
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ebsVolumeType")) {
    Aws::Utils::Array<JsonView> ebsVolumeTypeJsonList = jsonValue.GetArray("ebsVolumeType");
    for (unsigned ebsVolumeTypeIndex = 0; ebsVolumeTypeIndex < ebsVolumeTypeJsonList.GetLength(); ++ebsVolumeTypeIndex) {
      m_ebsVolumeType.push_back(ebsVolumeTypeJsonList[ebsVolumeTypeIndex].AsObject());
    }
    m_ebsVolumeTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ebsVolumeSizeInGib")) {
    Aws::Utils::Array<JsonView> ebsVolumeSizeInGibJsonList = jsonValue.GetArray("ebsVolumeSizeInGib");
    for (unsigned ebsVolumeSizeInGibIndex = 0; ebsVolumeSizeInGibIndex < ebsVolumeSizeInGibJsonList.GetLength();
         ++ebsVolumeSizeInGibIndex) {
      m_ebsVolumeSizeInGib.push_back(ebsVolumeSizeInGibJsonList[ebsVolumeSizeInGibIndex].AsObject());
    }
    m_ebsVolumeSizeInGibHasBeenSet = true;
  }
  if (jsonValue.ValueExists("estimatedMonthlySavings")) {
    Aws::Utils::Array<JsonView> estimatedMonthlySavingsJsonList = jsonValue.GetArray("estimatedMonthlySavings");
    for (unsigned estimatedMonthlySavingsIndex = 0; estimatedMonthlySavingsIndex < estimatedMonthlySavingsJsonList.GetLength();
         ++estimatedMonthlySavingsIndex) {
      m_estimatedMonthlySavings.push_back(estimatedMonthlySavingsJsonList[estimatedMonthlySavingsIndex].AsObject());
    }
    m_estimatedMonthlySavingsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resourceTag")) {
    Aws::Utils::Array<JsonView> resourceTagJsonList = jsonValue.GetArray("resourceTag");
    for (unsigned resourceTagIndex = 0; resourceTagIndex < resourceTagJsonList.GetLength(); ++resourceTagIndex) {
      m_resourceTag.push_back(resourceTagJsonList[resourceTagIndex].AsObject());
    }
    m_resourceTagHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lookBackPeriodInDays")) {
    Aws::Utils::Array<JsonView> lookBackPeriodInDaysJsonList = jsonValue.GetArray("lookBackPeriodInDays");
    for (unsigned lookBackPeriodInDaysIndex = 0; lookBackPeriodInDaysIndex < lookBackPeriodInDaysJsonList.GetLength();
         ++lookBackPeriodInDaysIndex) {
      m_lookBackPeriodInDays.push_back(lookBackPeriodInDaysJsonList[lookBackPeriodInDaysIndex].AsObject());
    }
    m_lookBackPeriodInDaysHasBeenSet = true;
  }
  if (jsonValue.ValueExists("restartNeeded")) {
    Aws::Utils::Array<JsonView> restartNeededJsonList = jsonValue.GetArray("restartNeeded");
    for (unsigned restartNeededIndex = 0; restartNeededIndex < restartNeededJsonList.GetLength(); ++restartNeededIndex) {
      m_restartNeeded.push_back(restartNeededJsonList[restartNeededIndex].AsObject());
    }
    m_restartNeededHasBeenSet = true;
  }
  return *this;
}

JsonValue Criteria::Jsonize() const {
  JsonValue payload;

  if (m_regionHasBeenSet) {
    Aws::Utils::Array<JsonValue> regionJsonList(m_region.size());
    for (unsigned regionIndex = 0; regionIndex < regionJsonList.GetLength(); ++regionIndex) {
      regionJsonList[regionIndex].AsObject(m_region[regionIndex].Jsonize());
    }
    payload.WithArray("region", std::move(regionJsonList));
  }

  if (m_resourceArnHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceArnJsonList(m_resourceArn.size());
    for (unsigned resourceArnIndex = 0; resourceArnIndex < resourceArnJsonList.GetLength(); ++resourceArnIndex) {
      resourceArnJsonList[resourceArnIndex].AsObject(m_resourceArn[resourceArnIndex].Jsonize());
    }
    payload.WithArray("resourceArn", std::move(resourceArnJsonList));
  }

  if (m_ebsVolumeTypeHasBeenSet) {
    Aws::Utils::Array<JsonValue> ebsVolumeTypeJsonList(m_ebsVolumeType.size());
    for (unsigned ebsVolumeTypeIndex = 0; ebsVolumeTypeIndex < ebsVolumeTypeJsonList.GetLength(); ++ebsVolumeTypeIndex) {
      ebsVolumeTypeJsonList[ebsVolumeTypeIndex].AsObject(m_ebsVolumeType[ebsVolumeTypeIndex].Jsonize());
    }
    payload.WithArray("ebsVolumeType", std::move(ebsVolumeTypeJsonList));
  }

  if (m_ebsVolumeSizeInGibHasBeenSet) {
    Aws::Utils::Array<JsonValue> ebsVolumeSizeInGibJsonList(m_ebsVolumeSizeInGib.size());
    for (unsigned ebsVolumeSizeInGibIndex = 0; ebsVolumeSizeInGibIndex < ebsVolumeSizeInGibJsonList.GetLength();
         ++ebsVolumeSizeInGibIndex) {
      ebsVolumeSizeInGibJsonList[ebsVolumeSizeInGibIndex].AsObject(m_ebsVolumeSizeInGib[ebsVolumeSizeInGibIndex].Jsonize());
    }
    payload.WithArray("ebsVolumeSizeInGib", std::move(ebsVolumeSizeInGibJsonList));
  }

  if (m_estimatedMonthlySavingsHasBeenSet) {
    Aws::Utils::Array<JsonValue> estimatedMonthlySavingsJsonList(m_estimatedMonthlySavings.size());
    for (unsigned estimatedMonthlySavingsIndex = 0; estimatedMonthlySavingsIndex < estimatedMonthlySavingsJsonList.GetLength();
         ++estimatedMonthlySavingsIndex) {
      estimatedMonthlySavingsJsonList[estimatedMonthlySavingsIndex].AsObject(
          m_estimatedMonthlySavings[estimatedMonthlySavingsIndex].Jsonize());
    }
    payload.WithArray("estimatedMonthlySavings", std::move(estimatedMonthlySavingsJsonList));
  }

  if (m_resourceTagHasBeenSet) {
    Aws::Utils::Array<JsonValue> resourceTagJsonList(m_resourceTag.size());
    for (unsigned resourceTagIndex = 0; resourceTagIndex < resourceTagJsonList.GetLength(); ++resourceTagIndex) {
      resourceTagJsonList[resourceTagIndex].AsObject(m_resourceTag[resourceTagIndex].Jsonize());
    }
    payload.WithArray("resourceTag", std::move(resourceTagJsonList));
  }

  if (m_lookBackPeriodInDaysHasBeenSet) {
    Aws::Utils::Array<JsonValue> lookBackPeriodInDaysJsonList(m_lookBackPeriodInDays.size());
    for (unsigned lookBackPeriodInDaysIndex = 0; lookBackPeriodInDaysIndex < lookBackPeriodInDaysJsonList.GetLength();
         ++lookBackPeriodInDaysIndex) {
      lookBackPeriodInDaysJsonList[lookBackPeriodInDaysIndex].AsObject(m_lookBackPeriodInDays[lookBackPeriodInDaysIndex].Jsonize());
    }
    payload.WithArray("lookBackPeriodInDays", std::move(lookBackPeriodInDaysJsonList));
  }

  if (m_restartNeededHasBeenSet) {
    Aws::Utils::Array<JsonValue> restartNeededJsonList(m_restartNeeded.size());
    for (unsigned restartNeededIndex = 0; restartNeededIndex < restartNeededJsonList.GetLength(); ++restartNeededIndex) {
      restartNeededJsonList[restartNeededIndex].AsObject(m_restartNeeded[restartNeededIndex].Jsonize());
    }
    payload.WithArray("restartNeeded", std::move(restartNeededJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ComputeOptimizerAutomation
}  // namespace Aws
