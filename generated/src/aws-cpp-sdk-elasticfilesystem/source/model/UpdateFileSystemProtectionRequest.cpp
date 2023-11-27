/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/UpdateFileSystemProtectionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateFileSystemProtectionRequest::UpdateFileSystemProtectionRequest() : 
    m_fileSystemIdHasBeenSet(false),
    m_replicationOverwriteProtection(ReplicationOverwriteProtection::NOT_SET),
    m_replicationOverwriteProtectionHasBeenSet(false)
{
}

Aws::String UpdateFileSystemProtectionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_replicationOverwriteProtectionHasBeenSet)
  {
   payload.WithString("ReplicationOverwriteProtection", ReplicationOverwriteProtectionMapper::GetNameForReplicationOverwriteProtection(m_replicationOverwriteProtection));
  }

  return payload.View().WriteReadable();
}




