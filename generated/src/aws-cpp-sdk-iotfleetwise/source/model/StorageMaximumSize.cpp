/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/StorageMaximumSize.h>
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

StorageMaximumSize::StorageMaximumSize(JsonView jsonValue)
{
  *this = jsonValue;
}

StorageMaximumSize& StorageMaximumSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = StorageMaximumSizeUnitMapper::GetStorageMaximumSizeUnitForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetInteger("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue StorageMaximumSize::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", StorageMaximumSizeUnitMapper::GetNameForStorageMaximumSizeUnit(m_unit));
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
