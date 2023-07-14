/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DeleteFileSystemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFileSystemRequest::DeleteFileSystemRequest() : 
    m_fileSystemIdHasBeenSet(false)
{
}

Aws::String DeleteFileSystemRequest::SerializePayload() const
{
  return {};
}




