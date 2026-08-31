/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/kafkaconnect/model/RestartConnectorRequest.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String RestartConnectorRequest::SerializePayload() const { return {}; }

void RestartConnectorRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_onlyFailedTasksHasBeenSet) {
    ss << m_onlyFailedTasks;
    uri.AddQueryStringParameter("onlyFailedTasks", ss.str());
    ss.str("");
  }
}
