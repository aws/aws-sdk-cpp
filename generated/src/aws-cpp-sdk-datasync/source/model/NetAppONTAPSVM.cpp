/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/NetAppONTAPSVM.h>
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

NetAppONTAPSVM::NetAppONTAPSVM() : 
    m_clusterUuidHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_svmNameHasBeenSet(false),
    m_cifsShareCount(0),
    m_cifsShareCountHasBeenSet(false),
    m_enabledProtocolsHasBeenSet(false),
    m_totalCapacityUsed(0),
    m_totalCapacityUsedHasBeenSet(false),
    m_totalCapacityProvisioned(0),
    m_totalCapacityProvisionedHasBeenSet(false),
    m_totalLogicalCapacityUsed(0),
    m_totalLogicalCapacityUsedHasBeenSet(false),
    m_maxP95PerformanceHasBeenSet(false),
    m_recommendationsHasBeenSet(false),
    m_nfsExportedVolumes(0),
    m_nfsExportedVolumesHasBeenSet(false),
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_totalSnapshotCapacityUsed(0),
    m_totalSnapshotCapacityUsedHasBeenSet(false),
    m_lunCount(0),
    m_lunCountHasBeenSet(false)
{
}

NetAppONTAPSVM::NetAppONTAPSVM(JsonView jsonValue) : 
    m_clusterUuidHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_svmNameHasBeenSet(false),
    m_cifsShareCount(0),
    m_cifsShareCountHasBeenSet(false),
    m_enabledProtocolsHasBeenSet(false),
    m_totalCapacityUsed(0),
    m_totalCapacityUsedHasBeenSet(false),
    m_totalCapacityProvisioned(0),
    m_totalCapacityProvisionedHasBeenSet(false),
    m_totalLogicalCapacityUsed(0),
    m_totalLogicalCapacityUsedHasBeenSet(false),
    m_maxP95PerformanceHasBeenSet(false),
    m_recommendationsHasBeenSet(false),
    m_nfsExportedVolumes(0),
    m_nfsExportedVolumesHasBeenSet(false),
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_totalSnapshotCapacityUsed(0),
    m_totalSnapshotCapacityUsedHasBeenSet(false),
    m_lunCount(0),
    m_lunCountHasBeenSet(false)
{
  *this = jsonValue;
}

NetAppONTAPSVM& NetAppONTAPSVM::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterUuid"))
  {
    m_clusterUuid = jsonValue.GetString("ClusterUuid");

    m_clusterUuidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SvmName"))
  {
    m_svmName = jsonValue.GetString("SvmName");

    m_svmNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CifsShareCount"))
  {
    m_cifsShareCount = jsonValue.GetInt64("CifsShareCount");

    m_cifsShareCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnabledProtocols"))
  {
    Aws::Utils::Array<JsonView> enabledProtocolsJsonList = jsonValue.GetArray("EnabledProtocols");
    for(unsigned enabledProtocolsIndex = 0; enabledProtocolsIndex < enabledProtocolsJsonList.GetLength(); ++enabledProtocolsIndex)
    {
      m_enabledProtocols.push_back(enabledProtocolsJsonList[enabledProtocolsIndex].AsString());
    }
    m_enabledProtocolsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCapacityUsed"))
  {
    m_totalCapacityUsed = jsonValue.GetInt64("TotalCapacityUsed");

    m_totalCapacityUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalCapacityProvisioned"))
  {
    m_totalCapacityProvisioned = jsonValue.GetInt64("TotalCapacityProvisioned");

    m_totalCapacityProvisionedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalLogicalCapacityUsed"))
  {
    m_totalLogicalCapacityUsed = jsonValue.GetInt64("TotalLogicalCapacityUsed");

    m_totalLogicalCapacityUsedHasBeenSet = true;
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

  if(jsonValue.ValueExists("NfsExportedVolumes"))
  {
    m_nfsExportedVolumes = jsonValue.GetInt64("NfsExportedVolumes");

    m_nfsExportedVolumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecommendationStatus"))
  {
    m_recommendationStatus = RecommendationStatusMapper::GetRecommendationStatusForName(jsonValue.GetString("RecommendationStatus"));

    m_recommendationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TotalSnapshotCapacityUsed"))
  {
    m_totalSnapshotCapacityUsed = jsonValue.GetInt64("TotalSnapshotCapacityUsed");

    m_totalSnapshotCapacityUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LunCount"))
  {
    m_lunCount = jsonValue.GetInt64("LunCount");

    m_lunCountHasBeenSet = true;
  }

  return *this;
}

JsonValue NetAppONTAPSVM::Jsonize() const
{
  JsonValue payload;

  if(m_clusterUuidHasBeenSet)
  {
   payload.WithString("ClusterUuid", m_clusterUuid);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_svmNameHasBeenSet)
  {
   payload.WithString("SvmName", m_svmName);

  }

  if(m_cifsShareCountHasBeenSet)
  {
   payload.WithInt64("CifsShareCount", m_cifsShareCount);

  }

  if(m_enabledProtocolsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> enabledProtocolsJsonList(m_enabledProtocols.size());
   for(unsigned enabledProtocolsIndex = 0; enabledProtocolsIndex < enabledProtocolsJsonList.GetLength(); ++enabledProtocolsIndex)
   {
     enabledProtocolsJsonList[enabledProtocolsIndex].AsString(m_enabledProtocols[enabledProtocolsIndex]);
   }
   payload.WithArray("EnabledProtocols", std::move(enabledProtocolsJsonList));

  }

  if(m_totalCapacityUsedHasBeenSet)
  {
   payload.WithInt64("TotalCapacityUsed", m_totalCapacityUsed);

  }

  if(m_totalCapacityProvisionedHasBeenSet)
  {
   payload.WithInt64("TotalCapacityProvisioned", m_totalCapacityProvisioned);

  }

  if(m_totalLogicalCapacityUsedHasBeenSet)
  {
   payload.WithInt64("TotalLogicalCapacityUsed", m_totalLogicalCapacityUsed);

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

  if(m_nfsExportedVolumesHasBeenSet)
  {
   payload.WithInt64("NfsExportedVolumes", m_nfsExportedVolumes);

  }

  if(m_recommendationStatusHasBeenSet)
  {
   payload.WithString("RecommendationStatus", RecommendationStatusMapper::GetNameForRecommendationStatus(m_recommendationStatus));
  }

  if(m_totalSnapshotCapacityUsedHasBeenSet)
  {
   payload.WithInt64("TotalSnapshotCapacityUsed", m_totalSnapshotCapacityUsed);

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
