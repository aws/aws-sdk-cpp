/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TileStyle.h>
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

TileStyle::TileStyle() : 
    m_borderHasBeenSet(false)
{
}

TileStyle::TileStyle(JsonView jsonValue) : 
    m_borderHasBeenSet(false)
{
  *this = jsonValue;
}

TileStyle& TileStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Border"))
  {
    m_border = jsonValue.GetObject("Border");

    m_borderHasBeenSet = true;
  }

  return *this;
}

JsonValue TileStyle::Jsonize() const
{
  JsonValue payload;

  if(m_borderHasBeenSet)
  {
   payload.WithObject("Border", m_border.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
