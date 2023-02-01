/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeguruprofiler/model/AggregatedProfileTime.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeGuruProfiler
{
namespace Model
{

AggregatedProfileTime::AggregatedProfileTime() : 
    m_period(AggregationPeriod::NOT_SET),
    m_periodHasBeenSet(false),
    m_startHasBeenSet(false)
{
}

AggregatedProfileTime::AggregatedProfileTime(JsonView jsonValue) : 
    m_period(AggregationPeriod::NOT_SET),
    m_periodHasBeenSet(false),
    m_startHasBeenSet(false)
{
  *this = jsonValue;
}

AggregatedProfileTime& AggregatedProfileTime::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("period"))
  {
    m_period = AggregationPeriodMapper::GetAggregationPeriodForName(jsonValue.GetString("period"));

    m_periodHasBeenSet = true;
  }

  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetString("start");

    m_startHasBeenSet = true;
  }

  return *this;
}

JsonValue AggregatedProfileTime::Jsonize() const
{
  JsonValue payload;

  if(m_periodHasBeenSet)
  {
   payload.WithString("period", AggregationPeriodMapper::GetNameForAggregationPeriod(m_period));
  }

  if(m_startHasBeenSet)
  {
   payload.WithString("start", m_start.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace CodeGuruProfiler
} // namespace Aws
