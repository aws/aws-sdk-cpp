/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/TrainedModelInferenceMaxOutputSize.h>
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

TrainedModelInferenceMaxOutputSize::TrainedModelInferenceMaxOutputSize(JsonView jsonValue)
{
  *this = jsonValue;
}

TrainedModelInferenceMaxOutputSize& TrainedModelInferenceMaxOutputSize::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("unit"))
  {
    m_unit = TrainedModelInferenceMaxOutputSizeUnitTypeMapper::GetTrainedModelInferenceMaxOutputSizeUnitTypeForName(jsonValue.GetString("unit"));
    m_unitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("value"))
  {
    m_value = jsonValue.GetDouble("value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue TrainedModelInferenceMaxOutputSize::Jsonize() const
{
  JsonValue payload;

  if(m_unitHasBeenSet)
  {
   payload.WithString("unit", TrainedModelInferenceMaxOutputSizeUnitTypeMapper::GetNameForTrainedModelInferenceMaxOutputSizeUnitType(m_unit));
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
