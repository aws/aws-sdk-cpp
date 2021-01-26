/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateBackupVaultRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBackupVaultRequest::CreateBackupVaultRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_backupVaultTagsHasBeenSet(false),
    m_encryptionKeyArnHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false)
{
}

Aws::String CreateBackupVaultRequest::SerializePayload() const
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

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("EncryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  return payload.View().WriteReadable();
}




