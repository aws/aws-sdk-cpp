/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/ContainerRecommendation.h>
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

ContainerRecommendation::ContainerRecommendation() : 
    m_containerNameHasBeenSet(false),
    m_memorySizeConfigurationHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false)
{
}

ContainerRecommendation::ContainerRecommendation(JsonView jsonValue) : 
    m_containerNameHasBeenSet(false),
    m_memorySizeConfigurationHasBeenSet(false),
    m_cpu(0),
    m_cpuHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerRecommendation& ContainerRecommendation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("containerName"))
  {
    m_containerName = jsonValue.GetString("containerName");

    m_containerNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("memorySizeConfiguration"))
  {
    m_memorySizeConfiguration = jsonValue.GetObject("memorySizeConfiguration");

    m_memorySizeConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cpu"))
  {
    m_cpu = jsonValue.GetInteger("cpu");

    m_cpuHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerRecommendation::Jsonize() const
{
  JsonValue payload;

  if(m_containerNameHasBeenSet)
  {
   payload.WithString("containerName", m_containerName);

  }

  if(m_memorySizeConfigurationHasBeenSet)
  {
   payload.WithObject("memorySizeConfiguration", m_memorySizeConfiguration.Jsonize());

  }

  if(m_cpuHasBeenSet)
  {
   payload.WithInteger("cpu", m_cpu);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
