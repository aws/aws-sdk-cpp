/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access/model/DeleteEntitlementRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccountAccess::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteEntitlementRequest::SerializePayload() const { return {}; }

void DeleteEntitlementRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_applicationArnHasBeenSet) {
    ss << m_applicationArn;
    uri.AddQueryStringParameter("applicationArn", ss.str());
    ss.str("");
  }
}
