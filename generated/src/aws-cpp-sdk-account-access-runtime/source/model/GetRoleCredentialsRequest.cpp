/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account-access-runtime/model/GetRoleCredentialsRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AccountAccessRuntime::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetRoleCredentialsRequest::SerializePayload() const { return {}; }

void GetRoleCredentialsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_tenantIdHasBeenSet) {
    ss << m_tenantId;
    uri.AddQueryStringParameter("tenantId", ss.str());
    ss.str("");
  }

  if (m_roleArnHasBeenSet) {
    ss << m_roleArn;
    uri.AddQueryStringParameter("roleArn", ss.str());
    ss.str("");
  }

  if (m_accessTypeHasBeenSet) {
    ss << AccessTypeMapper::GetNameForAccessType(m_accessType);
    uri.AddQueryStringParameter("accessType", ss.str());
    ss.str("");
  }

  if (m_sessionNameHasBeenSet) {
    ss << m_sessionName;
    uri.AddQueryStringParameter("sessionName", ss.str());
    ss.str("");
  }

  if (m_sessionDurationHasBeenSet) {
    ss << m_sessionDuration;
    uri.AddQueryStringParameter("sessionDuration", ss.str());
    ss.str("");
  }
}
