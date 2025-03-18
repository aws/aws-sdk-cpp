/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/Statistics.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace deadline
{
namespace Model
{

Statistics::Statistics(JsonView jsonValue)
{
  *this = jsonValue;
}

Statistics& Statistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("queueId"))
  {
    m_queueId = jsonValue.GetString("queueId");
    m_queueIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fleetId"))
  {
    m_fleetId = jsonValue.GetString("fleetId");
    m_fleetIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobId"))
  {
    m_jobId = jsonValue.GetString("jobId");
    m_jobIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("jobName"))
  {
    m_jobName = jsonValue.GetString("jobName");
    m_jobNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userId"))
  {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("usageType"))
  {
    m_usageType = UsageTypeMapper::GetUsageTypeForName(jsonValue.GetString("usageType"));
    m_usageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("licenseProduct"))
  {
    m_licenseProduct = jsonValue.GetString("licenseProduct");
    m_licenseProductHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");
    m_countHasBeenSet = true;
  }
  if(jsonValue.ValueExists("costInUsd"))
  {
    m_costInUsd = jsonValue.GetObject("costInUsd");
    m_costInUsdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("runtimeInSeconds"))
  {
    m_runtimeInSeconds = jsonValue.GetObject("runtimeInSeconds");
    m_runtimeInSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationStartTime"))
  {
    m_aggregationStartTime = jsonValue.GetString("aggregationStartTime");
    m_aggregationStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("aggregationEndTime"))
  {
    m_aggregationEndTime = jsonValue.GetString("aggregationEndTime");
    m_aggregationEndTimeHasBeenSet = true;
  }
  return *this;
}

JsonValue Statistics::Jsonize() const
{
  JsonValue payload;

  if(m_queueIdHasBeenSet)
  {
   payload.WithString("queueId", m_queueId);

  }

  if(m_fleetIdHasBeenSet)
  {
   payload.WithString("fleetId", m_fleetId);

  }

  if(m_jobIdHasBeenSet)
  {
   payload.WithString("jobId", m_jobId);

  }

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("jobName", m_jobName);

  }

  if(m_userIdHasBeenSet)
  {
   payload.WithString("userId", m_userId);

  }

  if(m_usageTypeHasBeenSet)
  {
   payload.WithString("usageType", UsageTypeMapper::GetNameForUsageType(m_usageType));
  }

  if(m_licenseProductHasBeenSet)
  {
   payload.WithString("licenseProduct", m_licenseProduct);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_costInUsdHasBeenSet)
  {
   payload.WithObject("costInUsd", m_costInUsd.Jsonize());

  }

  if(m_runtimeInSecondsHasBeenSet)
  {
   payload.WithObject("runtimeInSeconds", m_runtimeInSeconds.Jsonize());

  }

  if(m_aggregationStartTimeHasBeenSet)
  {
   payload.WithString("aggregationStartTime", m_aggregationStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_aggregationEndTimeHasBeenSet)
  {
   payload.WithString("aggregationEndTime", m_aggregationEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace deadline
} // namespace Aws
