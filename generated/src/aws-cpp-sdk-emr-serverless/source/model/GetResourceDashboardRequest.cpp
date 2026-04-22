/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/emr-serverless/model/GetResourceDashboardRequest.h>

#include <utility>

using namespace Aws::EMRServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetResourceDashboardRequest::SerializePayload() const { return {}; }

void GetResourceDashboardRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_resourceIdHasBeenSet) {
    ss << m_resourceId;
    uri.AddQueryStringParameter("resourceId", ss.str());
    ss.str("");
  }

  if (m_resourceTypeHasBeenSet) {
    ss << ResourceTypeMapper::GetNameForResourceType(m_resourceType);
    uri.AddQueryStringParameter("resourceType", ss.str());
    ss.str("");
  }
}
