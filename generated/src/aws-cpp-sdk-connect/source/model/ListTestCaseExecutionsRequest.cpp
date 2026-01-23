/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/ListTestCaseExecutionsRequest.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Connect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListTestCaseExecutionsRequest::SerializePayload() const { return {}; }

void ListTestCaseExecutionsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_testCaseIdHasBeenSet) {
    ss << m_testCaseId;
    uri.AddQueryStringParameter("testCaseId", ss.str());
    ss.str("");
  }

  if (m_testCaseNameHasBeenSet) {
    ss << m_testCaseName;
    uri.AddQueryStringParameter("testCaseName", ss.str());
    ss.str("");
  }

  if (m_startTimeHasBeenSet) {
    ss << m_startTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("startTime", ss.str());
    ss.str("");
  }

  if (m_endTimeHasBeenSet) {
    ss << m_endTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("endTime", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << TestCaseExecutionStatusMapper::GetNameForTestCaseExecutionStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }
}
