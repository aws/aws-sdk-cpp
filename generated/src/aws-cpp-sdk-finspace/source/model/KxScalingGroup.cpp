/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxScalingGroup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace finspace
{
namespace Model
{

KxScalingGroup::KxScalingGroup() : 
    m_scalingGroupNameHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_clustersHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_status(KxScalingGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

KxScalingGroup::KxScalingGroup(JsonView jsonValue) : 
    m_scalingGroupNameHasBeenSet(false),
    m_hostTypeHasBeenSet(false),
    m_clustersHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_status(KxScalingGroupStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KxScalingGroup& KxScalingGroup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scalingGroupName"))
  {
    m_scalingGroupName = jsonValue.GetString("scalingGroupName");

    m_scalingGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("hostType"))
  {
    m_hostType = jsonValue.GetString("hostType");

    m_hostTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusters"))
  {
    Aws::Utils::Array<JsonView> clustersJsonList = jsonValue.GetArray("clusters");
    for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
    {
      m_clusters.push_back(clustersJsonList[clustersIndex].AsString());
    }
    m_clustersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

    m_availabilityZoneIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = KxScalingGroupStatusMapper::GetKxScalingGroupStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastModifiedTimestamp"))
  {
    m_lastModifiedTimestamp = jsonValue.GetDouble("lastModifiedTimestamp");

    m_lastModifiedTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdTimestamp"))
  {
    m_createdTimestamp = jsonValue.GetDouble("createdTimestamp");

    m_createdTimestampHasBeenSet = true;
  }

  return *this;
}

JsonValue KxScalingGroup::Jsonize() const
{
  JsonValue payload;

  if(m_scalingGroupNameHasBeenSet)
  {
   payload.WithString("scalingGroupName", m_scalingGroupName);

  }

  if(m_hostTypeHasBeenSet)
  {
   payload.WithString("hostType", m_hostType);

  }

  if(m_clustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> clustersJsonList(m_clusters.size());
   for(unsigned clustersIndex = 0; clustersIndex < clustersJsonList.GetLength(); ++clustersIndex)
   {
     clustersJsonList[clustersIndex].AsString(m_clusters[clustersIndex]);
   }
   payload.WithArray("clusters", std::move(clustersJsonList));

  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", KxScalingGroupStatusMapper::GetNameForKxScalingGroupStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_lastModifiedTimestampHasBeenSet)
  {
   payload.WithDouble("lastModifiedTimestamp", m_lastModifiedTimestamp.SecondsWithMSPrecision());
  }

  if(m_createdTimestampHasBeenSet)
  {
   payload.WithDouble("createdTimestamp", m_createdTimestamp.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace finspace
} // namespace Aws
