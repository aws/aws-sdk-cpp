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




