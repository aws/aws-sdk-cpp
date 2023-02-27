/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/AvailabilityMeasurement.h>
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

AvailabilityMeasurement::AvailabilityMeasurement() : 
    m_experienceScore(0.0),
    m_experienceScoreHasBeenSet(false),
    m_percentOfTotalTrafficImpacted(0.0),
    m_percentOfTotalTrafficImpactedHasBeenSet(false),
    m_percentOfClientLocationImpacted(0.0),
    m_percentOfClientLocationImpactedHasBeenSet(false)
{
}

AvailabilityMeasurement::AvailabilityMeasurement(JsonView jsonValue) : 
    m_experienceScore(0.0),
    m_experienceScoreHasBeenSet(false),
    m_percentOfTotalTrafficImpacted(0.0),
    m_percentOfTotalTrafficImpactedHasBeenSet(false),
    m_percentOfClientLocationImpacted(0.0),
    m_percentOfClientLocationImpactedHasBeenSet(false)
{
  *this = jsonValue;
}

AvailabilityMeasurement& AvailabilityMeasurement::operator =(JsonView jsonValue)
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

  return *this;
}

JsonValue AvailabilityMeasurement::Jsonize() const
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

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
