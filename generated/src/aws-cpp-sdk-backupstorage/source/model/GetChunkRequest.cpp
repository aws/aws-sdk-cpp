/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/GetChunkRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetChunkRequest::GetChunkRequest() : 
    m_storageJobIdHasBeenSet(false),
    m_chunkTokenHasBeenSet(false)
{
}

Aws::String GetChunkRequest::SerializePayload() const
{
  return {};
}




