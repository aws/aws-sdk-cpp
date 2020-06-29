/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/EC2ResourceDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

EC2ResourceDetails::EC2ResourceDetails() : 
    m_hourlyOnDemandRateHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_skuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_networkPerformanceHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_vcpuHasBeenSet(false)
{
}

EC2ResourceDetails::EC2ResourceDetails(JsonView jsonValue) : 
    m_hourlyOnDemandRateHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_skuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_networkPerformanceHasBeenSet(false),
    m_storageHasBeenSet(false),
    m_vcpuHasBeenSet(false)
{
  *this = jsonValue;
}

EC2ResourceDetails& EC2ResourceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("HourlyOnDemandRate"))
  {
    m_hourlyOnDemandRate = jsonValue.GetString("HourlyOnDemandRate");

    m_hourlyOnDemandRateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = jsonValue.GetString("InstanceType");

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Platform"))
  {
    m_platform = jsonValue.GetString("Platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Region"))
  {
    m_region = jsonValue.GetString("Region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Sku"))
  {
    m_sku = jsonValue.GetString("Sku");

    m_skuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Memory"))
  {
    m_memory = jsonValue.GetString("Memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NetworkPerformance"))
  {
    m_networkPerformance = jsonValue.GetString("NetworkPerformance");

    m_networkPerformanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Storage"))
  {
    m_storage = jsonValue.GetString("Storage");

    m_storageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Vcpu"))
  {
    m_vcpu = jsonValue.GetString("Vcpu");

    m_vcpuHasBeenSet = true;
  }

  return *this;
}

JsonValue EC2ResourceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_hourlyOnDemandRateHasBeenSet)
  {
   payload.WithString("HourlyOnDemandRate", m_hourlyOnDemandRate);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", m_instanceType);

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("Platform", m_platform);

  }

  if(m_regionHasBeenSet)
  {
   payload.WithString("Region", m_region);

  }

  if(m_skuHasBeenSet)
  {
   payload.WithString("Sku", m_sku);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("Memory", m_memory);

  }

  if(m_networkPerformanceHasBeenSet)
  {
   payload.WithString("NetworkPerformance", m_networkPerformance);

  }

  if(m_storageHasBeenSet)
  {
   payload.WithString("Storage", m_storage);

  }

  if(m_vcpuHasBeenSet)
  {
   payload.WithString("Vcpu", m_vcpu);

  }

  return payload;
}

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
