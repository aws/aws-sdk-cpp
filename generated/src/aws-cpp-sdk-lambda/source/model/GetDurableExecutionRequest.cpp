/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/GetDurableExecutionRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetDurableExecutionRequest::SerializePayload() const { return {}; }

void GetDurableExecutionRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_includeExecutionDataHasBeenSet) {
    ss << m_includeExecutionData;
    uri.AddQueryStringParameter("IncludeExecutionData", ss.str());
    ss.str("");
  }
}
