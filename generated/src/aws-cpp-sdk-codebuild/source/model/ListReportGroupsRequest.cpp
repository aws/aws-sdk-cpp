/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ListReportGroupsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListReportGroupsRequest::ListReportGroupsRequest() : 
    m_sortOrder(SortOrderType::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_sortBy(ReportGroupSortByType::NOT_SET),
    m_sortByHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListReportGroupsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderTypeMapper::GetNameForSortOrderType(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", ReportGroupSortByTypeMapper::GetNameForReportGroupSortByType(m_sortBy));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListReportGroupsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.ListReportGroups"));
  return headers;

}




