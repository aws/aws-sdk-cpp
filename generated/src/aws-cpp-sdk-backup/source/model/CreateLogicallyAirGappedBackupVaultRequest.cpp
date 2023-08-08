/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateLogicallyAirGappedBackupVaultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLogicallyAirGappedBackupVaultRequest::CreateLogicallyAirGappedBackupVaultRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultTagsHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false),
    m_minRetentionDays(0),
    m_minRetentionDaysHasBeenSet(false),
    m_maxRetentionDays(0),
    m_maxRetentionDaysHasBeenSet(false)
{
}

Aws::String CreateLogicallyAirGappedBackupVaultRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupVaultTagsHasBeenSet)
  {
   JsonValue backupVaultTagsJsonMap;
   for(auto& backupVaultTagsItem : m_backupVaultTags)
   {
     backupVaultTagsJsonMap.WithString(backupVaultTagsItem.first, backupVaultTagsItem.second);
   }
   payload.WithObject("BackupVaultTags", std::move(backupVaultTagsJsonMap));

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  if(m_minRetentionDaysHasBeenSet)
  {
   payload.WithInt64("MinRetentionDays", m_minRetentionDays);

  }

  if(m_maxRetentionDaysHasBeenSet)
  {
   payload.WithInt64("MaxRetentionDays", m_maxRetentionDays);

  }

  return payload.View().WriteReadable();
}




