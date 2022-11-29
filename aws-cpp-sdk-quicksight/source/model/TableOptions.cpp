/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/TableOptions.h>
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

TableOptions::TableOptions() : 
    m_orientation(TableOrientation::NOT_SET),
    m_orientationHasBeenSet(false),
    m_headerStyleHasBeenSet(false),
    m_cellStyleHasBeenSet(false),
    m_rowAlternateColorOptionsHasBeenSet(false)
{
}

TableOptions::TableOptions(JsonView jsonValue) : 
    m_orientation(TableOrientation::NOT_SET),
    m_orientationHasBeenSet(false),
    m_headerStyleHasBeenSet(false),
    m_cellStyleHasBeenSet(false),
    m_rowAlternateColorOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

TableOptions& TableOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Orientation"))
  {
    m_orientation = TableOrientationMapper::GetTableOrientationForName(jsonValue.GetString("Orientation"));

    m_orientationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HeaderStyle"))
  {
    m_headerStyle = jsonValue.GetObject("HeaderStyle");

    m_headerStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CellStyle"))
  {
    m_cellStyle = jsonValue.GetObject("CellStyle");

    m_cellStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RowAlternateColorOptions"))
  {
    m_rowAlternateColorOptions = jsonValue.GetObject("RowAlternateColorOptions");

    m_rowAlternateColorOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue TableOptions::Jsonize() const
{
  JsonValue payload;

  if(m_orientationHasBeenSet)
  {
   payload.WithString("Orientation", TableOrientationMapper::GetNameForTableOrientation(m_orientation));
  }

  if(m_headerStyleHasBeenSet)
  {
   payload.WithObject("HeaderStyle", m_headerStyle.Jsonize());

  }

  if(m_cellStyleHasBeenSet)
  {
   payload.WithObject("CellStyle", m_cellStyle.Jsonize());

  }

  if(m_rowAlternateColorOptionsHasBeenSet)
  {
   payload.WithObject("RowAlternateColorOptions", m_rowAlternateColorOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
