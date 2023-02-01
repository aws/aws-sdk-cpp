/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DescribeDetectorModelAnalysisRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeDetectorModelAnalysisRequest::DescribeDetectorModelAnalysisRequest() : 
    m_analysisIdHasBeenSet(false)
{
}

Aws::String DescribeDetectorModelAnalysisRequest::SerializePayload() const
{
  return {};
}




