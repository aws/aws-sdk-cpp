/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/GetBackupPlanFromJSONRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetBackupPlanFromJSONRequest::GetBackupPlanFromJSONRequest() : 
    m_backupPlanTemplateJsonHasBeenSet(false)
{
}

Aws::String GetBackupPlanFromJSONRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupPlanTemplateJsonHasBeenSet)
  {
   payload.WithString("BackupPlanTemplateJson", m_backupPlanTemplateJson);

  }

  return payload.View().WriteReadable();
}




