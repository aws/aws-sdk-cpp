/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/groundstation/model/Eirp.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GroundStation
{
namespace Model
{

Eirp::Eirp() : 
    m_units(EirpUnits::NOT_SET),
    m_unitsHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

Eirp::Eirp(JsonView jsonValue) : 
    m_units(EirpUnits::NOT_SET),
    m_unitsHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Eirp& Eirp::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("units"))
  {
    m_units = EirpUnitsMapper::GetEirpUnitsForName(jsonValue.GetString("units"));

    m_unitsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Eirp::Jsonize() const
{
  JsonValue payload;

  if(m_unitsHasBeenSet)
  {
   payload.WithString("units", EirpUnitsMapper::GetNameForEirpUnits(m_units));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace GroundStation
} // namespace Aws
