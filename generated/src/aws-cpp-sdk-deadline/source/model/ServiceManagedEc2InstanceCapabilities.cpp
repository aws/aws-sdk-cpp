/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ServiceManagedEc2InstanceCapabilities.h>
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

ServiceManagedEc2InstanceCapabilities::ServiceManagedEc2InstanceCapabilities(JsonView jsonValue)
{
  *this = jsonValue;
}

ServiceManagedEc2InstanceCapabilities& ServiceManagedEc2InstanceCapabilities::operator =(JsonView jsonValue)
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
  if(jsonValue.ValueExists("osFamily"))
  {
    m_osFamily = ServiceManagedFleetOperatingSystemFamilyMapper::GetServiceManagedFleetOperatingSystemFamilyForName(jsonValue.GetString("osFamily"));
    m_osFamilyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("cpuArchitectureType"))
  {
    m_cpuArchitectureType = CpuArchitectureTypeMapper::GetCpuArchitectureTypeForName(jsonValue.GetString("cpuArchitectureType"));
    m_cpuArchitectureTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("rootEbsVolume"))
  {
    m_rootEbsVolume = jsonValue.GetObject("rootEbsVolume");
    m_rootEbsVolumeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("acceleratorCapabilities"))
  {
    m_acceleratorCapabilities = jsonValue.GetObject("acceleratorCapabilities");
    m_acceleratorCapabilitiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allowedInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> allowedInstanceTypesJsonList = jsonValue.GetArray("allowedInstanceTypes");
    for(unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength(); ++allowedInstanceTypesIndex)
    {
      m_allowedInstanceTypes.push_back(allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString());
    }
    m_allowedInstanceTypesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("excludedInstanceTypes"))
  {
    Aws::Utils::Array<JsonView> excludedInstanceTypesJsonList = jsonValue.GetArray("excludedInstanceTypes");
    for(unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength(); ++excludedInstanceTypesIndex)
    {
      m_excludedInstanceTypes.push_back(excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString());
    }
    m_excludedInstanceTypesHasBeenSet = true;
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

JsonValue ServiceManagedEc2InstanceCapabilities::Jsonize() const
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

  if(m_osFamilyHasBeenSet)
  {
   payload.WithString("osFamily", ServiceManagedFleetOperatingSystemFamilyMapper::GetNameForServiceManagedFleetOperatingSystemFamily(m_osFamily));
  }

  if(m_cpuArchitectureTypeHasBeenSet)
  {
   payload.WithString("cpuArchitectureType", CpuArchitectureTypeMapper::GetNameForCpuArchitectureType(m_cpuArchitectureType));
  }

  if(m_rootEbsVolumeHasBeenSet)
  {
   payload.WithObject("rootEbsVolume", m_rootEbsVolume.Jsonize());

  }

  if(m_acceleratorCapabilitiesHasBeenSet)
  {
   payload.WithObject("acceleratorCapabilities", m_acceleratorCapabilities.Jsonize());

  }

  if(m_allowedInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedInstanceTypesJsonList(m_allowedInstanceTypes.size());
   for(unsigned allowedInstanceTypesIndex = 0; allowedInstanceTypesIndex < allowedInstanceTypesJsonList.GetLength(); ++allowedInstanceTypesIndex)
   {
     allowedInstanceTypesJsonList[allowedInstanceTypesIndex].AsString(m_allowedInstanceTypes[allowedInstanceTypesIndex]);
   }
   payload.WithArray("allowedInstanceTypes", std::move(allowedInstanceTypesJsonList));

  }

  if(m_excludedInstanceTypesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> excludedInstanceTypesJsonList(m_excludedInstanceTypes.size());
   for(unsigned excludedInstanceTypesIndex = 0; excludedInstanceTypesIndex < excludedInstanceTypesJsonList.GetLength(); ++excludedInstanceTypesIndex)
   {
     excludedInstanceTypesJsonList[excludedInstanceTypesIndex].AsString(m_excludedInstanceTypes[excludedInstanceTypesIndex]);
   }
   payload.WithArray("excludedInstanceTypes", std::move(excludedInstanceTypesJsonList));

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
