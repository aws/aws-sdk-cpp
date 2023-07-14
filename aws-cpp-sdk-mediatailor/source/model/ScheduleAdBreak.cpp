/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/ScheduleAdBreak.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

ScheduleAdBreak::ScheduleAdBreak() : 
    m_approximateDurationSeconds(0),
    m_approximateDurationSecondsHasBeenSet(false),
    m_approximateStartTimeHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
}

ScheduleAdBreak::ScheduleAdBreak(JsonView jsonValue) : 
    m_approximateDurationSeconds(0),
    m_approximateDurationSecondsHasBeenSet(false),
    m_approximateStartTimeHasBeenSet(false),
    m_sourceLocationNameHasBeenSet(false),
    m_vodSourceNameHasBeenSet(false)
{
  *this = jsonValue;
}

ScheduleAdBreak& ScheduleAdBreak::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApproximateDurationSeconds"))
  {
    m_approximateDurationSeconds = jsonValue.GetInt64("ApproximateDurationSeconds");

    m_approximateDurationSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApproximateStartTime"))
  {
    m_approximateStartTime = jsonValue.GetDouble("ApproximateStartTime");

    m_approximateStartTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceLocationName"))
  {
    m_sourceLocationName = jsonValue.GetString("SourceLocationName");

    m_sourceLocationNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VodSourceName"))
  {
    m_vodSourceName = jsonValue.GetString("VodSourceName");

    m_vodSourceNameHasBeenSet = true;
  }

  return *this;
}

JsonValue ScheduleAdBreak::Jsonize() const
{
  JsonValue payload;

  if(m_approximateDurationSecondsHasBeenSet)
  {
   payload.WithInt64("ApproximateDurationSeconds", m_approximateDurationSeconds);

  }

  if(m_approximateStartTimeHasBeenSet)
  {
   payload.WithDouble("ApproximateStartTime", m_approximateStartTime.SecondsWithMSPrecision());
  }

  if(m_sourceLocationNameHasBeenSet)
  {
   payload.WithString("SourceLocationName", m_sourceLocationName);

  }

  if(m_vodSourceNameHasBeenSet)
  {
   payload.WithString("VodSourceName", m_vodSourceName);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
