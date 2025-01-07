/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/UpdateRecoveryPointIndexSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRecoveryPointIndexSettingsRequest::UpdateRecoveryPointIndexSettingsRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_recoveryPointArnHasBeenSet(false),
    m_iamRoleArnHasBeenSet(false),
    m_index(Index::NOT_SET),
    m_indexHasBeenSet(false)
{
}

Aws::String UpdateRecoveryPointIndexSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_iamRoleArnHasBeenSet)
  {
   payload.WithString("IamRoleArn", m_iamRoleArn);

  }

  if(m_indexHasBeenSet)
  {
   payload.WithString("Index", IndexMapper::GetNameForIndex(m_index));
  }

  return payload.View().WriteReadable();
}




