/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elementalinference/model/DeleteScheduleActionRequest.h>

#include <utility>

using namespace Aws::ElementalInference::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteScheduleActionRequest::SerializePayload() const { return {}; }

void DeleteScheduleActionRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_actionNameHasBeenSet) {
    ss << m_actionName;
    uri.AddQueryStringParameter("actionName", ss.str());
    ss.str("");
  }
}
