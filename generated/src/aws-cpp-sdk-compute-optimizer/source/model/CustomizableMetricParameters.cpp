/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/CustomizableMetricParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ComputeOptimizer
{
namespace Model
{

CustomizableMetricParameters::CustomizableMetricParameters() : 
    m_threshold(CustomizableMetricThreshold::NOT_SET),
    m_thresholdHasBeenSet(false),
    m_headroom(CustomizableMetricHeadroom::NOT_SET),
    m_headroomHasBeenSet(false)
{
}

CustomizableMetricParameters::CustomizableMetricParameters(JsonView jsonValue) : 
    m_threshold(CustomizableMetricThreshold::NOT_SET),
    m_thresholdHasBeenSet(false),
    m_headroom(CustomizableMetricHeadroom::NOT_SET),
    m_headroomHasBeenSet(false)
{
  *this = jsonValue;
}

CustomizableMetricParameters& CustomizableMetricParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("threshold"))
  {
    m_threshold = CustomizableMetricThresholdMapper::GetCustomizableMetricThresholdForName(jsonValue.GetString("threshold"));

    m_thresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("headroom"))
  {
    m_headroom = CustomizableMetricHeadroomMapper::GetCustomizableMetricHeadroomForName(jsonValue.GetString("headroom"));

    m_headroomHasBeenSet = true;
  }

  return *this;
}

JsonValue CustomizableMetricParameters::Jsonize() const
{
  JsonValue payload;

  if(m_thresholdHasBeenSet)
  {
   payload.WithString("threshold", CustomizableMetricThresholdMapper::GetNameForCustomizableMetricThreshold(m_threshold));
  }

  if(m_headroomHasBeenSet)
  {
   payload.WithString("headroom", CustomizableMetricHeadroomMapper::GetNameForCustomizableMetricHeadroom(m_headroom));
  }

  return payload;
}

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
