/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DescribeClusterOperationV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeClusterOperationV2Request::DescribeClusterOperationV2Request() : 
    m_clusterOperationArnHasBeenSet(false)
{
}

Aws::String DescribeClusterOperationV2Request::SerializePayload() const
{
  return {};
}




