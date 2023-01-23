/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/DeleteCoreDeviceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteCoreDeviceRequest::DeleteCoreDeviceRequest() : 
    m_coreDeviceThingNameHasBeenSet(false)
{
}

Aws::String DeleteCoreDeviceRequest::SerializePayload() const
{
  return {};
}




