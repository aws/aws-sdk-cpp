/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rest-json-protocol/model/HttpRequestWithGreedyLabelInPathRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::RestJsonProtocol::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

HttpRequestWithGreedyLabelInPathRequest::HttpRequestWithGreedyLabelInPathRequest() : 
    m_fooHasBeenSet(false),
    m_bazHasBeenSet(false)
{
}

Aws::String HttpRequestWithGreedyLabelInPathRequest::SerializePayload() const
{
  return {};
}




