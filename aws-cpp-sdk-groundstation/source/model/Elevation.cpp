/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/groundstation/model/Elevation.h>
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

Elevation::Elevation() : 
    m_unit(AngleUnits::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
}

Elevation::Elevation(JsonView jsonValue) : 
    m_unit(AngleUnits::NOT_SET),
    m_unitHasBeenSet(false),
    m_value(0.0),
    m_valueHasBeenSet(false)
{
  *this = jsonValue;
}

Elevation& Elevation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = AngleUnitsMapper::GetAngleUnitsForName(jsonValue.GetString("unit"));

    m_unitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");

    m_valueHasBeenSet = true;
  }

  return *this;
}

JsonValue Elevation::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", AngleUnitsMapper::GetNameForAngleUnits(m_unit));
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
