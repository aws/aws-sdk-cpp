/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/DescribeMultiplexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MediaLive::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeMultiplexRequest::DescribeMultiplexRequest() : 
    m_multiplexIdHasBeenSet(false)
{
}

Aws::String DescribeMultiplexRequest::SerializePayload() const
{
  return {};
}




