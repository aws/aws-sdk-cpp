/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/ArcOptions.h>
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

ArcOptions::ArcOptions() : 
    m_arcThickness(ArcThickness::NOT_SET),
    m_arcThicknessHasBeenSet(false)
{
}

ArcOptions::ArcOptions(JsonView jsonValue) : 
    m_arcThickness(ArcThickness::NOT_SET),
    m_arcThicknessHasBeenSet(false)
{
  *this = jsonValue;
}

ArcOptions& ArcOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ArcThickness"))
  {
    m_arcThickness = ArcThicknessMapper::GetArcThicknessForName(jsonValue.GetString("ArcThickness"));

    m_arcThicknessHasBeenSet = true;
  }

  return *this;
}

JsonValue ArcOptions::Jsonize() const
{
  JsonValue payload;

  if(m_arcThicknessHasBeenSet)
  {
   payload.WithString("ArcThickness", ArcThicknessMapper::GetNameForArcThickness(m_arcThickness));
  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
