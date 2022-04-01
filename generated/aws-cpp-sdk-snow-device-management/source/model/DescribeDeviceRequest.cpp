/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snow-device-management/model/DescribeDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SnowDeviceManagement::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDeviceRequest::DescribeDeviceRequest() : 
    m_managedDeviceIdHasBeenSet(false)
{
}

Aws::String DescribeDeviceRequest::SerializePayload() const
{
  return {};
}




