/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DescribeStreamRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeStreamRequest::DescribeStreamRequest() : 
    m_streamIdHasBeenSet(false)
{
}

Aws::String DescribeStreamRequest::SerializePayload() const
{
  return {};
}




