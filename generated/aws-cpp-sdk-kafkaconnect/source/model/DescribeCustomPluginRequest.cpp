/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DescribeCustomPluginRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCustomPluginRequest::DescribeCustomPluginRequest() : 
    m_customPluginArnHasBeenSet(false)
{
}

Aws::String DescribeCustomPluginRequest::SerializePayload() const
{
  return {};
}




