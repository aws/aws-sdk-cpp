/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/braket/model/GetDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Braket::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetDeviceRequest::GetDeviceRequest() : 
    m_deviceArnHasBeenSet(false)
{
}

Aws::String GetDeviceRequest::SerializePayload() const
{
  return {};
}




