/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/devops-agent/model/CreateChatRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String CreateChatRequest::SerializePayload() const { return {}; }

void CreateChatRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_userTypeHasBeenSet) {
    ss << UserTypeMapper::GetNameForUserType(m_userType);
    uri.AddQueryStringParameter("userType", ss.str());
    ss.str("");
  }
}
