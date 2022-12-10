/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhubstrategy/model/Collector.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
namespace Model
{

Collector::Collector() : 
    m_collectorHealth(CollectorHealth::NOT_SET),
    m_collectorHealthHasBeenSet(false),
    m_collectorIdHasBeenSet(false),
    m_collectorVersionHasBeenSet(false),
    m_configurationSummaryHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_lastActivityTimeStampHasBeenSet(false),
    m_registeredTimeStampHasBeenSet(false)
{
}

Collector::Collector(JsonView jsonValue) : 
    m_collectorHealth(CollectorHealth::NOT_SET),
    m_collectorHealthHasBeenSet(false),
    m_collectorIdHasBeenSet(false),
    m_collectorVersionHasBeenSet(false),
    m_configurationSummaryHasBeenSet(false),
    m_hostNameHasBeenSet(false),
    m_ipAddressHasBeenSet(false),
    m_lastActivityTimeStampHasBeenSet(false),
    m_registeredTimeStampHasBeenSet(false)
{
  *this = jsonValue;
}

Collector& Collector::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("collectorHealth"))
  {
    m_collectorHealth = CollectorHealthMapper::GetCollectorHealthForName(jsonValue.GetString("collectorHealth"));

    m_collectorHealthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collectorId"))
  {
    m_collectorId = jsonValue.GetString("collectorId");

    m_collectorIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("collectorVersion"))
  {
    m_collectorVersion = jsonValue.GetString("collectorVersion");

    m_collectorVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("configurationSummary"))
  {
    m_configurationSummary = jsonValue.GetObject("configurationSummary");

    m_configurationSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostName"))
  {
    m_hostName = jsonValue.GetString("hostName");

    m_hostNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ipAddress"))
  {
    m_ipAddress = jsonValue.GetString("ipAddress");

    m_ipAddressHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastActivityTimeStamp"))
  {
    m_lastActivityTimeStamp = jsonValue.GetString("lastActivityTimeStamp");

    m_lastActivityTimeStampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registeredTimeStamp"))
  {
    m_registeredTimeStamp = jsonValue.GetString("registeredTimeStamp");

    m_registeredTimeStampHasBeenSet = true;
  }

  return *this;
}

JsonValue Collector::Jsonize() const
{
  JsonValue payload;

  if(m_collectorHealthHasBeenSet)
  {
   payload.WithString("collectorHealth", CollectorHealthMapper::GetNameForCollectorHealth(m_collectorHealth));
  }

  if(m_collectorIdHasBeenSet)
  {
   payload.WithString("collectorId", m_collectorId);

  }

  if(m_collectorVersionHasBeenSet)
  {
   payload.WithString("collectorVersion", m_collectorVersion);

  }

  if(m_configurationSummaryHasBeenSet)
  {
   payload.WithObject("configurationSummary", m_configurationSummary.Jsonize());

  }

  if(m_hostNameHasBeenSet)
  {
   payload.WithString("hostName", m_hostName);

  }

  if(m_ipAddressHasBeenSet)
  {
   payload.WithString("ipAddress", m_ipAddress);

  }

  if(m_lastActivityTimeStampHasBeenSet)
  {
   payload.WithString("lastActivityTimeStamp", m_lastActivityTimeStamp);

  }

  if(m_registeredTimeStampHasBeenSet)
  {
   payload.WithString("registeredTimeStamp", m_registeredTimeStamp);

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
