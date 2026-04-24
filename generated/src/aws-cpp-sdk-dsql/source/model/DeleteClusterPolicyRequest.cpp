/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/dsql/model/DeleteClusterPolicyRequest.h>

#include <utility>

using namespace Aws::DSQL::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteClusterPolicyRequest::SerializePayload() const { return {}; }

void DeleteClusterPolicyRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_expectedPolicyVersionHasBeenSet) {
    ss << m_expectedPolicyVersion;
    uri.AddQueryStringParameter("expected-policy-version", ss.str());
    ss.str("");
  }

  if (m_clientTokenHasBeenSet) {
    ss << m_clientToken;
    uri.AddQueryStringParameter("client-token", ss.str());
    ss.str("");
  }
}
