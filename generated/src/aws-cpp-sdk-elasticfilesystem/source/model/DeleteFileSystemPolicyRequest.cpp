/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DeleteFileSystemPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteFileSystemPolicyRequest::DeleteFileSystemPolicyRequest() : 
    m_fileSystemIdHasBeenSet(false)
{
}

Aws::String DeleteFileSystemPolicyRequest::SerializePayload() const
{
  return {};
}




