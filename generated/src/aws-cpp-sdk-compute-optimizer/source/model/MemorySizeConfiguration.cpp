/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/MemorySizeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

MemorySizeConfiguration::MemorySizeConfiguration() : 
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false)
{
}

MemorySizeConfiguration::MemorySizeConfiguration(JsonView jsonValue) : 
    m_memory(0),
    m_memoryHasBeenSet(false),
    m_memoryReservation(0),
    m_memoryReservationHasBeenSet(false)
{
  *this = jsonValue;
}

MemorySizeConfiguration& MemorySizeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memory"))
  {
    m_memory = jsonValue.GetInteger("memory");

    m_memoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memoryReservation"))
  {
    m_memoryReservation = jsonValue.GetInteger("memoryReservation");

    m_memoryReservationHasBeenSet = true;
  }

  return *this;
}

JsonValue MemorySizeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_memoryHasBeenSet)
  {
   payload.WithInteger("memory", m_memory);

  }

  if(m_memoryReservationHasBeenSet)
  {
   payload.WithInteger("memoryReservation", m_memoryReservation);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
