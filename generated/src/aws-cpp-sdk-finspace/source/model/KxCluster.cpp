/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/KxCluster.h>
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

KxCluster::KxCluster() : 
    m_status(KxClusterStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterType(KxClusterType::NOT_SET),
    m_clusterTypeHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_initializationScriptHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_azMode(KxAzMode::NOT_SET),
    m_azModeHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
}

KxCluster::KxCluster(JsonView jsonValue) : 
    m_status(KxClusterStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusReasonHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_clusterType(KxClusterType::NOT_SET),
    m_clusterTypeHasBeenSet(false),
    m_clusterDescriptionHasBeenSet(false),
    m_releaseLabelHasBeenSet(false),
    m_volumesHasBeenSet(false),
    m_initializationScriptHasBeenSet(false),
    m_executionRoleHasBeenSet(false),
    m_azMode(KxAzMode::NOT_SET),
    m_azModeHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_lastModifiedTimestampHasBeenSet(false),
    m_createdTimestampHasBeenSet(false)
{
  *this = jsonValue;
}

KxCluster& KxCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("status"))
  {
    m_status = KxClusterStatusMapper::GetKxClusterStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

    m_statusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = KxClusterTypeMapper::GetKxClusterTypeForName(jsonValue.GetString("clusterType"));

    m_clusterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterDescription"))
  {
    m_clusterDescription = jsonValue.GetString("clusterDescription");

    m_clusterDescriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("releaseLabel"))
  {
    m_releaseLabel = jsonValue.GetString("releaseLabel");

    m_releaseLabelHasBeenSet = true;
  }

  if(jsonValue.ValueExists("volumes"))
  {
    Aws::Utils::Array<JsonView> volumesJsonList = jsonValue.GetArray("volumes");
    for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
    {
      m_volumes.push_back(volumesJsonList[volumesIndex].AsObject());
    }
    m_volumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("initializationScript"))
  {
    m_initializationScript = jsonValue.GetString("initializationScript");

    m_initializationScriptHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionRole"))
  {
    m_executionRole = jsonValue.GetString("executionRole");

    m_executionRoleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("azMode"))
  {
    m_azMode = KxAzModeMapper::GetKxAzModeForName(jsonValue.GetString("azMode"));

    m_azModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("availabilityZoneId"))
  {
    m_availabilityZoneId = jsonValue.GetString("availabilityZoneId");

    m_availabilityZoneIdHasBeenSet = true;
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

JsonValue KxCluster::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", KxClusterStatusMapper::GetNameForKxClusterStatus(m_status));
  }

  if(m_statusReasonHasBeenSet)
  {
   payload.WithString("statusReason", m_statusReason);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_clusterTypeHasBeenSet)
  {
   payload.WithString("clusterType", KxClusterTypeMapper::GetNameForKxClusterType(m_clusterType));
  }

  if(m_clusterDescriptionHasBeenSet)
  {
   payload.WithString("clusterDescription", m_clusterDescription);

  }

  if(m_releaseLabelHasBeenSet)
  {
   payload.WithString("releaseLabel", m_releaseLabel);

  }

  if(m_volumesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> volumesJsonList(m_volumes.size());
   for(unsigned volumesIndex = 0; volumesIndex < volumesJsonList.GetLength(); ++volumesIndex)
   {
     volumesJsonList[volumesIndex].AsObject(m_volumes[volumesIndex].Jsonize());
   }
   payload.WithArray("volumes", std::move(volumesJsonList));

  }

  if(m_initializationScriptHasBeenSet)
  {
   payload.WithString("initializationScript", m_initializationScript);

  }

  if(m_executionRoleHasBeenSet)
  {
   payload.WithString("executionRole", m_executionRole);

  }

  if(m_azModeHasBeenSet)
  {
   payload.WithString("azMode", KxAzModeMapper::GetNameForKxAzMode(m_azMode));
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
   payload.WithString("availabilityZoneId", m_availabilityZoneId);

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
