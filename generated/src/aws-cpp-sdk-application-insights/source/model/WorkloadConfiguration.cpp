/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/WorkloadConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ApplicationInsights
{
namespace Model
{

WorkloadConfiguration::WorkloadConfiguration() : 
    m_workloadNameHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
}

WorkloadConfiguration::WorkloadConfiguration(JsonView jsonValue) : 
    m_workloadNameHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_configurationHasBeenSet(false)
{
  *this = jsonValue;
}

WorkloadConfiguration& WorkloadConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkloadName"))
  {
    m_workloadName = jsonValue.GetString("WorkloadName");

    m_workloadNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tier"))
  {
    m_tier = TierMapper::GetTierForName(jsonValue.GetString("Tier"));

    m_tierHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Configuration"))
  {
    m_configuration = jsonValue.GetString("Configuration");

    m_configurationHasBeenSet = true;
  }

  return *this;
}

JsonValue WorkloadConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("WorkloadName", m_workloadName);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", TierMapper::GetNameForTier(m_tier));
  }

  if(m_configurationHasBeenSet)
  {
   payload.WithString("Configuration", m_configuration);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
