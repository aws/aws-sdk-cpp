/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/PerformanceMeasurement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

PerformanceMeasurement::PerformanceMeasurement() : 
    m_experienceScore(0.0),
    m_experienceScoreHasBeenSet(false),
    m_percentOfTotalTrafficImpacted(0.0),
    m_percentOfTotalTrafficImpactedHasBeenSet(false),
    m_percentOfClientLocationImpacted(0.0),
    m_percentOfClientLocationImpactedHasBeenSet(false),
    m_roundTripTimeHasBeenSet(false)
{
}

PerformanceMeasurement::PerformanceMeasurement(JsonView jsonValue) : 
    m_experienceScore(0.0),
    m_experienceScoreHasBeenSet(false),
    m_percentOfTotalTrafficImpacted(0.0),
    m_percentOfTotalTrafficImpactedHasBeenSet(false),
    m_percentOfClientLocationImpacted(0.0),
    m_percentOfClientLocationImpactedHasBeenSet(false),
    m_roundTripTimeHasBeenSet(false)
{
  *this = jsonValue;
}

PerformanceMeasurement& PerformanceMeasurement::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ExperienceScore"))
  {
    m_experienceScore = jsonValue.GetDouble("ExperienceScore");

    m_experienceScoreHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentOfTotalTrafficImpacted"))
  {
    m_percentOfTotalTrafficImpacted = jsonValue.GetDouble("PercentOfTotalTrafficImpacted");

    m_percentOfTotalTrafficImpactedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PercentOfClientLocationImpacted"))
  {
    m_percentOfClientLocationImpacted = jsonValue.GetDouble("PercentOfClientLocationImpacted");

    m_percentOfClientLocationImpactedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoundTripTime"))
  {
    m_roundTripTime = jsonValue.GetObject("RoundTripTime");

    m_roundTripTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue PerformanceMeasurement::Jsonize() const
{
  JsonValue payload;

  if(m_experienceScoreHasBeenSet)
  {
   payload.WithDouble("ExperienceScore", m_experienceScore);

  }

  if(m_percentOfTotalTrafficImpactedHasBeenSet)
  {
   payload.WithDouble("PercentOfTotalTrafficImpacted", m_percentOfTotalTrafficImpacted);

  }

  if(m_percentOfClientLocationImpactedHasBeenSet)
  {
   payload.WithDouble("PercentOfClientLocationImpacted", m_percentOfClientLocationImpacted);

  }

  if(m_roundTripTimeHasBeenSet)
  {
   payload.WithObject("RoundTripTime", m_roundTripTime.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
