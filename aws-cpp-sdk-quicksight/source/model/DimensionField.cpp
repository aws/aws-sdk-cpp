/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DimensionField.h>
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

DimensionField::DimensionField() : 
    m_numericalDimensionFieldHasBeenSet(false),
    m_categoricalDimensionFieldHasBeenSet(false),
    m_dateDimensionFieldHasBeenSet(false)
{
}

DimensionField::DimensionField(JsonView jsonValue) : 
    m_numericalDimensionFieldHasBeenSet(false),
    m_categoricalDimensionFieldHasBeenSet(false),
    m_dateDimensionFieldHasBeenSet(false)
{
  *this = jsonValue;
}

DimensionField& DimensionField::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NumericalDimensionField"))
  {
    m_numericalDimensionField = jsonValue.GetObject("NumericalDimensionField");

    m_numericalDimensionFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CategoricalDimensionField"))
  {
    m_categoricalDimensionField = jsonValue.GetObject("CategoricalDimensionField");

    m_categoricalDimensionFieldHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DateDimensionField"))
  {
    m_dateDimensionField = jsonValue.GetObject("DateDimensionField");

    m_dateDimensionFieldHasBeenSet = true;
  }

  return *this;
}

JsonValue DimensionField::Jsonize() const
{
  JsonValue payload;

  if(m_numericalDimensionFieldHasBeenSet)
  {
   payload.WithObject("NumericalDimensionField", m_numericalDimensionField.Jsonize());

  }

  if(m_categoricalDimensionFieldHasBeenSet)
  {
   payload.WithObject("CategoricalDimensionField", m_categoricalDimensionField.Jsonize());

  }

  if(m_dateDimensionFieldHasBeenSet)
  {
   payload.WithObject("DateDimensionField", m_dateDimensionField.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
