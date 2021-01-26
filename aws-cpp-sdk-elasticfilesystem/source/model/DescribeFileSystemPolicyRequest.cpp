/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DescribeFileSystemPolicyRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeFileSystemPolicyRequest::DescribeFileSystemPolicyRequest() : 
    m_fileSystemIdHasBeenSet(false)
{
}

Aws::String DescribeFileSystemPolicyRequest::SerializePayload() const
{
  return {};
}




