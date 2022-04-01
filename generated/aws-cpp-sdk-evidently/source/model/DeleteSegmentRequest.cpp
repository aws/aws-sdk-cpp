/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/DeleteSegmentRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DeleteSegmentRequest::DeleteSegmentRequest() : 
    m_segmentHasBeenSet(false)
{
}

Aws::String DeleteSegmentRequest::SerializePayload() const
{
  return {};
}




