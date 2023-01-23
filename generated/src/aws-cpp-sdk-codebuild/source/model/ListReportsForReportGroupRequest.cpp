/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/ListReportsForReportGroupRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListReportsForReportGroupRequest::ListReportsForReportGroupRequest() : 
    m_reportGroupArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortOrder(SortOrderType::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_filterHasBeenSet(false)
{
}

Aws::String ListReportsForReportGroupRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportGroupArnHasBeenSet)
  {
   payload.WithString("reportGroupArn", m_reportGroupArn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderTypeMapper::GetNameForSortOrderType(m_sortOrder));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_filterHasBeenSet)
  {
   payload.WithObject("filter", m_filter.Jsonize());

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListReportsForReportGroupRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.ListReportsForReportGroup"));
  return headers;

}




