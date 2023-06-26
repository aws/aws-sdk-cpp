﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/SearchInsightsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchInsightsRequest::SearchInsightsRequest() : 
    m_startTimeRangeHasBeenSet(false),
    m_filtersHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_type(InsightType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String SearchInsightsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_startTimeRangeHasBeenSet)
  {
   payload.WithObject("StartTimeRange", m_startTimeRange.Jsonize());

  }

  if(m_filtersHasBeenSet)
  {
   payload.WithObject("Filters", m_filters.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", InsightTypeMapper::GetNameForInsightType(m_type));
  }

  return payload.View().WriteReadable();
}




