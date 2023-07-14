/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/StartCopyJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartCopyJobRequest::StartCopyJobRequest() : 
    m_recoveryPointArnHasBeenSet(false),
    m_sourceBackupVaultNameHasBeenSet(false),
    m_destinationBackupVaultArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_idempotencyTokenHasBeenSet(false),
    m_lifecycleHasBeenSet(false)
{
}

Aws::String StartCopyJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_recoveryPointArnHasBeenSet)
  {
   payload.WithString("RecoveryPointArn", m_recoveryPointArn);

  }

  if(m_sourceBackupVaultNameHasBeenSet)
  {
   payload.WithString("SourceBackupVaultName", m_sourceBackupVaultName);

  }

  if(m_destinationBackupVaultArnHasBeenSet)
  {
   payload.WithString("DestinationBackupVaultArn", m_destinationBackupVaultArn);

  }

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_idempotencyTokenHasBeenSet)
  {
   payload.WithString("IdempotencyToken", m_idempotencyToken);

  }

  if(m_lifecycleHasBeenSet)
  {
   payload.WithObject("Lifecycle", m_lifecycle.Jsonize());

  }

  return payload.View().WriteReadable();
}




