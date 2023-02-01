/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-autoscaling/model/NotScaledReason.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

NotScaledReason::NotScaledReason() : 
    m_codeHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_currentCapacity(0),
    m_currentCapacityHasBeenSet(false)
{
}

NotScaledReason::NotScaledReason(JsonView jsonValue) : 
    m_codeHasBeenSet(false),
    m_maxCapacity(0),
    m_maxCapacityHasBeenSet(false),
    m_minCapacity(0),
    m_minCapacityHasBeenSet(false),
    m_currentCapacity(0),
    m_currentCapacityHasBeenSet(false)
{
  *this = jsonValue;
}

NotScaledReason& NotScaledReason::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Code"))
  {
    m_code = jsonValue.GetString("Code");

    m_codeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxCapacity"))
  {
    m_maxCapacity = jsonValue.GetInteger("MaxCapacity");

    m_maxCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinCapacity"))
  {
    m_minCapacity = jsonValue.GetInteger("MinCapacity");

    m_minCapacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CurrentCapacity"))
  {
    m_currentCapacity = jsonValue.GetInteger("CurrentCapacity");

    m_currentCapacityHasBeenSet = true;
  }

  return *this;
}

JsonValue NotScaledReason::Jsonize() const
{
  JsonValue payload;

  if(m_codeHasBeenSet)
  {
   payload.WithString("Code", m_code);

  }

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("MaxCapacity", m_maxCapacity);

  }

  if(m_minCapacityHasBeenSet)
  {
   payload.WithInteger("MinCapacity", m_minCapacity);

  }

  if(m_currentCapacityHasBeenSet)
  {
   payload.WithInteger("CurrentCapacity", m_currentCapacity);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
