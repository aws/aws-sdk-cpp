/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/emr-containers/model/DescribeVirtualClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EMRContainers::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeVirtualClusterRequest::DescribeVirtualClusterRequest() : 
    m_idHasBeenSet(false)
{
}

Aws::String DescribeVirtualClusterRequest::SerializePayload() const
{
  return {};
}




