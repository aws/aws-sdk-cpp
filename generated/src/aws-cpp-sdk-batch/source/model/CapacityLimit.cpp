/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/batch/model/CapacityLimit.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Batch
{
namespace Model
{

CapacityLimit::CapacityLimit(JsonView jsonValue)
{
  *this = jsonValue;
}

CapacityLimit& CapacityLimit::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("maxCapacity"))
  {
    m_maxCapacity = jsonValue.GetInteger("maxCapacity");
    m_maxCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("capacityUnit"))
  {
    m_capacityUnit = jsonValue.GetString("capacityUnit");
    m_capacityUnitHasBeenSet = true;
  }
  return *this;
}

JsonValue CapacityLimit::Jsonize() const
{
  JsonValue payload;

  if(m_maxCapacityHasBeenSet)
  {
   payload.WithInteger("maxCapacity", m_maxCapacity);

  }

  if(m_capacityUnitHasBeenSet)
  {
   payload.WithString("capacityUnit", m_capacityUnit);

  }

  return payload;
}

} // namespace Model
} // namespace Batch
} // namespace Aws
