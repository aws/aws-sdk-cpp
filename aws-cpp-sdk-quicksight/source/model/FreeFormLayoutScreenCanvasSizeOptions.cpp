/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/FreeFormLayoutScreenCanvasSizeOptions.h>
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

FreeFormLayoutScreenCanvasSizeOptions::FreeFormLayoutScreenCanvasSizeOptions() : 
    m_optimizedViewPortWidthHasBeenSet(false)
{
}

FreeFormLayoutScreenCanvasSizeOptions::FreeFormLayoutScreenCanvasSizeOptions(JsonView jsonValue) : 
    m_optimizedViewPortWidthHasBeenSet(false)
{
  *this = jsonValue;
}

FreeFormLayoutScreenCanvasSizeOptions& FreeFormLayoutScreenCanvasSizeOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("OptimizedViewPortWidth"))
  {
    m_optimizedViewPortWidth = jsonValue.GetString("OptimizedViewPortWidth");

    m_optimizedViewPortWidthHasBeenSet = true;
  }

  return *this;
}

JsonValue FreeFormLayoutScreenCanvasSizeOptions::Jsonize() const
{
  JsonValue payload;

  if(m_optimizedViewPortWidthHasBeenSet)
  {
   payload.WithString("OptimizedViewPortWidth", m_optimizedViewPortWidth);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
