/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/NetAppONTAPVolume.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DataSync
{
namespace Model
{

NetAppONTAPVolume::NetAppONTAPVolume() : 
    m_volumeNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_cifsShareCount(0),
    m_cifsShareCountHasBeenSet(false),
    m_securityStyleHasBeenSet(false),
    m_svmUuidHasBeenSet(false),
    m_svmNameHasBeenSet(false),
    m_capacityUsed(0),
    m_capacityUsedHasBeenSet(false),
    m_capacityProvisioned(0),
    m_capacityProvisionedHasBeenSet(false),
    m_logicalCapacityUsed(0),
    m_logicalCapacityUsedHasBeenSet(false),
    m_nfsExported(false),
    m_nfsExportedHasBeenSet(false),
    m_snapshotCapacityUsed(0),
    m_snapshotCapacityUsedHasBeenSet(false),
    m_maxP95PerformanceHasBeenSet(false),
    m_recommendationsHasBeenSet(false),
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_lunCount(0),
    m_lunCountHasBeenSet(false)
{
}

NetAppONTAPVolume::NetAppONTAPVolume(JsonView jsonValue) : 
    m_volumeNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_cifsShareCount(0),
    m_cifsShareCountHasBeenSet(false),
    m_securityStyleHasBeenSet(false),
    m_svmUuidHasBeenSet(false),
    m_svmNameHasBeenSet(false),
    m_capacityUsed(0),
    m_capacityUsedHasBeenSet(false),
    m_capacityProvisioned(0),
    m_capacityProvisionedHasBeenSet(false),
    m_logicalCapacityUsed(0),
    m_logicalCapacityUsedHasBeenSet(false),
    m_nfsExported(false),
    m_nfsExportedHasBeenSet(false),
    m_snapshotCapacityUsed(0),
    m_snapshotCapacityUsedHasBeenSet(false),
    m_maxP95PerformanceHasBeenSet(false),
    m_recommendationsHasBeenSet(false),
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_lunCount(0),
    m_lunCountHasBeenSet(false)
{
  *this = jsonValue;
}

NetAppONTAPVolume& NetAppONTAPVolume::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("VolumeName"))
  {
    m_volumeName = jsonValue.GetString("VolumeName");

    m_volumeNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CifsShareCount"))
  {
    m_cifsShareCount = jsonValue.GetInt64("CifsShareCount");

    m_cifsShareCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecurityStyle"))
  {
    m_securityStyle = jsonValue.GetString("SecurityStyle");

    m_securityStyleHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SvmUuid"))
  {
    m_svmUuid = jsonValue.GetString("SvmUuid");

    m_svmUuidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SvmName"))
  {
    m_svmName = jsonValue.GetString("SvmName");

    m_svmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityUsed"))
  {
    m_capacityUsed = jsonValue.GetInt64("CapacityUsed");

    m_capacityUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CapacityProvisioned"))
  {
    m_capacityProvisioned = jsonValue.GetInt64("CapacityProvisioned");

    m_capacityProvisionedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LogicalCapacityUsed"))
  {
    m_logicalCapacityUsed = jsonValue.GetInt64("LogicalCapacityUsed");

    m_logicalCapacityUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NfsExported"))
  {
    m_nfsExported = jsonValue.GetBool("NfsExported");

    m_nfsExportedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotCapacityUsed"))
  {
    m_snapshotCapacityUsed = jsonValue.GetInt64("SnapshotCapacityUsed");

    m_snapshotCapacityUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxP95Performance"))
  {
    m_maxP95Performance = jsonValue.GetObject("MaxP95Performance");

    m_maxP95PerformanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Recommendations"))
  {
    Aws::Utils::Array<JsonView> recommendationsJsonList = jsonValue.GetArray("Recommendations");
    for(unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex)
    {
      m_recommendations.push_back(recommendationsJsonList[recommendationsIndex].AsObject());
    }
    m_recommendationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationStatus"))
  {
    m_recommendationStatus = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("RecommendationStatus"));

    m_recommendationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LunCount"))
  {
    m_lunCount = jsonValue.GetInt64("LunCount");

    m_lunCountHasBeenSet = true;
  }

  return *this;
}

JsonValue NetAppONTAPVolume::Jsonize() const
{
  JsonValue payload;

  if(m_volumeNameHasBeenSet)
  {
   payload.WithString("VolumeName", m_volumeName);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_cifsShareCountHasBeenSet)
  {
   payload.WithInt64("CifsShareCount", m_cifsShareCount);

  }

  if(m_securityStyleHasBeenSet)
  {
   payload.WithString("SecurityStyle", m_securityStyle);

  }

  if(m_svmUuidHasBeenSet)
  {
   payload.WithString("SvmUuid", m_svmUuid);

  }

  if(m_svmNameHasBeenSet)
  {
   payload.WithString("SvmName", m_svmName);

  }

  if(m_capacityUsedHasBeenSet)
  {
   payload.WithInt64("CapacityUsed", m_capacityUsed);

  }

  if(m_capacityProvisionedHasBeenSet)
  {
   payload.WithInt64("CapacityProvisioned", m_capacityProvisioned);

  }

  if(m_logicalCapacityUsedHasBeenSet)
  {
   payload.WithInt64("LogicalCapacityUsed", m_logicalCapacityUsed);

  }

  if(m_nfsExportedHasBeenSet)
  {
   payload.WithBool("NfsExported", m_nfsExported);

  }

  if(m_snapshotCapacityUsedHasBeenSet)
  {
   payload.WithInt64("SnapshotCapacityUsed", m_snapshotCapacityUsed);

  }

  if(m_maxP95PerformanceHasBeenSet)
  {
   payload.WithObject("MaxP95Performance", m_maxP95Performance.Jsonize());

  }

  if(m_recommendationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> recommendationsJsonList(m_recommendations.size());
   for(unsigned recommendationsIndex = 0; recommendationsIndex < recommendationsJsonList.GetLength(); ++recommendationsIndex)
   {
     recommendationsJsonList[recommendationsIndex].AsObject(m_recommendations[recommendationsIndex].Jsonize());
   }
   payload.WithArray("Recommendations", std::move(recommendationsJsonList));

  }

  if(m_recommendationStatusHasBeenSet)
  {
   payload.WithString("RecommendationStatus", RecommendationStatusMapper::GetNameForRecommendationStatus(m_recommendationStatus));
  }

  if(m_lunCountHasBeenSet)
  {
   payload.WithInt64("LunCount", m_lunCount);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
