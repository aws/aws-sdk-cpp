/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutvision/model/DescribeModelPackagingJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LookoutforVision::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeModelPackagingJobRequest::DescribeModelPackagingJobRequest() : 
    m_projectNameHasBeenSet(false),
    m_jobNameHasBeenSet(false)
{
}

Aws::String DescribeModelPackagingJobRequest::SerializePayload() const
{
  return {};
}




