/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediaconvert/model/Rectangle.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

Rectangle::Rectangle() : 
    m_height(0),
    m_heightHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false),
    m_x(0),
    m_xHasBeenSet(false),
    m_y(0),
    m_yHasBeenSet(false)
{
}

Rectangle::Rectangle(JsonView jsonValue) : 
    m_height(0),
    m_heightHasBeenSet(false),
    m_width(0),
    m_widthHasBeenSet(false),
    m_x(0),
    m_xHasBeenSet(false),
    m_y(0),
    m_yHasBeenSet(false)
{
  *this = jsonValue;
}

Rectangle& Rectangle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");

    m_heightHasBeenSet = true;
  }

  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");

    m_widthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("x"))
  {
    m_x = jsonValue.GetInteger("x");

    m_xHasBeenSet = true;
  }

  if(jsonValue.ValueExists("y"))
  {
    m_y = jsonValue.GetInteger("y");

    m_yHasBeenSet = true;
  }

  return *this;
}

JsonValue Rectangle::Jsonize() const
{
  JsonValue payload;

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  if(m_xHasBeenSet)
  {
   payload.WithInteger("x", m_x);

  }

  if(m_yHasBeenSet)
  {
   payload.WithInteger("y", m_y);

  }

  return payload;
}

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
