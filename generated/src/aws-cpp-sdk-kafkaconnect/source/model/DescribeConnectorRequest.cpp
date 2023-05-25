/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DescribeConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeConnectorRequest::DescribeConnectorRequest() : 
    m_connectorArnHasBeenSet(false)
{
}

Aws::String DescribeConnectorRequest::SerializePayload() const
{
  return {};
}




