/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticmapreduce/model/SupportedInstanceType.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace EMR
{
namespace Model
{

SupportedInstanceType::SupportedInstanceType() : 
    m_typeHasBeenSet(false),
    m_memoryGB(0.0),
    m_memoryGBHasBeenSet(false),
    m_storageGB(0),
    m_storageGBHasBeenSet(false),
    m_vCPU(0),
    m_vCPUHasBeenSet(false),
    m_is64BitsOnly(false),
    m_is64BitsOnlyHasBeenSet(false),
    m_instanceFamilyIdHasBeenSet(false),
    m_ebsOptimizedAvailable(false),
    m_ebsOptimizedAvailableHasBeenSet(false),
    m_ebsOptimizedByDefault(false),
    m_ebsOptimizedByDefaultHasBeenSet(false),
    m_numberOfDisks(0),
    m_numberOfDisksHasBeenSet(false),
    m_ebsStorageOnly(false),
    m_ebsStorageOnlyHasBeenSet(false),
    m_architectureHasBeenSet(false)
{
}

SupportedInstanceType::SupportedInstanceType(JsonView jsonValue) : 
    m_typeHasBeenSet(false),
    m_memoryGB(0.0),
    m_memoryGBHasBeenSet(false),
    m_storageGB(0),
    m_storageGBHasBeenSet(false),
    m_vCPU(0),
    m_vCPUHasBeenSet(false),
    m_is64BitsOnly(false),
    m_is64BitsOnlyHasBeenSet(false),
    m_instanceFamilyIdHasBeenSet(false),
    m_ebsOptimizedAvailable(false),
    m_ebsOptimizedAvailableHasBeenSet(false),
    m_ebsOptimizedByDefault(false),
    m_ebsOptimizedByDefaultHasBeenSet(false),
    m_numberOfDisks(0),
    m_numberOfDisksHasBeenSet(false),
    m_ebsStorageOnly(false),
    m_ebsStorageOnlyHasBeenSet(false),
    m_architectureHasBeenSet(false)
{
  *this = jsonValue;
}

SupportedInstanceType& SupportedInstanceType::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MemoryGB"))
  {
    m_memoryGB = jsonValue.GetDouble("MemoryGB");

    m_memoryGBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageGB"))
  {
    m_storageGB = jsonValue.GetInteger("StorageGB");

    m_storageGBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VCPU"))
  {
    m_vCPU = jsonValue.GetInteger("VCPU");

    m_vCPUHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Is64BitsOnly"))
  {
    m_is64BitsOnly = jsonValue.GetBool("Is64BitsOnly");

    m_is64BitsOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceFamilyId"))
  {
    m_instanceFamilyId = jsonValue.GetString("InstanceFamilyId");

    m_instanceFamilyIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsOptimizedAvailable"))
  {
    m_ebsOptimizedAvailable = jsonValue.GetBool("EbsOptimizedAvailable");

    m_ebsOptimizedAvailableHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsOptimizedByDefault"))
  {
    m_ebsOptimizedByDefault = jsonValue.GetBool("EbsOptimizedByDefault");

    m_ebsOptimizedByDefaultHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumberOfDisks"))
  {
    m_numberOfDisks = jsonValue.GetInteger("NumberOfDisks");

    m_numberOfDisksHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EbsStorageOnly"))
  {
    m_ebsStorageOnly = jsonValue.GetBool("EbsStorageOnly");

    m_ebsStorageOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Architecture"))
  {
    m_architecture = jsonValue.GetString("Architecture");

    m_architectureHasBeenSet = true;
  }

  return *this;
}

JsonValue SupportedInstanceType::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", m_type);

  }

  if(m_memoryGBHasBeenSet)
  {
   payload.WithDouble("MemoryGB", m_memoryGB);

  }

  if(m_storageGBHasBeenSet)
  {
   payload.WithInteger("StorageGB", m_storageGB);

  }

  if(m_vCPUHasBeenSet)
  {
   payload.WithInteger("VCPU", m_vCPU);

  }

  if(m_is64BitsOnlyHasBeenSet)
  {
   payload.WithBool("Is64BitsOnly", m_is64BitsOnly);

  }

  if(m_instanceFamilyIdHasBeenSet)
  {
   payload.WithString("InstanceFamilyId", m_instanceFamilyId);

  }

  if(m_ebsOptimizedAvailableHasBeenSet)
  {
   payload.WithBool("EbsOptimizedAvailable", m_ebsOptimizedAvailable);

  }

  if(m_ebsOptimizedByDefaultHasBeenSet)
  {
   payload.WithBool("EbsOptimizedByDefault", m_ebsOptimizedByDefault);

  }

  if(m_numberOfDisksHasBeenSet)
  {
   payload.WithInteger("NumberOfDisks", m_numberOfDisks);

  }

  if(m_ebsStorageOnlyHasBeenSet)
  {
   payload.WithBool("EbsStorageOnly", m_ebsStorageOnly);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("Architecture", m_architecture);

  }

  return payload;
}

} // namespace Model
} // namespace EMR
} // namespace Aws
