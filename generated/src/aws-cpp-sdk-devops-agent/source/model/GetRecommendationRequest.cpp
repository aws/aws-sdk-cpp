/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/devops-agent/model/GetRecommendationRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetRecommendationRequest::SerializePayload() const { return {}; }

void GetRecommendationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_recommendationVersionHasBeenSet) {
    ss << m_recommendationVersion;
    uri.AddQueryStringParameter("recommendationVersion", ss.str());
    ss.str("");
  }
}
