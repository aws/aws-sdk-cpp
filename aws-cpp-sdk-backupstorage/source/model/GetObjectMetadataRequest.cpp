/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupstorage/model/GetObjectMetadataRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::BackupStorage::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetObjectMetadataRequest::GetObjectMetadataRequest() : 
    m_storageJobIdHasBeenSet(false),
    m_objectTokenHasBeenSet(false)
{
}

Aws::String GetObjectMetadataRequest::SerializePayload() const
{
  return {};
}




