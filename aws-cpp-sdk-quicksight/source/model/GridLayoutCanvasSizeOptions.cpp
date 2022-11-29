/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/GridLayoutCanvasSizeOptions.h>
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

GridLayoutCanvasSizeOptions::GridLayoutCanvasSizeOptions() : 
    m_screenCanvasSizeOptionsHasBeenSet(false)
{
}

GridLayoutCanvasSizeOptions::GridLayoutCanvasSizeOptions(JsonView jsonValue) : 
    m_screenCanvasSizeOptionsHasBeenSet(false)
{
  *this = jsonValue;
}

GridLayoutCanvasSizeOptions& GridLayoutCanvasSizeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ScreenCanvasSizeOptions"))
  {
    m_screenCanvasSizeOptions = jsonValue.GetObject("ScreenCanvasSizeOptions");

    m_screenCanvasSizeOptionsHasBeenSet = true;
  }

  return *this;
}

JsonValue GridLayoutCanvasSizeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_screenCanvasSizeOptionsHasBeenSet)
  {
   payload.WithObject("ScreenCanvasSizeOptions", m_screenCanvasSizeOptions.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
