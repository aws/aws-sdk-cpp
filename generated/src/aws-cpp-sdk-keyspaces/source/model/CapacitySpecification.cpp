/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/keyspaces/model/CapacitySpecification.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Keyspaces
{
namespace Model
{

CapacitySpecification::CapacitySpecification() : 
    m_throughputMode(ThroughputMode::NOT_SET),
    m_throughputModeHasBeenSet(false),
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0),
    m_writeCapacityUnitsHasBeenSet(false)
{
}

CapacitySpecification::CapacitySpecification(JsonView jsonValue) : 
    m_throughputMode(ThroughputMode::NOT_SET),
    m_throughputModeHasBeenSet(false),
    m_readCapacityUnits(0),
    m_readCapacityUnitsHasBeenSet(false),
    m_writeCapacityUnits(0),
    m_writeCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

CapacitySpecification& CapacitySpecification::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("throughputMode"))
  {
    m_throughputMode = ThroughputModeMapper::GetThroughputModeForName(jsonValue.GetString("throughputMode"));

    m_throughputModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("readCapacityUnits"))
  {
    m_readCapacityUnits = jsonValue.GetInt64("readCapacityUnits");

    m_readCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("writeCapacityUnits"))
  {
    m_writeCapacityUnits = jsonValue.GetInt64("writeCapacityUnits");

    m_writeCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacitySpecification::Jsonize() const
{
  JsonValue payload;

  if(m_throughputModeHasBeenSet)
  {
   payload.WithString("throughputMode", ThroughputModeMapper::GetNameForThroughputMode(m_throughputMode));
  }

  if(m_readCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("readCapacityUnits", m_readCapacityUnits);

  }

  if(m_writeCapacityUnitsHasBeenSet)
  {
   payload.WithInt64("writeCapacityUnits", m_writeCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
