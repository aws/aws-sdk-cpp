/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ColorScale.h>
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

ColorScale::ColorScale() : 
    m_colorsHasBeenSet(false),
    m_colorFillType(ColorFillType::NOT_SET),
    m_colorFillTypeHasBeenSet(false),
    m_nullValueColorHasBeenSet(false)
{
}

ColorScale::ColorScale(JsonView jsonValue) : 
    m_colorsHasBeenSet(false),
    m_colorFillType(ColorFillType::NOT_SET),
    m_colorFillTypeHasBeenSet(false),
    m_nullValueColorHasBeenSet(false)
{
  *this = jsonValue;
}

ColorScale& ColorScale::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Colors"))
  {
    Aws::Utils::Array<JsonView> colorsJsonList = jsonValue.GetArray("Colors");
    for(unsigned colorsIndex = 0; colorsIndex < colorsJsonList.GetLength(); ++colorsIndex)
    {
      m_colors.push_back(colorsJsonList[colorsIndex].AsObject());
    }
    m_colorsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ColorFillType"))
  {
    m_colorFillType = ColorFillTypeMapper::GetColorFillTypeForName(jsonValue.GetString("ColorFillType"));

    m_colorFillTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NullValueColor"))
  {
    m_nullValueColor = jsonValue.GetObject("NullValueColor");

    m_nullValueColorHasBeenSet = true;
  }

  return *this;
}

JsonValue ColorScale::Jsonize() const
{
  JsonValue payload;

  if(m_colorsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> colorsJsonList(m_colors.size());
   for(unsigned colorsIndex = 0; colorsIndex < colorsJsonList.GetLength(); ++colorsIndex)
   {
     colorsJsonList[colorsIndex].AsObject(m_colors[colorsIndex].Jsonize());
   }
   payload.WithArray("Colors", std::move(colorsJsonList));

  }

  if(m_colorFillTypeHasBeenSet)
  {
   payload.WithString("ColorFillType", ColorFillTypeMapper::GetNameForColorFillType(m_colorFillType));
  }

  if(m_nullValueColorHasBeenSet)
  {
   payload.WithObject("NullValueColor", m_nullValueColor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
