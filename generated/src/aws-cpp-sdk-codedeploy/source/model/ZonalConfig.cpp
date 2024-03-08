/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/ZonalConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

ZonalConfig::ZonalConfig() : 
    m_firstZoneMonitorDurationInSeconds(0),
    m_firstZoneMonitorDurationInSecondsHasBeenSet(false),
    m_monitorDurationInSeconds(0),
    m_monitorDurationInSecondsHasBeenSet(false),
    m_minimumHealthyHostsPerZoneHasBeenSet(false)
{
}

ZonalConfig::ZonalConfig(JsonView jsonValue) : 
    m_firstZoneMonitorDurationInSeconds(0),
    m_firstZoneMonitorDurationInSecondsHasBeenSet(false),
    m_monitorDurationInSeconds(0),
    m_monitorDurationInSecondsHasBeenSet(false),
    m_minimumHealthyHostsPerZoneHasBeenSet(false)
{
  *this = jsonValue;
}

ZonalConfig& ZonalConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("firstZoneMonitorDurationInSeconds"))
  {
    m_firstZoneMonitorDurationInSeconds = jsonValue.GetInt64("firstZoneMonitorDurationInSeconds");

    m_firstZoneMonitorDurationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("monitorDurationInSeconds"))
  {
    m_monitorDurationInSeconds = jsonValue.GetInt64("monitorDurationInSeconds");

    m_monitorDurationInSecondsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("minimumHealthyHostsPerZone"))
  {
    m_minimumHealthyHostsPerZone = jsonValue.GetObject("minimumHealthyHostsPerZone");

    m_minimumHealthyHostsPerZoneHasBeenSet = true;
  }

  return *this;
}

JsonValue ZonalConfig::Jsonize() const
{
  JsonValue payload;

  if(m_firstZoneMonitorDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("firstZoneMonitorDurationInSeconds", m_firstZoneMonitorDurationInSeconds);

  }

  if(m_monitorDurationInSecondsHasBeenSet)
  {
   payload.WithInt64("monitorDurationInSeconds", m_monitorDurationInSeconds);

  }

  if(m_minimumHealthyHostsPerZoneHasBeenSet)
  {
   payload.WithObject("minimumHealthyHostsPerZone", m_minimumHealthyHostsPerZone.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
