/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelExportsMaxSize.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CleanRoomsML
{
namespace Model
{

TrainedModelExportsMaxSize::TrainedModelExportsMaxSize(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainedModelExportsMaxSize& TrainedModelExportsMaxSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = TrainedModelExportsMaxSizeUnitTypeMapper::GetTrainedModelExportsMaxSizeUnitTypeForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainedModelExportsMaxSize::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", TrainedModelExportsMaxSizeUnitTypeMapper::GetNameForTrainedModelExportsMaxSizeUnitType(m_unit));
  }

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("value", m_value);

  }

  return payload;
}

} // namespace Model
} // namespace CleanRoomsML
} // namespace Aws
