/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/location/model/CellSignals.h>
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

CellSignals::CellSignals(JsonView jsonValue)
{
  *this = jsonValue;
}

CellSignals& CellSignals::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("LteCellDetails"))
  {
    Aws::Utils::Array<JsonView> lteCellDetailsJsonList = jsonValue.GetArray("LteCellDetails");
    for(unsigned lteCellDetailsIndex = 0; lteCellDetailsIndex < lteCellDetailsJsonList.GetLength(); ++lteCellDetailsIndex)
    {
      m_lteCellDetails.push_back(lteCellDetailsJsonList[lteCellDetailsIndex].AsObject());
    }
    m_lteCellDetailsHasBeenSet = true;
  }
  return *this;
}

JsonValue CellSignals::Jsonize() const
{
  JsonValue payload;

  if(m_lteCellDetailsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lteCellDetailsJsonList(m_lteCellDetails.size());
   for(unsigned lteCellDetailsIndex = 0; lteCellDetailsIndex < lteCellDetailsJsonList.GetLength(); ++lteCellDetailsIndex)
   {
     lteCellDetailsJsonList[lteCellDetailsIndex].AsObject(m_lteCellDetails[lteCellDetailsIndex].Jsonize());
   }
   payload.WithArray("LteCellDetails", std::move(lteCellDetailsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace LocationService
} // namespace Aws
