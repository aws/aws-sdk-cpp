/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ProductionVariant.h>
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

ProductionVariant::ProductionVariant() : 
    m_variantNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_initialInstanceCount(0),
    m_initialInstanceCountHasBeenSet(false),
    m_instanceType(ProductionVariantInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_initialVariantWeight(0.0),
    m_initialVariantWeightHasBeenSet(false),
    m_acceleratorType(ProductionVariantAcceleratorType::NOT_SET),
    m_acceleratorTypeHasBeenSet(false),
    m_coreDumpConfigHasBeenSet(false),
    m_serverlessConfigHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_modelDataDownloadTimeoutInSeconds(0),
    m_modelDataDownloadTimeoutInSecondsHasBeenSet(false),
    m_containerStartupHealthCheckTimeoutInSeconds(0),
    m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet(false)
{
}

ProductionVariant::ProductionVariant(JsonView jsonValue) : 
    m_variantNameHasBeenSet(false),
    m_modelNameHasBeenSet(false),
    m_initialInstanceCount(0),
    m_initialInstanceCountHasBeenSet(false),
    m_instanceType(ProductionVariantInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_initialVariantWeight(0.0),
    m_initialVariantWeightHasBeenSet(false),
    m_acceleratorType(ProductionVariantAcceleratorType::NOT_SET),
    m_acceleratorTypeHasBeenSet(false),
    m_coreDumpConfigHasBeenSet(false),
    m_serverlessConfigHasBeenSet(false),
    m_volumeSizeInGB(0),
    m_volumeSizeInGBHasBeenSet(false),
    m_modelDataDownloadTimeoutInSeconds(0),
    m_modelDataDownloadTimeoutInSecondsHasBeenSet(false),
    m_containerStartupHealthCheckTimeoutInSeconds(0),
    m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet(false)
{
  *this = jsonValue;
}

ProductionVariant& ProductionVariant::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VariantName"))
  {
    m_variantName = jsonValue.GetString("VariantName");

    m_variantNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelName"))
  {
    m_modelName = jsonValue.GetString("ModelName");

    m_modelNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialInstanceCount"))
  {
    m_initialInstanceCount = jsonValue.GetInteger("InitialInstanceCount");

    m_initialInstanceCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = ProductionVariantInstanceTypeMapper::GetProductionVariantInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InitialVariantWeight"))
  {
    m_initialVariantWeight = jsonValue.GetDouble("InitialVariantWeight");

    m_initialVariantWeightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AcceleratorType"))
  {
    m_acceleratorType = ProductionVariantAcceleratorTypeMapper::GetProductionVariantAcceleratorTypeForName(jsonValue.GetString("AcceleratorType"));

    m_acceleratorTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CoreDumpConfig"))
  {
    m_coreDumpConfig = jsonValue.GetObject("CoreDumpConfig");

    m_coreDumpConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServerlessConfig"))
  {
    m_serverlessConfig = jsonValue.GetObject("ServerlessConfig");

    m_serverlessConfigHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumeSizeInGB"))
  {
    m_volumeSizeInGB = jsonValue.GetInteger("VolumeSizeInGB");

    m_volumeSizeInGBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ModelDataDownloadTimeoutInSeconds"))
  {
    m_modelDataDownloadTimeoutInSeconds = jsonValue.GetInteger("ModelDataDownloadTimeoutInSeconds");

    m_modelDataDownloadTimeoutInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ContainerStartupHealthCheckTimeoutInSeconds"))
  {
    m_containerStartupHealthCheckTimeoutInSeconds = jsonValue.GetInteger("ContainerStartupHealthCheckTimeoutInSeconds");

    m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet = true;
  }

  return *this;
}

JsonValue ProductionVariant::Jsonize() const
{
  JsonValue payload;

  if(m_variantNameHasBeenSet)
  {
   payload.WithString("VariantName", m_variantName);

  }

  if(m_modelNameHasBeenSet)
  {
   payload.WithString("ModelName", m_modelName);

  }

  if(m_initialInstanceCountHasBeenSet)
  {
   payload.WithInteger("InitialInstanceCount", m_initialInstanceCount);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", ProductionVariantInstanceTypeMapper::GetNameForProductionVariantInstanceType(m_instanceType));
  }

  if(m_initialVariantWeightHasBeenSet)
  {
   payload.WithDouble("InitialVariantWeight", m_initialVariantWeight);

  }

  if(m_acceleratorTypeHasBeenSet)
  {
   payload.WithString("AcceleratorType", ProductionVariantAcceleratorTypeMapper::GetNameForProductionVariantAcceleratorType(m_acceleratorType));
  }

  if(m_coreDumpConfigHasBeenSet)
  {
   payload.WithObject("CoreDumpConfig", m_coreDumpConfig.Jsonize());

  }

  if(m_serverlessConfigHasBeenSet)
  {
   payload.WithObject("ServerlessConfig", m_serverlessConfig.Jsonize());

  }

  if(m_volumeSizeInGBHasBeenSet)
  {
   payload.WithInteger("VolumeSizeInGB", m_volumeSizeInGB);

  }

  if(m_modelDataDownloadTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("ModelDataDownloadTimeoutInSeconds", m_modelDataDownloadTimeoutInSeconds);

  }

  if(m_containerStartupHealthCheckTimeoutInSecondsHasBeenSet)
  {
   payload.WithInteger("ContainerStartupHealthCheckTimeoutInSeconds", m_containerStartupHealthCheckTimeoutInSeconds);

  }

  return payload;
}

} // namespace Model
} // namespace SageMaker
} // namespace Aws
