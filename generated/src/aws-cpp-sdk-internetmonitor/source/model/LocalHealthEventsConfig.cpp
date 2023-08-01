/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/LocalHealthEventsConfig.h>
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

LocalHealthEventsConfig::LocalHealthEventsConfig() : 
    m_status(LocalHealthEventsConfigStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_healthScoreThreshold(0.0),
    m_healthScoreThresholdHasBeenSet(false),
    m_minTrafficImpact(0.0),
    m_minTrafficImpactHasBeenSet(false)
{
}

LocalHealthEventsConfig::LocalHealthEventsConfig(JsonView jsonValue) : 
    m_status(LocalHealthEventsConfigStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_healthScoreThreshold(0.0),
    m_healthScoreThresholdHasBeenSet(false),
    m_minTrafficImpact(0.0),
    m_minTrafficImpactHasBeenSet(false)
{
  *this = jsonValue;
}

LocalHealthEventsConfig& LocalHealthEventsConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = LocalHealthEventsConfigStatusMapper::GetLocalHealthEventsConfigStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HealthScoreThreshold"))
  {
    m_healthScoreThreshold = jsonValue.GetDouble("HealthScoreThreshold");

    m_healthScoreThresholdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MinTrafficImpact"))
  {
    m_minTrafficImpact = jsonValue.GetDouble("MinTrafficImpact");

    m_minTrafficImpactHasBeenSet = true;
  }

  return *this;
}

JsonValue LocalHealthEventsConfig::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", LocalHealthEventsConfigStatusMapper::GetNameForLocalHealthEventsConfigStatus(m_status));
  }

  if(m_healthScoreThresholdHasBeenSet)
  {
   payload.WithDouble("HealthScoreThreshold", m_healthScoreThreshold);

  }

  if(m_minTrafficImpactHasBeenSet)
  {
   payload.WithDouble("MinTrafficImpact", m_minTrafficImpact);

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
