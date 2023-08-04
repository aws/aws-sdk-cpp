/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/NetAppONTAPCluster.h>
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

NetAppONTAPCluster::NetAppONTAPCluster() : 
    m_cifsShareCount(0),
    m_cifsShareCountHasBeenSet(false),
    m_nfsExportedVolumes(0),
    m_nfsExportedVolumesHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_maxP95PerformanceHasBeenSet(false),
    m_clusterBlockStorageSize(0),
    m_clusterBlockStorageSizeHasBeenSet(false),
    m_clusterBlockStorageUsed(0),
    m_clusterBlockStorageUsedHasBeenSet(false),
    m_clusterBlockStorageLogicalUsed(0),
    m_clusterBlockStorageLogicalUsedHasBeenSet(false),
    m_recommendationsHasBeenSet(false),
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_lunCount(0),
    m_lunCountHasBeenSet(false),
    m_clusterCloudStorageUsed(0),
    m_clusterCloudStorageUsedHasBeenSet(false)
{
}

NetAppONTAPCluster::NetAppONTAPCluster(JsonView jsonValue) : 
    m_cifsShareCount(0),
    m_cifsShareCountHasBeenSet(false),
    m_nfsExportedVolumes(0),
    m_nfsExportedVolumesHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_maxP95PerformanceHasBeenSet(false),
    m_clusterBlockStorageSize(0),
    m_clusterBlockStorageSizeHasBeenSet(false),
    m_clusterBlockStorageUsed(0),
    m_clusterBlockStorageUsedHasBeenSet(false),
    m_clusterBlockStorageLogicalUsed(0),
    m_clusterBlockStorageLogicalUsedHasBeenSet(false),
    m_recommendationsHasBeenSet(false),
    m_recommendationStatus(RecommendationStatus::NOT_SET),
    m_recommendationStatusHasBeenSet(false),
    m_lunCount(0),
    m_lunCountHasBeenSet(false),
    m_clusterCloudStorageUsed(0),
    m_clusterCloudStorageUsedHasBeenSet(false)
{
  *this = jsonValue;
}

NetAppONTAPCluster& NetAppONTAPCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("CifsShareCount"))
  {
    m_cifsShareCount = jsonValue.GetInt64("CifsShareCount");

    m_cifsShareCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NfsExportedVolumes"))
  {
    m_nfsExportedVolumes = jsonValue.GetInt64("NfsExportedVolumes");

    m_nfsExportedVolumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterName"))
  {
    m_clusterName = jsonValue.GetString("ClusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaxP95Performance"))
  {
    m_maxP95Performance = jsonValue.GetObject("MaxP95Performance");

    m_maxP95PerformanceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterBlockStorageSize"))
  {
    m_clusterBlockStorageSize = jsonValue.GetInt64("ClusterBlockStorageSize");

    m_clusterBlockStorageSizeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterBlockStorageUsed"))
  {
    m_clusterBlockStorageUsed = jsonValue.GetInt64("ClusterBlockStorageUsed");

    m_clusterBlockStorageUsedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterBlockStorageLogicalUsed"))
  {
    m_clusterBlockStorageLogicalUsed = jsonValue.GetInt64("ClusterBlockStorageLogicalUsed");

    m_clusterBlockStorageLogicalUsedHasBeenSet = true;
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

  if(jsonValue.ValueExists("ClusterCloudStorageUsed"))
  {
    m_clusterCloudStorageUsed = jsonValue.GetInt64("ClusterCloudStorageUsed");

    m_clusterCloudStorageUsedHasBeenSet = true;
  }

  return *this;
}

JsonValue NetAppONTAPCluster::Jsonize() const
{
  JsonValue payload;

  if(m_cifsShareCountHasBeenSet)
  {
   payload.WithInt64("CifsShareCount", m_cifsShareCount);

  }

  if(m_nfsExportedVolumesHasBeenSet)
  {
   payload.WithInt64("NfsExportedVolumes", m_nfsExportedVolumes);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("ResourceId", m_resourceId);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_maxP95PerformanceHasBeenSet)
  {
   payload.WithObject("MaxP95Performance", m_maxP95Performance.Jsonize());

  }

  if(m_clusterBlockStorageSizeHasBeenSet)
  {
   payload.WithInt64("ClusterBlockStorageSize", m_clusterBlockStorageSize);

  }

  if(m_clusterBlockStorageUsedHasBeenSet)
  {
   payload.WithInt64("ClusterBlockStorageUsed", m_clusterBlockStorageUsed);

  }

  if(m_clusterBlockStorageLogicalUsedHasBeenSet)
  {
   payload.WithInt64("ClusterBlockStorageLogicalUsed", m_clusterBlockStorageLogicalUsed);

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

  if(m_clusterCloudStorageUsedHasBeenSet)
  {
   payload.WithInt64("ClusterCloudStorageUsed", m_clusterCloudStorageUsed);

  }

  return payload;
}

} // namespace Model
} // namespace DataSync
} // namespace Aws
