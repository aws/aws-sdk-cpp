/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/RelativeAggregationDuration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

RelativeAggregationDuration::RelativeAggregationDuration() : 
    m_timeDimension(TimeDimension::NOT_SET),
    m_timeDimensionHasBeenSet(false),
    m_timeValue(0),
    m_timeValueHasBeenSet(false)
{
}

RelativeAggregationDuration::RelativeAggregationDuration(JsonView jsonValue) : 
    m_timeDimension(TimeDimension::NOT_SET),
    m_timeDimensionHasBeenSet(false),
    m_timeValue(0),
    m_timeValueHasBeenSet(false)
{
  *this = jsonValue;
}

RelativeAggregationDuration& RelativeAggregationDuration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("timeDimension"))
  {
    m_timeDimension = TimeDimensionMapper::GetTimeDimensionForName(jsonValue.GetString("timeDimension"));

    m_timeDimensionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("timeValue"))
  {
    m_timeValue = jsonValue.GetInteger("timeValue");

    m_timeValueHasBeenSet = true;
  }

  return *this;
}

JsonValue RelativeAggregationDuration::Jsonize() const
{
  JsonValue payload;

  if(m_timeDimensionHasBeenSet)
  {
   payload.WithString("timeDimension", TimeDimensionMapper::GetNameForTimeDimension(m_timeDimension));
  }

  if(m_timeValueHasBeenSet)
  {
   payload.WithInteger("timeValue", m_timeValue);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
