/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DescribeClusterV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeClusterV2Request::DescribeClusterV2Request() : 
    m_clusterArnHasBeenSet(false)
{
}

Aws::String DescribeClusterV2Request::SerializePayload() const
{
  return {};
}




