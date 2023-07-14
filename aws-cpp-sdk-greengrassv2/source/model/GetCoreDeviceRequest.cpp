/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/GetCoreDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetCoreDeviceRequest::GetCoreDeviceRequest() : 
    m_coreDeviceThingNameHasBeenSet(false)
{
}

Aws::String GetCoreDeviceRequest::SerializePayload() const
{
  return {};
}




