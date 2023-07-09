/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/HealthEventsConfig.h>
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

HealthEventsConfig::HealthEventsConfig() : 
    m_availabilityScoreThreshold(0.0),
    m_availabilityScoreThresholdHasBeenSet(false),
    m_performanceScoreThreshold(0.0),
    m_performanceScoreThresholdHasBeenSet(false)
{
}

HealthEventsConfig::HealthEventsConfig(JsonView jsonValue) : 
    m_availabilityScoreThreshold(0.0),
    m_availabilityScoreThresholdHasBeenSet(false),
    m_performanceScoreThreshold(0.0),
    m_performanceScoreThresholdHasBeenSet(false)
{
  *this = jsonValue;
}

HealthEventsConfig& HealthEventsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailabilityScoreThreshold"))
  {
    m_availabilityScoreThreshold = jsonValue.GetDouble("AvailabilityScoreThreshold");

    m_availabilityScoreThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PerformanceScoreThreshold"))
  {
    m_performanceScoreThreshold = jsonValue.GetDouble("PerformanceScoreThreshold");

    m_performanceScoreThresholdHasBeenSet = true;
  }

  return *this;
}

JsonValue HealthEventsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_availabilityScoreThresholdHasBeenSet)
  {
   payload.WithDouble("AvailabilityScoreThreshold", m_availabilityScoreThreshold);

  }

  if(m_performanceScoreThresholdHasBeenSet)
  {
   payload.WithDouble("PerformanceScoreThreshold", m_performanceScoreThreshold);

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
