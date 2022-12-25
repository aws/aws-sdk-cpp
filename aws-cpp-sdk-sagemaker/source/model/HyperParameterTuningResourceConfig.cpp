/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/HyperParameterTuningResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SageMaker
{
namespace Model
{

HyperParameterTuningResourceConfig::HyperParameterTuningResourceConfig() : 
    m_instanceType(TrainingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_allocationStrategy(HyperParameterTuningAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_instanceConfigsHasBeenSet(false)
{
}

HyperParameterTuningResourceConfig::HyperParameterTuningResourceConfig(JsonView jsonValue) : 
    m_instanceType(TrainingInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instanceCount(0),
    m_instanceCountHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_volumeKmsKeyIdHasBeenSet(false),
    m_allocationStrategy(HyperParameterTuningAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_instanceConfigsHasBeenSet(false)
{
  *this = jsonValue;
}

HyperParameterTuningResourceConfig& HyperParameterTuningResourceConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = TrainingInstanceTypeMapper::GetTrainingInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceCount"))
  {
    m_instanceCount = jsonValue.GetInteger("InstanceCount");

    m_instanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");

    m_volumeSizeInGBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeKmsKeyId"))
  {
    m_volumeKmsKeyId = jsonValue.GetString("VolumeKmsKeyId");

    m_volumeKmsKeyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AllocationStrategy"))
  {
    m_allocationStrategy = HyperParameterTuningAllocationStrategyMapper::GetHyperParameterTuningAllocationStrategyForName(jsonValue.GetString("AllocationStrategy"));

    m_allocationStrategyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceConfigs"))
  {
    Aws::Utils::Array<JsonView> instanceConfigsJsonList = jsonValue.GetArray("InstanceConfigs");
    for(unsigned instanceConfigsIndex = 0; instanceConfigsIndex < instanceConfigsJsonList.GetLength(); ++instanceConfigsIndex)
    {
      m_instanceConfigs.push_back(instanceConfigsJsonList[instanceConfigsIndex].AsObject());
    }
    m_instanceConfigsHasBeenSet = true;
  }

  return *this;
}

JsonValue HyperParameterTuningResourceConfig::Jsonize() const
{
  JsonValue payload;

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", TrainingInstanceTypeMapper::GetNameForTrainingInstanceType(m_instanceType));
  }

  if(m_instanceCountHasBeenSet)
  {
   payload.WithInteger("InstanceCount", m_instanceCount);

  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_volumeKmsKeyIdHasBeenSet)
  {
   payload.WithString("VolumeKmsKeyId", m_volumeKmsKeyId);

  }

  if(m_allocationStrategyHasBeenSet)
  {
   payload.WithString("AllocationStrategy", HyperParameterTuningAllocationStrategyMapper::GetNameForHyperParameterTuningAllocationStrategy(m_allocationStrategy));
  }

  if(m_instanceConfigsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> instanceConfigsJsonList(m_instanceConfigs.size());
   for(unsigned instanceConfigsIndex = 0; instanceConfigsIndex < instanceConfigsJsonList.GetLength(); ++instanceConfigsIndex)
   {
     instanceConfigsJsonList[instanceConfigsIndex].AsObject(m_instanceConfigs[instanceConfigsIndex].Jsonize());
   }
   payload.WithArray("InstanceConfigs", std::move(instanceConfigsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
