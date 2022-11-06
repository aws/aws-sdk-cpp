/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsmv2/model/Backup.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudHSMV2
{
namespace Model
{

Backup::Backup() : 
    m_backupIdHasBeenSet(false),
    m_backupState(BackupState::NOT_SET),
    m_backupStateHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_copyTimestampHasBeenSet(false),
    m_neverExpires(false),
    m_neverExpiresHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceBackupHasBeenSet(false),
    m_sourceClusterHasBeenSet(false),
    m_deleteTimestampHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

Backup::Backup(JsonView jsonValue) : 
    m_backupIdHasBeenSet(false),
    m_backupState(BackupState::NOT_SET),
    m_backupStateHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_copyTimestampHasBeenSet(false),
    m_neverExpires(false),
    m_neverExpiresHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceBackupHasBeenSet(false),
    m_sourceClusterHasBeenSet(false),
    m_deleteTimestampHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
  *this = jsonValue;
}

Backup& Backup::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("BackupId"))
  {
    m_backupId = jsonValue.GetString("BackupId");

    m_backupIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BackupState"))
  {
    m_backupState = BackupStateMapper::GetBackupStateForName(jsonValue.GetString("BackupState"));

    m_backupStateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClusterId"))
  {
    m_clusterId = jsonValue.GetString("ClusterId");

    m_clusterIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreateTimestamp"))
  {
    m_createTimestamp = jsonValue.GetDouble("CreateTimestamp");

    m_createTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CopyTimestamp"))
  {
    m_copyTimestamp = jsonValue.GetDouble("CopyTimestamp");

    m_copyTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NeverExpires"))
  {
    m_neverExpires = jsonValue.GetBool("NeverExpires");

    m_neverExpiresHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("SourceRegion");

    m_sourceRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceBackup"))
  {
    m_sourceBackup = jsonValue.GetString("SourceBackup");

    m_sourceBackupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourceCluster"))
  {
    m_sourceCluster = jsonValue.GetString("SourceCluster");

    m_sourceClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DeleteTimestamp"))
  {
    m_deleteTimestamp = jsonValue.GetDouble("DeleteTimestamp");

    m_deleteTimestampHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TagList"))
  {
    Aws::Utils::Array<JsonView> tagListJsonList = jsonValue.GetArray("TagList");
    for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
    {
      m_tagList.push_back(tagListJsonList[tagListIndex].AsObject());
    }
    m_tagListHasBeenSet = true;
  }

  return *this;
}

JsonValue Backup::Jsonize() const
{
  JsonValue payload;

  if(m_backupIdHasBeenSet)
  {
   payload.WithString("BackupId", m_backupId);

  }

  if(m_backupStateHasBeenSet)
  {
   payload.WithString("BackupState", BackupStateMapper::GetNameForBackupState(m_backupState));
  }

  if(m_clusterIdHasBeenSet)
  {
   payload.WithString("ClusterId", m_clusterId);

  }

  if(m_createTimestampHasBeenSet)
  {
   payload.WithDouble("CreateTimestamp", m_createTimestamp.SecondsWithMSPrecision());
  }

  if(m_copyTimestampHasBeenSet)
  {
   payload.WithDouble("CopyTimestamp", m_copyTimestamp.SecondsWithMSPrecision());
  }

  if(m_neverExpiresHasBeenSet)
  {
   payload.WithBool("NeverExpires", m_neverExpires);

  }

  if(m_sourceRegionHasBeenSet)
  {
   payload.WithString("SourceRegion", m_sourceRegion);

  }

  if(m_sourceBackupHasBeenSet)
  {
   payload.WithString("SourceBackup", m_sourceBackup);

  }

  if(m_sourceClusterHasBeenSet)
  {
   payload.WithString("SourceCluster", m_sourceCluster);

  }

  if(m_deleteTimestampHasBeenSet)
  {
   payload.WithDouble("DeleteTimestamp", m_deleteTimestamp.SecondsWithMSPrecision());
  }

  if(m_tagListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagListJsonList(m_tagList.size());
   for(unsigned tagListIndex = 0; tagListIndex < tagListJsonList.GetLength(); ++tagListIndex)
   {
     tagListJsonList[tagListIndex].AsObject(m_tagList[tagListIndex].Jsonize());
   }
   payload.WithArray("TagList", std::move(tagListJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
