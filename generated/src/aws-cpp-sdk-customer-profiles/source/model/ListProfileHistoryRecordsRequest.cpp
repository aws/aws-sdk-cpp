/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/customer-profiles/model/ListProfileHistoryRecordsRequest.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListProfileHistoryRecordsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  if (m_objectTypeNameHasBeenSet) {
    payload.WithString("ObjectTypeName", m_objectTypeName);
  }

  if (m_actionTypeHasBeenSet) {
    payload.WithString("ActionType", ActionTypeMapper::GetNameForActionType(m_actionType));
  }

  if (m_performedByHasBeenSet) {
    payload.WithString("PerformedBy", m_performedBy);
  }

  return payload.View().WriteReadable();
}

void ListProfileHistoryRecordsRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("next-token", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("max-results", ss.str());
    ss.str("");
  }
}
