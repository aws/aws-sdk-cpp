/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codedeploy/model/InstanceSummary.h>
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

InstanceSummary::InstanceSummary() : 
    m_deploymentIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_status(InstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleEventsHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false)
{
}

InstanceSummary::InstanceSummary(JsonView jsonValue) : 
    m_deploymentIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_status(InstanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_lastUpdatedAtHasBeenSet(false),
    m_lifecycleEventsHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

InstanceSummary& InstanceSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("deploymentId"))
  {
    m_deploymentId = jsonValue.GetString("deploymentId");

    m_deploymentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceId"))
  {
    m_instanceId = jsonValue.GetString("instanceId");

    m_instanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = InstanceStatusMapper::GetInstanceStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("lastUpdatedAt");

    m_lastUpdatedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecycleEvents"))
  {
    Aws::Utils::Array<JsonView> lifecycleEventsJsonList = jsonValue.GetArray("lifecycleEvents");
    for(unsigned lifecycleEventsIndex = 0; lifecycleEventsIndex < lifecycleEventsJsonList.GetLength(); ++lifecycleEventsIndex)
    {
      m_lifecycleEvents.push_back(lifecycleEventsJsonList[lifecycleEventsIndex].AsObject());
    }
    m_lifecycleEventsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(jsonValue.GetString("instanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue InstanceSummary::Jsonize() const
{
  JsonValue payload;

  if(m_deploymentIdHasBeenSet)
  {
   payload.WithString("deploymentId", m_deploymentId);

  }

  if(m_instanceIdHasBeenSet)
  {
   payload.WithString("instanceId", m_instanceId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", InstanceStatusMapper::GetNameForInstanceStatus(m_status));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithDouble("lastUpdatedAt", m_lastUpdatedAt.SecondsWithMSPrecision());
  }

  if(m_lifecycleEventsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lifecycleEventsJsonList(m_lifecycleEvents.size());
   for(unsigned lifecycleEventsIndex = 0; lifecycleEventsIndex < lifecycleEventsJsonList.GetLength(); ++lifecycleEventsIndex)
   {
     lifecycleEventsJsonList[lifecycleEventsIndex].AsObject(m_lifecycleEvents[lifecycleEventsIndex].Jsonize());
   }
   payload.WithArray("lifecycleEvents", std::move(lifecycleEventsJsonList));

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", InstanceTypeMapper::GetNameForInstanceType(m_instanceType));
  }

  return payload;
}

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
