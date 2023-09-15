/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/Gpu.h>
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

Gpu::Gpu() : 
    m_gpuCount(0),
    m_gpuCountHasBeenSet(false),
    m_gpuMemorySizeInMiB(0),
    m_gpuMemorySizeInMiBHasBeenSet(false)
{
}

Gpu::Gpu(JsonView jsonValue) : 
    m_gpuCount(0),
    m_gpuCountHasBeenSet(false),
    m_gpuMemorySizeInMiB(0),
    m_gpuMemorySizeInMiBHasBeenSet(false)
{
  *this = jsonValue;
}

Gpu& Gpu::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gpuCount"))
  {
    m_gpuCount = jsonValue.GetInteger("gpuCount");

    m_gpuCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("gpuMemorySizeInMiB"))
  {
    m_gpuMemorySizeInMiB = jsonValue.GetInteger("gpuMemorySizeInMiB");

    m_gpuMemorySizeInMiBHasBeenSet = true;
  }

  return *this;
}

JsonValue Gpu::Jsonize() const
{
  JsonValue payload;

  if(m_gpuCountHasBeenSet)
  {
   payload.WithInteger("gpuCount", m_gpuCount);

  }

  if(m_gpuMemorySizeInMiBHasBeenSet)
  {
   payload.WithInteger("gpuMemorySizeInMiB", m_gpuMemorySizeInMiB);

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
