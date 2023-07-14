/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/ManagedRuleSetVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace WAFV2
{
namespace Model
{

ManagedRuleSetVersion::ManagedRuleSetVersion() : 
    m_associatedRuleGroupArnHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_forecastedLifetime(0),
    m_forecastedLifetimeHasBeenSet(false),
    m_publishTimestampHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_expiryTimestampHasBeenSet(false)
{
}

ManagedRuleSetVersion::ManagedRuleSetVersion(JsonView jsonValue) : 
    m_associatedRuleGroupArnHasBeenSet(false),
    m_capacity(0),
    m_capacityHasBeenSet(false),
    m_forecastedLifetime(0),
    m_forecastedLifetimeHasBeenSet(false),
    m_publishTimestampHasBeenSet(false),
    m_lastUpdateTimestampHasBeenSet(false),
    m_expiryTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

ManagedRuleSetVersion& ManagedRuleSetVersion::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AssociatedRuleGroupArn"))
  {
    m_associatedRuleGroupArn = jsonValue.GetString("AssociatedRuleGroupArn");

    m_associatedRuleGroupArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Capacity"))
  {
    m_capacity = jsonValue.GetInt64("Capacity");

    m_capacityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ForecastedLifetime"))
  {
    m_forecastedLifetime = jsonValue.GetInteger("ForecastedLifetime");

    m_forecastedLifetimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishTimestamp"))
  {
    m_publishTimestamp = jsonValue.GetDouble("PublishTimestamp");

    m_publishTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdateTimestamp"))
  {
    m_lastUpdateTimestamp = jsonValue.GetDouble("LastUpdateTimestamp");

    m_lastUpdateTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExpiryTimestamp"))
  {
    m_expiryTimestamp = jsonValue.GetDouble("ExpiryTimestamp");

    m_expiryTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue ManagedRuleSetVersion::Jsonize() const
{
  JsonValue payload;

  if(m_associatedRuleGroupArnHasBeenSet)
  {
   payload.WithString("AssociatedRuleGroupArn", m_associatedRuleGroupArn);

  }

  if(m_capacityHasBeenSet)
  {
   payload.WithInt64("Capacity", m_capacity);

  }

  if(m_forecastedLifetimeHasBeenSet)
  {
   payload.WithInteger("ForecastedLifetime", m_forecastedLifetime);

  }

  if(m_publishTimestampHasBeenSet)
  {
   payload.WithDouble("PublishTimestamp", m_publishTimestamp.SecondsWithMSPrecision());
  }

  if(m_lastUpdateTimestampHasBeenSet)
  {
   payload.WithDouble("LastUpdateTimestamp", m_lastUpdateTimestamp.SecondsWithMSPrecision());
  }

  if(m_expiryTimestampHasBeenSet)
  {
   payload.WithDouble("ExpiryTimestamp", m_expiryTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace WAFV2
} // namespace Aws
