/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/TruckDimensions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LocationService
{
namespace Model
{

TruckDimensions::TruckDimensions() : 
    m_height(0.0),
    m_heightHasBeenSet(false),
    m_length(0.0),
    m_lengthHasBeenSet(false),
    m_unit(DimensionUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_width(0.0),
    m_widthHasBeenSet(false)
{
}

TruckDimensions::TruckDimensions(JsonView jsonValue) : 
    m_height(0.0),
    m_heightHasBeenSet(false),
    m_length(0.0),
    m_lengthHasBeenSet(false),
    m_unit(DimensionUnit::NOT_SET),
    m_unitHasBeenSet(false),
    m_width(0.0),
    m_widthHasBeenSet(false)
{
  *this = jsonValue;
}

TruckDimensions& TruckDimensions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Height"))
  {
    m_height = jsonValue.GetDouble("Height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Length"))
  {
    m_length = jsonValue.GetDouble("Length");

    m_lengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = DimensionUnitMapper::GetDimensionUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Width"))
  {
    m_width = jsonValue.GetDouble("Width");

    m_widthHasBeenSet = true;
  }

  return *this;
}

JsonValue TruckDimensions::Jsonize() const
{
  JsonValue payload;

  if(m_heightHasBeenSet)
  {
   payload.WithDouble("Height", m_height);

  }

  if(m_lengthHasBeenSet)
  {
   payload.WithDouble("Length", m_length);

  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", DimensionUnitMapper::GetNameForDimensionUnit(m_unit));
  }

  if(m_widthHasBeenSet)
  {
   payload.WithDouble("Width", m_width);

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
