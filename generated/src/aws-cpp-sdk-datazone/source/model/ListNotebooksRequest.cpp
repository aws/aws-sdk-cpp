/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/datazone/model/ListNotebooksRequest.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListNotebooksRequest::SerializePayload() const { return {}; }

void ListNotebooksRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_owningProjectIdentifierHasBeenSet) {
    ss << m_owningProjectIdentifier;
    uri.AddQueryStringParameter("owningProjectIdentifier", ss.str());
    ss.str("");
  }

  if (m_maxResultsHasBeenSet) {
    ss << m_maxResults;
    uri.AddQueryStringParameter("maxResults", ss.str());
    ss.str("");
  }

  if (m_sortOrderHasBeenSet) {
    ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
    uri.AddQueryStringParameter("sortOrder", ss.str());
    ss.str("");
  }

  if (m_sortByHasBeenSet) {
    ss << SortKeyMapper::GetNameForSortKey(m_sortBy);
    uri.AddQueryStringParameter("sortBy", ss.str());
    ss.str("");
  }

  if (m_statusHasBeenSet) {
    ss << NotebookStatusMapper::GetNameForNotebookStatus(m_status);
    uri.AddQueryStringParameter("status", ss.str());
    ss.str("");
  }

  if (m_nextTokenHasBeenSet) {
    ss << m_nextToken;
    uri.AddQueryStringParameter("nextToken", ss.str());
    ss.str("");
  }
}
