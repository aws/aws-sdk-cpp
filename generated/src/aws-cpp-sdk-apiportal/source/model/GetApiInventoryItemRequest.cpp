/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/GetApiInventoryItemRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::APIPortal::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetApiInventoryItemRequest::SerializePayload() const { return {}; }

void GetApiInventoryItemRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_methodHasBeenSet) {
    ss << HttpMethodMapper::GetNameForHttpMethod(m_method);
    uri.AddQueryStringParameter("method", ss.str());
    ss.str("");
  }

  if (m_hostHasBeenSet) {
    ss << m_host;
    uri.AddQueryStringParameter("host", ss.str());
    ss.str("");
  }

  if (m_portHasBeenSet) {
    ss << m_port;
    uri.AddQueryStringParameter("port", ss.str());
    ss.str("");
  }

  if (m_pathHasBeenSet) {
    ss << m_path;
    uri.AddQueryStringParameter("path", ss.str());
    ss.str("");
  }

  if (m_resourceArnHasBeenSet) {
    ss << m_resourceArn;
    uri.AddQueryStringParameter("resourceArn", ss.str());
    ss.str("");
  }
}
