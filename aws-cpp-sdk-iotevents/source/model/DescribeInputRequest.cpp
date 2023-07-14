/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DescribeInputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeInputRequest::DescribeInputRequest() : 
    m_inputNameHasBeenSet(false)
{
}

Aws::String DescribeInputRequest::SerializePayload() const
{
  return {};
}




