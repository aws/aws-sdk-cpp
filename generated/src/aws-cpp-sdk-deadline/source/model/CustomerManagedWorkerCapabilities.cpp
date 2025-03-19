/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CustomerManagedWorkerCapabilities.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

CustomerManagedWorkerCapabilities::CustomerManagedWorkerCapabilities(JsonView jsonValue)
{
  *this = jsonValue;
}

CustomerManagedWorkerCapabilities& CustomerManagedWorkerCapabilities::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vCpuCount"))
  {
    m_vCpuCount = jsonValue.GetObject("vCpuCount");
    m_vCpuCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memoryMiB"))
  {
    m_memoryMiB = jsonValue.GetObject("memoryMiB");
    m_memoryMiBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("acceleratorTypes"))
  {
    Aws::Utils::Array<JsonView> acceleratorTypesJsonList = jsonValue.GetArray("acceleratorTypes");
    for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
    {
      m_acceleratorTypes.push_back(AcceleratorTypeMapper::GetAcceleratorTypeForName(acceleratorTypesJsonList[acceleratorTypesIndex].AsString()));
    }
    m_acceleratorTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("acceleratorCount"))
  {
    m_acceleratorCount = jsonValue.GetObject("acceleratorCount");
    m_acceleratorCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("acceleratorTotalMemoryMiB"))
  {
    m_acceleratorTotalMemoryMiB = jsonValue.GetObject("acceleratorTotalMemoryMiB");
    m_acceleratorTotalMemoryMiBHasBeenSet = true;
  }
  if(jsonValue.ValueExists("osFamily"))
  {
    m_osFamily = CustomerManagedFleetOperatingSystemFamilyMapper::GetCustomerManagedFleetOperatingSystemFamilyForName(jsonValue.GetString("osFamily"));
    m_osFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuArchitectureType"))
  {
    m_cpuArchitectureType = CpuArchitectureTypeMapper::GetCpuArchitectureTypeForName(jsonValue.GetString("cpuArchitectureType"));
    m_cpuArchitectureTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customAmounts"))
  {
    Aws::Utils::Array<JsonView> customAmountsJsonList = jsonValue.GetArray("customAmounts");
    for(unsigned customAmountsIndex = 0; customAmountsIndex < customAmountsJsonList.GetLength(); ++customAmountsIndex)
    {
      m_customAmounts.push_back(customAmountsJsonList[customAmountsIndex].AsObject());
    }
    m_customAmountsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("customAttributes"))
  {
    Aws::Utils::Array<JsonView> customAttributesJsonList = jsonValue.GetArray("customAttributes");
    for(unsigned customAttributesIndex = 0; customAttributesIndex < customAttributesJsonList.GetLength(); ++customAttributesIndex)
    {
      m_customAttributes.push_back(customAttributesJsonList[customAttributesIndex].AsObject());
    }
    m_customAttributesHasBeenSet = true;
  }
  return *this;
}

JsonValue CustomerManagedWorkerCapabilities::Jsonize() const
{
  JsonValue payload;

  if(m_vCpuCountHasBeenSet)
  {
   payload.WithObject("vCpuCount", m_vCpuCount.Jsonize());

  }

  if(m_memoryMiBHasBeenSet)
  {
   payload.WithObject("memoryMiB", m_memoryMiB.Jsonize());

  }

  if(m_acceleratorTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> acceleratorTypesJsonList(m_acceleratorTypes.size());
   for(unsigned acceleratorTypesIndex = 0; acceleratorTypesIndex < acceleratorTypesJsonList.GetLength(); ++acceleratorTypesIndex)
   {
     acceleratorTypesJsonList[acceleratorTypesIndex].AsString(AcceleratorTypeMapper::GetNameForAcceleratorType(m_acceleratorTypes[acceleratorTypesIndex]));
   }
   payload.WithArray("acceleratorTypes", std::move(acceleratorTypesJsonList));

  }

  if(m_acceleratorCountHasBeenSet)
  {
   payload.WithObject("acceleratorCount", m_acceleratorCount.Jsonize());

  }

  if(m_acceleratorTotalMemoryMiBHasBeenSet)
  {
   payload.WithObject("acceleratorTotalMemoryMiB", m_acceleratorTotalMemoryMiB.Jsonize());

  }

  if(m_osFamilyHasBeenSet)
  {
   payload.WithString("osFamily", CustomerManagedFleetOperatingSystemFamilyMapper::GetNameForCustomerManagedFleetOperatingSystemFamily(m_osFamily));
  }

  if(m_cpuArchitectureTypeHasBeenSet)
  {
   payload.WithString("cpuArchitectureType", CpuArchitectureTypeMapper::GetNameForCpuArchitectureType(m_cpuArchitectureType));
  }

  if(m_customAmountsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customAmountsJsonList(m_customAmounts.size());
   for(unsigned customAmountsIndex = 0; customAmountsIndex < customAmountsJsonList.GetLength(); ++customAmountsIndex)
   {
     customAmountsJsonList[customAmountsIndex].AsObject(m_customAmounts[customAmountsIndex].Jsonize());
   }
   payload.WithArray("customAmounts", std::move(customAmountsJsonList));

  }

  if(m_customAttributesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customAttributesJsonList(m_customAttributes.size());
   for(unsigned customAttributesIndex = 0; customAttributesIndex < customAttributesJsonList.GetLength(); ++customAttributesIndex)
   {
     customAttributesJsonList[customAttributesIndex].AsObject(m_customAttributes[customAttributesIndex].Jsonize());
   }
   payload.WithArray("customAttributes", std::move(customAttributesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
