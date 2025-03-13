/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/geo-routes/model/RouteTrafficOptions.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GeoRoutes
{
namespace Model
{

RouteTrafficOptions::RouteTrafficOptions(JsonView jsonValue)
{
  *this = jsonValue;
}

RouteTrafficOptions& RouteTrafficOptions::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FlowEventThresholdOverride"))
  {
    m_flowEventThresholdOverride = jsonValue.GetInt64("FlowEventThresholdOverride");
    m_flowEventThresholdOverrideHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Usage"))
  {
    m_usage = TrafficUsageMapper::GetTrafficUsageForName(jsonValue.GetString("Usage"));
    m_usageHasBeenSet = true;
  }
  return *this;
}

JsonValue RouteTrafficOptions::Jsonize() const
{
  JsonValue payload;

  if(m_flowEventThresholdOverrideHasBeenSet)
  {
   payload.WithInt64("FlowEventThresholdOverride", m_flowEventThresholdOverride);

  }

  if(m_usageHasBeenSet)
  {
   payload.WithString("Usage", TrafficUsageMapper::GetNameForTrafficUsage(m_usage));
  }

  return payload;
}

} // namespace Model
} // namespace GeoRoutes
} // namespace Aws
