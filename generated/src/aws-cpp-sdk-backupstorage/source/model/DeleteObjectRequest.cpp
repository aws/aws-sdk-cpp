/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/DeleteObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteObjectRequest::DeleteObjectRequest() : 
    m_backupJobIdHasBeenSet(false),
    m_objectNameHasBeenSet(false)
{
}

Aws::String DeleteObjectRequest::SerializePayload() const
{
  return {};
}




