/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/ExportBackupPlanTemplateRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ExportBackupPlanTemplateRequest::ExportBackupPlanTemplateRequest() : 
    m_backupPlanIdHasBeenSet(false)
{
}

Aws::String ExportBackupPlanTemplateRequest::SerializePayload() const
{
  return {};
}




