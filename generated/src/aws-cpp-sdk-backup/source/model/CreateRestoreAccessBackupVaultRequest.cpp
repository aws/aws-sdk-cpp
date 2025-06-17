/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateRestoreAccessBackupVaultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateRestoreAccessBackupVaultRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sourceBackupVaultArnHasBeenSet)
  {
   payload.WithString("SourceBackupVaultArn", m_sourceBackupVaultArn);

  }

  if(m_backupVaultNameHasBeenSet)
  {
   payload.WithString("BackupVaultName", m_backupVaultName);

  }

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

  if(m_requesterCommentHasBeenSet)
  {
   payload.WithString("RequesterComment", m_requesterComment);

  }

  return payload.View().WriteReadable();
}




