/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/PutBackupVaultLockConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String PutBackupVaultLockConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_minRetentionDaysHasBeenSet)
  {
   payload.WithInt64("MinRetentionDays", m_minRetentionDays);

  }

  if(m_maxRetentionDaysHasBeenSet)
  {
   payload.WithInt64("MaxRetentionDays", m_maxRetentionDays);

  }

  if(m_changeableForDaysHasBeenSet)
  {
   payload.WithInt64("ChangeableForDays", m_changeableForDays);

  }

  return payload.View().WriteReadable();
}




