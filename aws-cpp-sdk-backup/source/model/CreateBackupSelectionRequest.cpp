/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateBackupSelectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateBackupSelectionRequest::CreateBackupSelectionRequest() : 
    m_backupPlanIdHasBeenSet(false),
    m_backupSelectionHasBeenSet(false),
    m_creatorRequestIdHasBeenSet(false)
{
}

Aws::String CreateBackupSelectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupSelectionHasBeenSet)
  {
   payload.WithObject("BackupSelection", m_backupSelection.Jsonize());

  }

  if(m_creatorRequestIdHasBeenSet)
  {
   payload.WithString("CreatorRequestId", m_creatorRequestId);

  }

  return payload.View().WriteReadable();
}




