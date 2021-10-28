/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecs/model/RuntimePlatform.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECS
{
namespace Model
{

RuntimePlatform::RuntimePlatform() : 
    m_cpuArchitecture(CPUArchitecture::NOT_SET),
    m_cpuArchitectureHasBeenSet(false),
    m_operatingSystemFamily(OSFamily::NOT_SET),
    m_operatingSystemFamilyHasBeenSet(false)
{
}

RuntimePlatform::RuntimePlatform(JsonView jsonValue) : 
    m_cpuArchitecture(CPUArchitecture::NOT_SET),
    m_cpuArchitectureHasBeenSet(false),
    m_operatingSystemFamily(OSFamily::NOT_SET),
    m_operatingSystemFamilyHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimePlatform& RuntimePlatform::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("cpuArchitecture"))
  {
    m_cpuArchitecture = CPUArchitectureMapper::GetCPUArchitectureForName(jsonValue.GetString("cpuArchitecture"));

    m_cpuArchitectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("operatingSystemFamily"))
  {
    m_operatingSystemFamily = OSFamilyMapper::GetOSFamilyForName(jsonValue.GetString("operatingSystemFamily"));

    m_operatingSystemFamilyHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimePlatform::Jsonize() const
{
  JsonValue payload;

  if(m_cpuArchitectureHasBeenSet)
  {
   payload.WithString("cpuArchitecture", CPUArchitectureMapper::GetNameForCPUArchitecture(m_cpuArchitecture));
  }

  if(m_operatingSystemFamilyHasBeenSet)
  {
   payload.WithString("operatingSystemFamily", OSFamilyMapper::GetNameForOSFamily(m_operatingSystemFamily));
  }

  return payload;
}

} // namespace Model
} // namespace ECS
} // namespace Aws
