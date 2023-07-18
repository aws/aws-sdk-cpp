/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/SystemResourceLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

SystemResourceLimits::SystemResourceLimits() : 
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_cpus(0.0),
    m_cpusHasBeenSet(false)
{
}

SystemResourceLimits::SystemResourceLimits(JsonView jsonValue) : 
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_cpus(0.0),
    m_cpusHasBeenSet(false)
{
  *this = jsonValue;
}

SystemResourceLimits& SystemResourceLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInt64("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpus"))
  {
    m_cpus = jsonValue.GetDouble("cpus");

    m_cpusHasBeenSet = true;
  }

  return *this;
}

JsonValue SystemResourceLimits::Jsonize() const
{
  JsonValue payload;

  if(m_memoryHasBeenSet)
  {
   payload.WithInt64("memory", m_memory);

  }

  if(m_cpusHasBeenSet)
  {
   payload.WithDouble("cpus", m_cpus);

  }

  return payload;
}

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
