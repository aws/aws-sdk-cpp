/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/MeasureField.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

MeasureField::MeasureField() : 
    m_numericalMeasureFieldHasBeenSet(false),
    m_categoricalMeasureFieldHasBeenSet(false),
    m_dateMeasureFieldHasBeenSet(false),
    m_calculatedMeasureFieldHasBeenSet(false)
{
}

MeasureField::MeasureField(JsonView jsonValue) : 
    m_numericalMeasureFieldHasBeenSet(false),
    m_categoricalMeasureFieldHasBeenSet(false),
    m_dateMeasureFieldHasBeenSet(false),
    m_calculatedMeasureFieldHasBeenSet(false)
{
  *this = jsonValue;
}

MeasureField& MeasureField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumericalMeasureField"))
  {
    m_numericalMeasureField = jsonValue.GetObject("NumericalMeasureField");

    m_numericalMeasureFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoricalMeasureField"))
  {
    m_categoricalMeasureField = jsonValue.GetObject("CategoricalMeasureField");

    m_categoricalMeasureFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateMeasureField"))
  {
    m_dateMeasureField = jsonValue.GetObject("DateMeasureField");

    m_dateMeasureFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CalculatedMeasureField"))
  {
    m_calculatedMeasureField = jsonValue.GetObject("CalculatedMeasureField");

    m_calculatedMeasureFieldHasBeenSet = true;
  }

  return *this;
}

JsonValue MeasureField::Jsonize() const
{
  JsonValue payload;

  if(m_numericalMeasureFieldHasBeenSet)
  {
   payload.WithObject("NumericalMeasureField", m_numericalMeasureField.Jsonize());

  }

  if(m_categoricalMeasureFieldHasBeenSet)
  {
   payload.WithObject("CategoricalMeasureField", m_categoricalMeasureField.Jsonize());

  }

  if(m_dateMeasureFieldHasBeenSet)
  {
   payload.WithObject("DateMeasureField", m_dateMeasureField.Jsonize());

  }

  if(m_calculatedMeasureFieldHasBeenSet)
  {
   payload.WithObject("CalculatedMeasureField", m_calculatedMeasureField.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
