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
