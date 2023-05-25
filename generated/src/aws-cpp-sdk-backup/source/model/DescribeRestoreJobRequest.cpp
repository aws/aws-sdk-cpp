/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/DescribeRestoreJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeRestoreJobRequest::DescribeRestoreJobRequest() : 
    m_restoreJobIdHasBeenSet(false)
{
}

Aws::String DescribeRestoreJobRequest::SerializePayload() const
{
  return {};
}




