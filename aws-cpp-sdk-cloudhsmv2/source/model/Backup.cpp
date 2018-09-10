﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_sourceRegionHasBeenSet(false),
    m_sourceBackupHasBeenSet(false),
    m_sourceClusterHasBeenSet(false)
{
}

Backup::Backup(JsonView jsonValue) : 
    m_backupIdHasBeenSet(false),
    m_backupState(BackupState::NOT_SET),
    m_backupStateHasBeenSet(false),
    m_clusterIdHasBeenSet(false),
    m_createTimestampHasBeenSet(false),
    m_copyTimestampHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceBackupHasBeenSet(false),
    m_sourceClusterHasBeenSet(false)
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

  return payload;
}

} // namespace Model
} // namespace CloudHSMV2
} // namespace Aws
