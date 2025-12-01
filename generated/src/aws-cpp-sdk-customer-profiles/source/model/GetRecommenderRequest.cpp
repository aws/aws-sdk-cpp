/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/GetRecommenderRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetRecommenderRequest::SerializePayload() const { return {}; }

void GetRecommenderRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_trainingMetricsCountHasBeenSet) {
    ss << m_trainingMetricsCount;
    uri.AddQueryStringParameter("training-metrics-count", ss.str());
    ss.str("");
  }
}
