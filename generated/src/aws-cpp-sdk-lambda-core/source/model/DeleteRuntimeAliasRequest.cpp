/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-core/model/DeleteRuntimeAliasRequest.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteRuntimeAliasRequest::SerializePayload() const { return {}; }

Aws::Http::HeaderValueCollection DeleteRuntimeAliasRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if (m_recoveryWindowInDaysHasBeenSet) {
    ss << m_recoveryWindowInDays;
    headers.emplace("x-amzn-runtime-recovery-window-in-days", ss.str());
    ss.str("");
  }

  return headers;
}
