/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribeNodeFromTemplateJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeNodeFromTemplateJobRequest::DescribeNodeFromTemplateJobRequest() : 
    m_jobIdHasBeenSet(false)
{
}

Aws::String DescribeNodeFromTemplateJobRequest::SerializePayload() const
{
  return {};
}




