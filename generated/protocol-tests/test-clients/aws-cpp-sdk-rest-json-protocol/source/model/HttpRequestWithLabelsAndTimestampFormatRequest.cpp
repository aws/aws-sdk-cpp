/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/HttpRequestWithLabelsAndTimestampFormatRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

HttpRequestWithLabelsAndTimestampFormatRequest::HttpRequestWithLabelsAndTimestampFormatRequest() : 
    m_memberEpochSecondsHasBeenSet(false),
    m_memberHttpDateHasBeenSet(false),
    m_memberDateTimeHasBeenSet(false),
    m_defaultFormatHasBeenSet(false),
    m_targetEpochSecondsHasBeenSet(false),
    m_targetHttpDateHasBeenSet(false),
    m_targetDateTimeHasBeenSet(false)
{
}

Aws::String HttpRequestWithLabelsAndTimestampFormatRequest::SerializePayload() const
{
  return {};
}




