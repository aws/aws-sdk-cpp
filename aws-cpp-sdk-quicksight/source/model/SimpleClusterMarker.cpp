/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/SimpleClusterMarker.h>
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

SimpleClusterMarker::SimpleClusterMarker() : 
    m_colorHasBeenSet(false)
{
}

SimpleClusterMarker::SimpleClusterMarker(JsonView jsonValue) : 
    m_colorHasBeenSet(false)
{
  *this = jsonValue;
}

SimpleClusterMarker& SimpleClusterMarker::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");

    m_colorHasBeenSet = true;
  }

  return *this;
}

JsonValue SimpleClusterMarker::Jsonize() const
{
  JsonValue payload;

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
