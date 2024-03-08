/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/DescribeReplicatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeReplicatorRequest::DescribeReplicatorRequest() : 
    m_replicatorArnHasBeenSet(false)
{
}

Aws::String DescribeReplicatorRequest::SerializePayload() const
{
  return {};
}




