/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda/model/ListDurableExecutionsByFunctionRequest.h>

#include <utility>

using namespace Aws::Lambda::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListDurableExecutionsByFunctionRequest::SerializePayload() const { return {}; }

void ListDurableExecutionsByFunctionRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_qualifierHasBeenSet) {
    ss << m_qualifier;
    uri.AddQueryStringParameter("Qualifier", ss.str());
    ss.str("");
  }

  if (m_durableExecutionNameHasBeenSet) {
    ss << m_durableExecutionName;
    uri.AddQueryStringParameter("DurableExecutionName", ss.str());
    ss.str("");
  }

  if (m_statusesHasBeenSet) {
    for (const auto& item : m_statuses) {
      ss << ExecutionStatusMapper::GetNameForExecutionStatus(item);
      uri.AddQueryStringParameter("Statuses", ss.str());
      ss.str("");
    }
  }

  if (m_startedAfterHasBeenSet) {
    ss << m_startedAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("StartedAfter", ss.str());
    ss.str("");
  }

  if (m_startedBeforeHasBeenSet) {
    ss << m_startedBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("StartedBefore", ss.str());
    ss.str("");
  }

  if (m_reverseOrderHasBeenSet) {
    ss << m_reverseOrder;
    uri.AddQueryStringParameter("ReverseOrder", ss.str());
    ss.str("");
  }

  if (m_markerHasBeenSet) {
    ss << m_marker;
    uri.AddQueryStringParameter("Marker", ss.str());
    ss.str("");
  }

  if (m_maxItemsHasBeenSet) {
    ss << m_maxItems;
    uri.AddQueryStringParameter("MaxItems", ss.str());
    ss.str("");
  }
}
