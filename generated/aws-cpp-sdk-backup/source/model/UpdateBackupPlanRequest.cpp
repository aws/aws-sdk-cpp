/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateBackupPlanRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBackupPlanRequest::UpdateBackupPlanRequest() : 
    m_backupPlanIdHasBeenSet(false),
    m_backupPlanHasBeenSet(false)
{
}

Aws::String UpdateBackupPlanRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupPlanHasBeenSet)
  {
   payload.WithObject("BackupPlan", m_backupPlan.Jsonize());

  }

  return payload.View().WriteReadable();
}




