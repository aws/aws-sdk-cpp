/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iot/model/GetV2LoggingOptionsRequest.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetV2LoggingOptionsRequest::SerializePayload() const { return {}; }

void GetV2LoggingOptionsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_verboseHasBeenSet) {
    ss << m_verbose;
    uri.AddQueryStringParameter("verbose", ss.str());
    ss.str("");
  }
}
