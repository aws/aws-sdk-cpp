/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/DeleteDeviceDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDeviceDefinitionRequest::DeleteDeviceDefinitionRequest() : 
    m_deviceDefinitionIdHasBeenSet(false)
{
}

Aws::String DeleteDeviceDefinitionRequest::SerializePayload() const
{
  return {};
}




