/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iot-data/model/GetConnectionRequest.h>

#include <utility>

using namespace Aws::IoTDataPlane::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetConnectionRequest::SerializePayload() const { return {}; }

void GetConnectionRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_includeSocketInformationHasBeenSet) {
    ss << m_includeSocketInformation;
    uri.AddQueryStringParameter("includeSocketInformation", ss.str());
    ss.str("");
  }
}
