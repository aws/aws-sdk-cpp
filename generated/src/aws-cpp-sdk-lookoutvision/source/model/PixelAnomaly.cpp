/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/PixelAnomaly.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutforVision
{
namespace Model
{

PixelAnomaly::PixelAnomaly() : 
    m_totalPercentageArea(0.0),
    m_totalPercentageAreaHasBeenSet(false),
    m_colorHasBeenSet(false)
{
}

PixelAnomaly::PixelAnomaly(JsonView jsonValue) : 
    m_totalPercentageArea(0.0),
    m_totalPercentageAreaHasBeenSet(false),
    m_colorHasBeenSet(false)
{
  *this = jsonValue;
}

PixelAnomaly& PixelAnomaly::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("TotalPercentageArea"))
  {
    m_totalPercentageArea = jsonValue.GetDouble("TotalPercentageArea");

    m_totalPercentageAreaHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Color"))
  {
    m_color = jsonValue.GetString("Color");

    m_colorHasBeenSet = true;
  }

  return *this;
}

JsonValue PixelAnomaly::Jsonize() const
{
  JsonValue payload;

  if(m_totalPercentageAreaHasBeenSet)
  {
   payload.WithDouble("TotalPercentageArea", m_totalPercentageArea);

  }

  if(m_colorHasBeenSet)
  {
   payload.WithString("Color", m_color);

  }

  return payload;
}

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
