/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/PutBackupPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutBackupPolicyRequest::PutBackupPolicyRequest() : 
    m_fileSystemIdHasBeenSet(false),
    m_backupPolicyHasBeenSet(false)
{
}

Aws::String PutBackupPolicyRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_backupPolicyHasBeenSet)
  {
   payload.WithObject("BackupPolicy", m_backupPolicy.Jsonize());

  }

  return payload.View().WriteReadable();
}




