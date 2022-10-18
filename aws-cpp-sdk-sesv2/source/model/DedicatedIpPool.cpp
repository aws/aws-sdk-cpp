/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/DedicatedIpPool.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

DedicatedIpPool::DedicatedIpPool() : 
    m_poolNameHasBeenSet(false),
    m_scalingMode(ScalingMode::NOT_SET),
    m_scalingModeHasBeenSet(false)
{
}

DedicatedIpPool::DedicatedIpPool(JsonView jsonValue) : 
    m_poolNameHasBeenSet(false),
    m_scalingMode(ScalingMode::NOT_SET),
    m_scalingModeHasBeenSet(false)
{
  *this = jsonValue;
}

DedicatedIpPool& DedicatedIpPool::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("PoolName"))
  {
    m_poolName = jsonValue.GetString("PoolName");

    m_poolNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ScalingMode"))
  {
    m_scalingMode = ScalingModeMapper::GetScalingModeForName(jsonValue.GetString("ScalingMode"));

    m_scalingModeHasBeenSet = true;
  }

  return *this;
}

JsonValue DedicatedIpPool::Jsonize() const
{
  JsonValue payload;

  if(m_poolNameHasBeenSet)
  {
   payload.WithString("PoolName", m_poolName);

  }

  if(m_scalingModeHasBeenSet)
  {
   payload.WithString("ScalingMode", ScalingModeMapper::GetNameForScalingMode(m_scalingMode));
  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
