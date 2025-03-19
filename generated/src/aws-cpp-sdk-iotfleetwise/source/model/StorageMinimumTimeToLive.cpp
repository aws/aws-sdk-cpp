/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StorageMinimumTimeToLive.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

StorageMinimumTimeToLive::StorageMinimumTimeToLive(JsonView jsonValue)
{
  *this = jsonValue;
}

StorageMinimumTimeToLive& StorageMinimumTimeToLive::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = StorageMinimumTimeToLiveUnitMapper::GetStorageMinimumTimeToLiveUnitForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageMinimumTimeToLive::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", StorageMinimumTimeToLiveUnitMapper::GetNameForStorageMinimumTimeToLiveUnit(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithInteger("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
