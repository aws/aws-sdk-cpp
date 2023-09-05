/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GpuInfo.h>
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

GpuInfo::GpuInfo() : 
    m_gpusHasBeenSet(false)
{
}

GpuInfo::GpuInfo(JsonView jsonValue) : 
    m_gpusHasBeenSet(false)
{
  *this = jsonValue;
}

GpuInfo& GpuInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("gpus"))
  {
    Aws::Utils::Array<JsonView> gpusJsonList = jsonValue.GetArray("gpus");
    for(unsigned gpusIndex = 0; gpusIndex < gpusJsonList.GetLength(); ++gpusIndex)
    {
      m_gpus.push_back(gpusJsonList[gpusIndex].AsObject());
    }
    m_gpusHasBeenSet = true;
  }

  return *this;
}

JsonValue GpuInfo::Jsonize() const
{
  JsonValue payload;

  if(m_gpusHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> gpusJsonList(m_gpus.size());
   for(unsigned gpusIndex = 0; gpusIndex < gpusJsonList.GetLength(); ++gpusIndex)
   {
     gpusJsonList[gpusIndex].AsObject(m_gpus[gpusIndex].Jsonize());
   }
   payload.WithArray("gpus", std::move(gpusJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
