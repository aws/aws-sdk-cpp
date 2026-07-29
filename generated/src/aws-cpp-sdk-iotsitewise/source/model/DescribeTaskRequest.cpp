/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/DescribeTaskRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeTaskRequest::SerializePayload() const { return {}; }

void DescribeTaskRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_taskVersionHasBeenSet) {
    ss << m_taskVersion;
    uri.AddQueryStringParameter("version", ss.str());
    ss.str("");
  }
}
