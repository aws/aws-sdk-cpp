/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/NumericAxisOptions.h>
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

NumericAxisOptions::NumericAxisOptions() : 
    m_scaleHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

NumericAxisOptions::NumericAxisOptions(JsonView jsonValue) : 
    m_scaleHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
  *this = jsonValue;
}

NumericAxisOptions& NumericAxisOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Scale"))
  {
    m_scale = jsonValue.GetObject("Scale");

    m_scaleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Range"))
  {
    m_range = jsonValue.GetObject("Range");

    m_rangeHasBeenSet = true;
  }

  return *this;
}

JsonValue NumericAxisOptions::Jsonize() const
{
  JsonValue payload;

  if(m_scaleHasBeenSet)
  {
   payload.WithObject("Scale", m_scale.Jsonize());

  }

  if(m_rangeHasBeenSet)
  {
   payload.WithObject("Range", m_range.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
