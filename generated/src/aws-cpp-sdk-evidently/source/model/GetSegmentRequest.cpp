/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/GetSegmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetSegmentRequest::GetSegmentRequest() : 
    m_segmentHasBeenSet(false)
{
}

Aws::String GetSegmentRequest::SerializePayload() const
{
  return {};
}




