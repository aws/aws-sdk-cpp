/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SheetStyle.h>
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

SheetStyle::SheetStyle() : 
    m_tileHasBeenSet(false),
    m_tileLayoutHasBeenSet(false)
{
}

SheetStyle::SheetStyle(JsonView jsonValue) : 
    m_tileHasBeenSet(false),
    m_tileLayoutHasBeenSet(false)
{
  *this = jsonValue;
}

SheetStyle& SheetStyle::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Tile"))
  {
    m_tile = jsonValue.GetObject("Tile");

    m_tileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TileLayout"))
  {
    m_tileLayout = jsonValue.GetObject("TileLayout");

    m_tileLayoutHasBeenSet = true;
  }

  return *this;
}

JsonValue SheetStyle::Jsonize() const
{
  JsonValue payload;

  if(m_tileHasBeenSet)
  {
   payload.WithObject("Tile", m_tile.Jsonize());

  }

  if(m_tileLayoutHasBeenSet)
  {
   payload.WithObject("TileLayout", m_tileLayout.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
