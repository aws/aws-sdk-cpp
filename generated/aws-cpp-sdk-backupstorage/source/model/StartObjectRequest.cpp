/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/StartObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StartObjectRequest::StartObjectRequest() : 
    m_backupJobIdHasBeenSet(false),
    m_objectNameHasBeenSet(false),
    m_throwOnDuplicate(false),
    m_throwOnDuplicateHasBeenSet(false)
{
}

Aws::String StartObjectRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_throwOnDuplicateHasBeenSet)
  {
   payload.WithBool("ThrowOnDuplicate", m_throwOnDuplicate);

  }

  return payload.View().WriteReadable();
}




