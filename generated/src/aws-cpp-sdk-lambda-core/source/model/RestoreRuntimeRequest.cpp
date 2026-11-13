/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-core/model/RestoreRuntimeRequest.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String RestoreRuntimeRequest::SerializePayload() const { return {}; }

void RestoreRuntimeRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_runtimeVersionHasBeenSet) {
    ss << m_runtimeVersion;
    uri.AddQueryStringParameter("RuntimeVersion", ss.str());
    ss.str("");
  }

  if (m_runtimeAliasHasBeenSet) {
    ss << m_runtimeAlias;
    uri.AddQueryStringParameter("RuntimeAlias", ss.str());
    ss.str("");
  }
}
