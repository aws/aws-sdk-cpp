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

Rectangle::Rectangle(const JsonValue& jsonValue) : 
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

Rectangle& Rectangle::operator =(const JsonValue& jsonValue)
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
