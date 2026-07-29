/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/DescribePipelineRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribePipelineRequest::SerializePayload() const { return {}; }

void DescribePipelineRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_pipelineVersionHasBeenSet) {
    ss << m_pipelineVersion;
    uri.AddQueryStringParameter("version", ss.str());
    ss.str("");
  }
}
