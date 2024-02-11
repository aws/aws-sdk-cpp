/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-insights/model/Workload.h>
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

Workload::Workload() : 
    m_workloadIdHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_workloadRemarksHasBeenSet(false)
{
}

Workload::Workload(JsonView jsonValue) : 
    m_workloadIdHasBeenSet(false),
    m_componentNameHasBeenSet(false),
    m_workloadNameHasBeenSet(false),
    m_tier(Tier::NOT_SET),
    m_tierHasBeenSet(false),
    m_workloadRemarksHasBeenSet(false)
{
  *this = jsonValue;
}

Workload& Workload::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("WorkloadId"))
  {
    m_workloadId = jsonValue.GetString("WorkloadId");

    m_workloadIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentName"))
  {
    m_componentName = jsonValue.GetString("ComponentName");

    m_componentNameHasBeenSet = true;
  }

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

  if(jsonValue.ValueExists("WorkloadRemarks"))
  {
    m_workloadRemarks = jsonValue.GetString("WorkloadRemarks");

    m_workloadRemarksHasBeenSet = true;
  }

  return *this;
}

JsonValue Workload::Jsonize() const
{
  JsonValue payload;

  if(m_workloadIdHasBeenSet)
  {
   payload.WithString("WorkloadId", m_workloadId);

  }

  if(m_componentNameHasBeenSet)
  {
   payload.WithString("ComponentName", m_componentName);

  }

  if(m_workloadNameHasBeenSet)
  {
   payload.WithString("WorkloadName", m_workloadName);

  }

  if(m_tierHasBeenSet)
  {
   payload.WithString("Tier", TierMapper::GetNameForTier(m_tier));
  }

  if(m_workloadRemarksHasBeenSet)
  {
   payload.WithString("WorkloadRemarks", m_workloadRemarks);

  }

  return payload;
}

} // namespace Model
} // namespace ApplicationInsights
} // namespace Aws
