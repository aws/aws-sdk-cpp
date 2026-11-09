/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/GetCollectorDataAccessAuthorizationRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Continuum::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetCollectorDataAccessAuthorizationRequest::SerializePayload() const { return {}; }

void GetCollectorDataAccessAuthorizationRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_accountIdHasBeenSet) {
    ss << m_accountId;
    uri.AddQueryStringParameter("accountId", ss.str());
    ss.str("");
  }

  if (m_environmentArnHasBeenSet) {
    ss << m_environmentArn;
    uri.AddQueryStringParameter("environmentArn", ss.str());
    ss.str("");
  }
}
