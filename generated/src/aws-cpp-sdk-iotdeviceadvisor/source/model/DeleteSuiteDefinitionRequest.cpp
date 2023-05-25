/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/DeleteSuiteDefinitionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSuiteDefinitionRequest::DeleteSuiteDefinitionRequest() : 
    m_suiteDefinitionIdHasBeenSet(false)
{
}

Aws::String DeleteSuiteDefinitionRequest::SerializePayload() const
{
  return {};
}




