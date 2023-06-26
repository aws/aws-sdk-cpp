/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-data/model/GetRetainedMessageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetRetainedMessageRequest::GetRetainedMessageRequest() : 
    m_topicHasBeenSet(false)
{
}

Aws::String GetRetainedMessageRequest::SerializePayload() const
{
  return {};
}




