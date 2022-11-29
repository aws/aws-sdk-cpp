/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ShapeConditionalFormat.h>
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

ShapeConditionalFormat::ShapeConditionalFormat() : 
    m_backgroundColorHasBeenSet(false)
{
}

ShapeConditionalFormat::ShapeConditionalFormat(JsonView jsonValue) : 
    m_backgroundColorHasBeenSet(false)
{
  *this = jsonValue;
}

ShapeConditionalFormat& ShapeConditionalFormat::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackgroundColor"))
  {
    m_backgroundColor = jsonValue.GetObject("BackgroundColor");

    m_backgroundColorHasBeenSet = true;
  }

  return *this;
}

JsonValue ShapeConditionalFormat::Jsonize() const
{
  JsonValue payload;

  if(m_backgroundColorHasBeenSet)
  {
   payload.WithObject("BackgroundColor", m_backgroundColor.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
