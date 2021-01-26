/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot1click-devices/model/ClaimDevicesByClaimCodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoT1ClickDevicesService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ClaimDevicesByClaimCodeRequest::ClaimDevicesByClaimCodeRequest() : 
    m_claimCodeHasBeenSet(false)
{
}

Aws::String ClaimDevicesByClaimCodeRequest::SerializePayload() const
{
  return {};
}




