﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/fsx/model/CreateOpenZFSVolumeConfiguration.h>
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

CreateOpenZFSVolumeConfiguration::CreateOpenZFSVolumeConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CreateOpenZFSVolumeConfiguration& CreateOpenZFSVolumeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ParentVolumeId"))
  {
    m_parentVolumeId = jsonValue.GetString("ParentVolumeId");
    m_parentVolumeIdHasBeenSet = true;
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
  return *this;
}

JsonValue CreateOpenZFSVolumeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_parentVolumeIdHasBeenSet)
  {
   payload.WithString("ParentVolumeId", m_parentVolumeId);

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

  return payload;
}

} // namespace Model
} // namespace FSx
} // namespace Aws
