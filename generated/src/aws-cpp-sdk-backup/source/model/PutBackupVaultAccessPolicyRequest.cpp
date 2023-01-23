/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/PutBackupVaultAccessPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutBackupVaultAccessPolicyRequest::PutBackupVaultAccessPolicyRequest() : 
    m_backupVaultNameHasBeenSet(false),
    m_policyHasBeenSet(false)
{
}

Aws::String PutBackupVaultAccessPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_policyHasBeenSet)
  {
   payload.WithString("Policy", m_policy);

  }

  return payload.View().WriteReadable();
}




