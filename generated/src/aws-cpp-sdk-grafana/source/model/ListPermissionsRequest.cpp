/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/grafana/model/ListPermissionsRequest.h>

#include <utility>

using namespace Aws::ManagedGrafana::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPermissionsRequest::SerializePayload() const { return {}; }

void ListPermissionsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_userTypeHasBeenSet) {
    ss << UserTypeMapper::GetNameForUserType(m_userType);
    uri.AddQueryStringParameter("userType", ss.str());
    ss.str("");
  }

  if (m_userIdHasBeenSet) {
    ss << m_userId;
    uri.AddQueryStringParameter("userId", ss.str());
    ss.str("");
  }

  if (m_groupIdHasBeenSet) {
    ss << m_groupId;
    uri.AddQueryStringParameter("groupId", ss.str());
    ss.str("");
  }
}
