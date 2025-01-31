/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/HttpRequestWithFloatLabelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

HttpRequestWithFloatLabelsRequest::HttpRequestWithFloatLabelsRequest() : 
    m_float(0.0),
    m_floatHasBeenSet(false),
    m_double(0.0),
    m_doubleHasBeenSet(false)
{
}

Aws::String HttpRequestWithFloatLabelsRequest::SerializePayload() const
{
  return {};
}




