/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/CapacityUnitsConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

CapacityUnitsConfiguration::CapacityUnitsConfiguration() : 
    m_storageCapacityUnits(0),
    m_storageCapacityUnitsHasBeenSet(false),
    m_queryCapacityUnits(0),
    m_queryCapacityUnitsHasBeenSet(false)
{
}

CapacityUnitsConfiguration::CapacityUnitsConfiguration(JsonView jsonValue) : 
    m_storageCapacityUnits(0),
    m_storageCapacityUnitsHasBeenSet(false),
    m_queryCapacityUnits(0),
    m_queryCapacityUnitsHasBeenSet(false)
{
  *this = jsonValue;
}

CapacityUnitsConfiguration& CapacityUnitsConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("StorageCapacityUnits"))
  {
    m_storageCapacityUnits = jsonValue.GetInteger("StorageCapacityUnits");

    m_storageCapacityUnitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("QueryCapacityUnits"))
  {
    m_queryCapacityUnits = jsonValue.GetInteger("QueryCapacityUnits");

    m_queryCapacityUnitsHasBeenSet = true;
  }

  return *this;
}

JsonValue CapacityUnitsConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_storageCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("StorageCapacityUnits", m_storageCapacityUnits);

  }

  if(m_queryCapacityUnitsHasBeenSet)
  {
   payload.WithInteger("QueryCapacityUnits", m_queryCapacityUnits);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
