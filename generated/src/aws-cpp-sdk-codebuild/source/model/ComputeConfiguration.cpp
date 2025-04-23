/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ComputeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

ComputeConfiguration::ComputeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ComputeConfiguration& ComputeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("vCpu"))
  {
    m_vCpu = jsonValue.GetInt64("vCpu");
    m_vCpuHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInt64("memory");
    m_memoryHasBeenSet = true;
  }
  if(jsonValue.ValueExists("disk"))
  {
    m_disk = jsonValue.GetInt64("disk");
    m_diskHasBeenSet = true;
  }
  if(jsonValue.ValueExists("machineType"))
  {
    m_machineType = MachineTypeMapper::GetMachineTypeForName(jsonValue.GetString("machineType"));
    m_machineTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ComputeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_vCpuHasBeenSet)
  {
   payload.WithInt64("vCpu", m_vCpu);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithInt64("memory", m_memory);

  }

  if(m_diskHasBeenSet)
  {
   payload.WithInt64("disk", m_disk);

  }

  if(m_machineTypeHasBeenSet)
  {
   payload.WithString("machineType", MachineTypeMapper::GetNameForMachineType(m_machineType));
  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  return payload;
}

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
