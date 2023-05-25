/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateRecoveryPointLifecycleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRecoveryPointLifecycleRequest::UpdateRecoveryPointLifecycleRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_recoveryPointArnHasBeenSet(false),
    m_lifecycleHasBeenSet(false)
{
}

Aws::String UpdateRecoveryPointLifecycleRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  return payload.View().WriteReadable();
}




