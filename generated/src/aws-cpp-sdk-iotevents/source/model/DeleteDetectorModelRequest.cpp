/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DeleteDetectorModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteDetectorModelRequest::DeleteDetectorModelRequest() : 
    m_detectorModelNameHasBeenSet(false)
{
}

Aws::String DeleteDetectorModelRequest::SerializePayload() const
{
  return {};
}




