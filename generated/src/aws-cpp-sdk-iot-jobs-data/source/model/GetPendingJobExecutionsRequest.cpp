/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-jobs-data/model/GetPendingJobExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTJobsDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetPendingJobExecutionsRequest::GetPendingJobExecutionsRequest() : 
    m_thingNameHasBeenSet(false)
{
}

Aws::String GetPendingJobExecutionsRequest::SerializePayload() const
{
  return {};
}




