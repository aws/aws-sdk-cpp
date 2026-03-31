/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/devops-agent/model/DisableOperatorAppRequest.h>

#include <utility>

using namespace Aws::DevOpsAgent::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DisableOperatorAppRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection DisableOperatorAppRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_authFlowHasBeenSet && m_authFlow != AuthFlow::NOT_SET) {
    headers.emplace("x-amzn-app-auth-flow", AuthFlowMapper::GetNameForAuthFlow(m_authFlow));
  }

  return headers;
}
