/*
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




