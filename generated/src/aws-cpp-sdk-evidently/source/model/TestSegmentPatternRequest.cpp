/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/evidently/model/TestSegmentPatternRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

TestSegmentPatternRequest::TestSegmentPatternRequest() : 
    m_patternHasBeenSet(false),
    m_payloadHasBeenSet(false)
{
}

Aws::String TestSegmentPatternRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_patternHasBeenSet)
  {
   payload.WithString("pattern", m_pattern);

  }

  if(m_payloadHasBeenSet)
  {
   payload.WithString("payload", m_payload);

  }

  return payload.View().WriteReadable();
}




