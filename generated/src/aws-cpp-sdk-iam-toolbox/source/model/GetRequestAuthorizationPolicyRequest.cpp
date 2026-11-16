/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam-toolbox/model/GetRequestAuthorizationPolicyRequest.h>

#include <utility>

using namespace Aws::IAMToolbox::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetRequestAuthorizationPolicyRequest::SerializePayload() const { return {}; }

void GetRequestAuthorizationPolicyRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_policyUriHasBeenSet) {
    ss << m_policyUri;
    uri.AddQueryStringParameter("policyUri", ss.str());
    ss.str("");
  }
}
