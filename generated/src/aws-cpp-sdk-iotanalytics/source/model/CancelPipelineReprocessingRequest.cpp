/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/CancelPipelineReprocessingRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CancelPipelineReprocessingRequest::CancelPipelineReprocessingRequest() : 
    m_pipelineNameHasBeenSet(false),
    m_reprocessingIdHasBeenSet(false)
{
}

Aws::String CancelPipelineReprocessingRequest::SerializePayload() const
{
  return {};
}




