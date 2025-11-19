/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apigatewayv2/model/GetProductRestEndpointPageRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApiGatewayV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetProductRestEndpointPageRequest::SerializePayload() const { return {}; }

void GetProductRestEndpointPageRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_includeRawDisplayContentHasBeenSet) {
    ss << m_includeRawDisplayContent;
    uri.AddQueryStringParameter("includeRawDisplayContent", ss.str());
    ss.str("");
  }

  if (m_resourceOwnerAccountIdHasBeenSet) {
    ss << m_resourceOwnerAccountId;
    uri.AddQueryStringParameter("resourceOwnerAccountId", ss.str());
    ss.str("");
  }
}
