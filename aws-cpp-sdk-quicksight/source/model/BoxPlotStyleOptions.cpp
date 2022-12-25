/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/BoxPlotStyleOptions.h>
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

BoxPlotStyleOptions::BoxPlotStyleOptions() : 
    m_fillStyle(BoxPlotFillStyle::NOT_SET),
    m_fillStyleHasBeenSet(false)
{
}

BoxPlotStyleOptions::BoxPlotStyleOptions(JsonView jsonValue) : 
    m_fillStyle(BoxPlotFillStyle::NOT_SET),
    m_fillStyleHasBeenSet(false)
{
  *this = jsonValue;
}

BoxPlotStyleOptions& BoxPlotStyleOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FillStyle"))
  {
    m_fillStyle = BoxPlotFillStyleMapper::GetBoxPlotFillStyleForName(jsonValue.GetString("FillStyle"));

    m_fillStyleHasBeenSet = true;
  }

  return *this;
}

JsonValue BoxPlotStyleOptions::Jsonize() const
{
  JsonValue payload;

  if(m_fillStyleHasBeenSet)
  {
   payload.WithString("FillStyle", BoxPlotFillStyleMapper::GetNameForBoxPlotFillStyle(m_fillStyle));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
