/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/gamelift/model/ContainerMemoryLimits.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GameLift
{
namespace Model
{

ContainerMemoryLimits::ContainerMemoryLimits() : 
    m_softLimit(0),
    m_softLimitHasBeenSet(false),
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false)
{
}

ContainerMemoryLimits::ContainerMemoryLimits(JsonView jsonValue) : 
    m_softLimit(0),
    m_softLimitHasBeenSet(false),
    m_hardLimit(0),
    m_hardLimitHasBeenSet(false)
{
  *this = jsonValue;
}

ContainerMemoryLimits& ContainerMemoryLimits::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("SoftLimit"))
  {
    m_softLimit = jsonValue.GetInteger("SoftLimit");

    m_softLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HardLimit"))
  {
    m_hardLimit = jsonValue.GetInteger("HardLimit");

    m_hardLimitHasBeenSet = true;
  }

  return *this;
}

JsonValue ContainerMemoryLimits::Jsonize() const
{
  JsonValue payload;

  if(m_softLimitHasBeenSet)
  {
   payload.WithInteger("SoftLimit", m_softLimit);

  }

  if(m_hardLimitHasBeenSet)
  {
   payload.WithInteger("HardLimit", m_hardLimit);

  }

  return payload;
}

} // namespace Model
} // namespace GameLift
} // namespace Aws
