/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotdeviceadvisor/model/StopSuiteRunRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTDeviceAdvisor::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

StopSuiteRunRequest::StopSuiteRunRequest() : 
    m_suiteDefinitionIdHasBeenSet(false),
    m_suiteRunIdHasBeenSet(false)
{
}

Aws::String StopSuiteRunRequest::SerializePayload() const
{
  return {};
}




