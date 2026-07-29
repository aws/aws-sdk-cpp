/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iotsitewise/model/ListPipelineExecutionsRequest.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPipelineExecutionsRequest::SerializePayload() const { return {}; }

void ListPipelineExecutionsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
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

  if (m_stateHasBeenSet) {
    ss << PipelineExecutionStateMapper::GetNameForPipelineExecutionState(m_state);
    uri.AddQueryStringParameter("state", ss.str());
    ss.str("");
  }

  if (m_startTimeAfterHasBeenSet) {
    ss << m_startTimeAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("startTimeAfter", ss.str());
    ss.str("");
  }

  if (m_startTimeBeforeHasBeenSet) {
    ss << m_startTimeBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("startTimeBefore", ss.str());
    ss.str("");
  }

  if (m_endTimeAfterHasBeenSet) {
    ss << m_endTimeAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("endTimeAfter", ss.str());
    ss.str("");
  }

  if (m_endTimeBeforeHasBeenSet) {
    ss << m_endTimeBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
    uri.AddQueryStringParameter("endTimeBefore", ss.str());
    ss.str("");
  }
}
