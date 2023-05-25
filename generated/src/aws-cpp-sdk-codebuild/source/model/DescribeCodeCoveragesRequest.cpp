/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codebuild/model/DescribeCodeCoveragesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeBuild::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

DescribeCodeCoveragesRequest::DescribeCodeCoveragesRequest() : 
    m_reportArnHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sortOrder(SortOrderType::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_sortBy(ReportCodeCoverageSortByType::NOT_SET),
    m_sortByHasBeenSet(false),
    m_minLineCoveragePercentage(0.0),
    m_minLineCoveragePercentageHasBeenSet(false),
    m_maxLineCoveragePercentage(0.0),
    m_maxLineCoveragePercentageHasBeenSet(false)
{
}

Aws::String DescribeCodeCoveragesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_reportArnHasBeenSet)
  {
   payload.WithString("reportArn", m_reportArn);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", SortOrderTypeMapper::GetNameForSortOrderType(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", ReportCodeCoverageSortByTypeMapper::GetNameForReportCodeCoverageSortByType(m_sortBy));
  }

  if(m_minLineCoveragePercentageHasBeenSet)
  {
   payload.WithDouble("minLineCoveragePercentage", m_minLineCoveragePercentage);

  }

  if(m_maxLineCoveragePercentageHasBeenSet)
  {
   payload.WithDouble("maxLineCoveragePercentage", m_maxLineCoveragePercentage);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DescribeCodeCoveragesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeBuild_20161006.DescribeCodeCoverages"));
  return headers;

}




