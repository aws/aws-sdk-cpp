/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/databrew/model/Threshold.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GlueDataBrew
{
namespace Model
{

Threshold::Threshold() : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_type(ThresholdType::NOT_SET),
    m_typeHasBeenSet(false),
    m_unit(ThresholdUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
}

Threshold::Threshold(JsonView jsonValue) : 
    m_value(0.0),
    m_valueHasBeenSet(false),
    m_type(ThresholdType::NOT_SET),
    m_typeHasBeenSet(false),
    m_unit(ThresholdUnit::NOT_SET),
    m_unitHasBeenSet(false)
{
  *this = jsonValue;
}

Threshold& Threshold::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Value"))
  {
    m_value = jsonValue.GetDouble("Value");

    m_valueHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ThresholdTypeMapper::GetThresholdTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Unit"))
  {
    m_unit = ThresholdUnitMapper::GetThresholdUnitForName(jsonValue.GetString("Unit"));

    m_unitHasBeenSet = true;
  }

  return *this;
}

JsonValue Threshold::Jsonize() const
{
  JsonValue payload;

  if(m_valueHasBeenSet)
  {
   payload.WithDouble("Value", m_value);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ThresholdTypeMapper::GetNameForThresholdType(m_type));
  }

  if(m_unitHasBeenSet)
  {
   payload.WithString("Unit", ThresholdUnitMapper::GetNameForThresholdUnit(m_unit));
  }

  return payload;
}

} // namespace Model
} // namespace GlueDataBrew
} // namespace Aws
