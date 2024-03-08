/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/OpenZFSVolumeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace FSx
{
namespace Model
{

OpenZFSVolumeConfiguration::OpenZFSVolumeConfiguration() : 
    m_parentVolumeIdHasBeenSet(false),
    m_volumePathHasBeenSet(false),
    m_storageCapacityReservationGiB(0),
    m_storageCapacityReservationGiBHasBeenSet(false),
    m_storageCapacityQuotaGiB(0),
    m_storageCapacityQuotaGiBHasBeenSet(false),
    m_recordSizeKiB(0),
    m_recordSizeKiBHasBeenSet(false),
    m_dataCompressionType(OpenZFSDataCompressionType::NOT_SET),
    m_dataCompressionTypeHasBeenSet(false),
    m_copyTagsToSnapshots(false),
    m_copyTagsToSnapshotsHasBeenSet(false),
    m_originSnapshotHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_nfsExportsHasBeenSet(false),
    m_userAndGroupQuotasHasBeenSet(false),
    m_restoreToSnapshotHasBeenSet(false),
    m_deleteIntermediateSnaphots(false),
    m_deleteIntermediateSnaphotsHasBeenSet(false),
    m_deleteClonedVolumes(false),
    m_deleteClonedVolumesHasBeenSet(false),
    m_deleteIntermediateData(false),
    m_deleteIntermediateDataHasBeenSet(false),
    m_sourceSnapshotARNHasBeenSet(false),
    m_destinationSnapshotHasBeenSet(false),
    m_copyStrategy(OpenZFSCopyStrategy::NOT_SET),
    m_copyStrategyHasBeenSet(false)
{
}

OpenZFSVolumeConfiguration::OpenZFSVolumeConfiguration(JsonView jsonValue) : 
    m_parentVolumeIdHasBeenSet(false),
    m_volumePathHasBeenSet(false),
    m_storageCapacityReservationGiB(0),
    m_storageCapacityReservationGiBHasBeenSet(false),
    m_storageCapacityQuotaGiB(0),
    m_storageCapacityQuotaGiBHasBeenSet(false),
    m_recordSizeKiB(0),
    m_recordSizeKiBHasBeenSet(false),
    m_dataCompressionType(OpenZFSDataCompressionType::NOT_SET),
    m_dataCompressionTypeHasBeenSet(false),
    m_copyTagsToSnapshots(false),
    m_copyTagsToSnapshotsHasBeenSet(false),
    m_originSnapshotHasBeenSet(false),
    m_readOnly(false),
    m_readOnlyHasBeenSet(false),
    m_nfsExportsHasBeenSet(false),
    m_userAndGroupQuotasHasBeenSet(false),
    m_restoreToSnapshotHasBeenSet(false),
    m_deleteIntermediateSnaphots(false),
    m_deleteIntermediateSnaphotsHasBeenSet(false),
    m_deleteClonedVolumes(false),
    m_deleteClonedVolumesHasBeenSet(false),
    m_deleteIntermediateData(false),
    m_deleteIntermediateDataHasBeenSet(false),
    m_sourceSnapshotARNHasBeenSet(false),
    m_destinationSnapshotHasBeenSet(false),
    m_copyStrategy(OpenZFSCopyStrategy::NOT_SET),
    m_copyStrategyHasBeenSet(false)
{
  *this = jsonValue;
}

OpenZFSVolumeConfiguration& OpenZFSVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParentVolumeId"))
  {
    m_parentVolumeId = jsonValue.GetString("ParentVolumeId");

    m_parentVolumeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VolumePath"))
  {
    m_volumePath = jsonValue.GetString("VolumePath");

    m_volumePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageCapacityReservationGiB"))
  {
    m_storageCapacityReservationGiB = jsonValue.GetInteger("StorageCapacityReservationGiB");

    m_storageCapacityReservationGiBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageCapacityQuotaGiB"))
  {
    m_storageCapacityQuotaGiB = jsonValue.GetInteger("StorageCapacityQuotaGiB");

    m_storageCapacityQuotaGiBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RecordSizeKiB"))
  {
    m_recordSizeKiB = jsonValue.GetInteger("RecordSizeKiB");

    m_recordSizeKiBHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DataCompressionType"))
  {
    m_dataCompressionType = OpenZFSDataCompressionTypeMapper::GetOpenZFSDataCompressionTypeForName(jsonValue.GetString("DataCompressionType"));

    m_dataCompressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTagsToSnapshots"))
  {
    m_copyTagsToSnapshots = jsonValue.GetBool("CopyTagsToSnapshots");

    m_copyTagsToSnapshotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OriginSnapshot"))
  {
    m_originSnapshot = jsonValue.GetObject("OriginSnapshot");

    m_originSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReadOnly"))
  {
    m_readOnly = jsonValue.GetBool("ReadOnly");

    m_readOnlyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NfsExports"))
  {
    Aws::Utils::Array<JsonView> nfsExportsJsonList = jsonValue.GetArray("NfsExports");
    for(unsigned nfsExportsIndex = 0; nfsExportsIndex < nfsExportsJsonList.GetLength(); ++nfsExportsIndex)
    {
      m_nfsExports.push_back(nfsExportsJsonList[nfsExportsIndex].AsObject());
    }
    m_nfsExportsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UserAndGroupQuotas"))
  {
    Aws::Utils::Array<JsonView> userAndGroupQuotasJsonList = jsonValue.GetArray("UserAndGroupQuotas");
    for(unsigned userAndGroupQuotasIndex = 0; userAndGroupQuotasIndex < userAndGroupQuotasJsonList.GetLength(); ++userAndGroupQuotasIndex)
    {
      m_userAndGroupQuotas.push_back(userAndGroupQuotasJsonList[userAndGroupQuotasIndex].AsObject());
    }
    m_userAndGroupQuotasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RestoreToSnapshot"))
  {
    m_restoreToSnapshot = jsonValue.GetString("RestoreToSnapshot");

    m_restoreToSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteIntermediateSnaphots"))
  {
    m_deleteIntermediateSnaphots = jsonValue.GetBool("DeleteIntermediateSnaphots");

    m_deleteIntermediateSnaphotsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteClonedVolumes"))
  {
    m_deleteClonedVolumes = jsonValue.GetBool("DeleteClonedVolumes");

    m_deleteClonedVolumesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteIntermediateData"))
  {
    m_deleteIntermediateData = jsonValue.GetBool("DeleteIntermediateData");

    m_deleteIntermediateDataHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceSnapshotARN"))
  {
    m_sourceSnapshotARN = jsonValue.GetString("SourceSnapshotARN");

    m_sourceSnapshotARNHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DestinationSnapshot"))
  {
    m_destinationSnapshot = jsonValue.GetString("DestinationSnapshot");

    m_destinationSnapshotHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyStrategy"))
  {
    m_copyStrategy = OpenZFSCopyStrategyMapper::GetOpenZFSCopyStrategyForName(jsonValue.GetString("CopyStrategy"));

    m_copyStrategyHasBeenSet = true;
  }

  return *this;
}

JsonValue OpenZFSVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_parentVolumeIdHasBeenSet)
  {
   payload.WithString("ParentVolumeId", m_parentVolumeId);

  }

  if(m_volumePathHasBeenSet)
  {
   payload.WithString("VolumePath", m_volumePath);

  }

  if(m_storageCapacityReservationGiBHasBeenSet)
  {
   payload.WithInteger("StorageCapacityReservationGiB", m_storageCapacityReservationGiB);

  }

  if(m_storageCapacityQuotaGiBHasBeenSet)
  {
   payload.WithInteger("StorageCapacityQuotaGiB", m_storageCapacityQuotaGiB);

  }

  if(m_recordSizeKiBHasBeenSet)
  {
   payload.WithInteger("RecordSizeKiB", m_recordSizeKiB);

  }

  if(m_dataCompressionTypeHasBeenSet)
  {
   payload.WithString("DataCompressionType", OpenZFSDataCompressionTypeMapper::GetNameForOpenZFSDataCompressionType(m_dataCompressionType));
  }

  if(m_copyTagsToSnapshotsHasBeenSet)
  {
   payload.WithBool("CopyTagsToSnapshots", m_copyTagsToSnapshots);

  }

  if(m_originSnapshotHasBeenSet)
  {
   payload.WithObject("OriginSnapshot", m_originSnapshot.Jsonize());

  }

  if(m_readOnlyHasBeenSet)
  {
   payload.WithBool("ReadOnly", m_readOnly);

  }

  if(m_nfsExportsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> nfsExportsJsonList(m_nfsExports.size());
   for(unsigned nfsExportsIndex = 0; nfsExportsIndex < nfsExportsJsonList.GetLength(); ++nfsExportsIndex)
   {
     nfsExportsJsonList[nfsExportsIndex].AsObject(m_nfsExports[nfsExportsIndex].Jsonize());
   }
   payload.WithArray("NfsExports", std::move(nfsExportsJsonList));

  }

  if(m_userAndGroupQuotasHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> userAndGroupQuotasJsonList(m_userAndGroupQuotas.size());
   for(unsigned userAndGroupQuotasIndex = 0; userAndGroupQuotasIndex < userAndGroupQuotasJsonList.GetLength(); ++userAndGroupQuotasIndex)
   {
     userAndGroupQuotasJsonList[userAndGroupQuotasIndex].AsObject(m_userAndGroupQuotas[userAndGroupQuotasIndex].Jsonize());
   }
   payload.WithArray("UserAndGroupQuotas", std::move(userAndGroupQuotasJsonList));

  }

  if(m_restoreToSnapshotHasBeenSet)
  {
   payload.WithString("RestoreToSnapshot", m_restoreToSnapshot);

  }

  if(m_deleteIntermediateSnaphotsHasBeenSet)
  {
   payload.WithBool("DeleteIntermediateSnaphots", m_deleteIntermediateSnaphots);

  }

  if(m_deleteClonedVolumesHasBeenSet)
  {
   payload.WithBool("DeleteClonedVolumes", m_deleteClonedVolumes);

  }

  if(m_deleteIntermediateDataHasBeenSet)
  {
   payload.WithBool("DeleteIntermediateData", m_deleteIntermediateData);

  }

  if(m_sourceSnapshotARNHasBeenSet)
  {
   payload.WithString("SourceSnapshotARN", m_sourceSnapshotARN);

  }

  if(m_destinationSnapshotHasBeenSet)
  {
   payload.WithString("DestinationSnapshot", m_destinationSnapshot);

  }

  if(m_copyStrategyHasBeenSet)
  {
   payload.WithString("CopyStrategy", OpenZFSCopyStrategyMapper::GetNameForOpenZFSCopyStrategy(m_copyStrategy));
  }

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
