/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeProtectedResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeProtectedResourceRequest::DescribeProtectedResourceRequest() : 
    m_resourceArnHasBeenSet(false)
{
}

Aws::String DescribeProtectedResourceRequest::SerializePayload() const
{
  return {};
}




