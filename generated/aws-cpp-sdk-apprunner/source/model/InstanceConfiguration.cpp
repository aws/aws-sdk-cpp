/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apprunner/model/InstanceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppRunner
{
namespace Model
{

InstanceConfiguration::InstanceConfiguration() : 
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceRoleArnHasBeenSet(false)
{
}

InstanceConfiguration::InstanceConfiguration(JsonView jsonValue) : 
    m_cpuHasBeenSet(false),
    m_memoryHasBeenSet(false),
    m_instanceRoleArnHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceConfiguration& InstanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Cpu"))
  {
    m_cpu = jsonValue.GetString("Cpu");

    m_cpuHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Memory"))
  {
    m_memory = jsonValue.GetString("Memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceRoleArn"))
  {
    m_instanceRoleArn = jsonValue.GetString("InstanceRoleArn");

    m_instanceRoleArnHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_cpuHasBeenSet)
  {
   payload.WithString("Cpu", m_cpu);

  }

  if(m_memoryHasBeenSet)
  {
   payload.WithString("Memory", m_memory);

  }

  if(m_instanceRoleArnHasBeenSet)
  {
   payload.WithString("InstanceRoleArn", m_instanceRoleArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppRunner
} // namespace Aws
