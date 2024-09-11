/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/GetFindingsStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::GuardDuty::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFindingsStatisticsRequest::GetFindingsStatisticsRequest() : 
    m_detectorIdHasBeenSet(false),
    m_findingCriteriaHasBeenSet(false),
    m_groupBy(GroupByType::NOT_SET),
    m_groupByHasBeenSet(false),
    m_orderBy(OrderBy::NOT_SET),
    m_orderByHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String GetFindingsStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_findingCriteriaHasBeenSet)
  {
   payload.WithObject("findingCriteria", m_findingCriteria.Jsonize());

  }

  if(m_groupByHasBeenSet)
  {
   payload.WithString("groupBy", GroupByTypeMapper::GetNameForGroupByType(m_groupBy));
  }

  if(m_orderByHasBeenSet)
  {
   payload.WithString("orderBy", OrderByMapper::GetNameForOrderBy(m_orderBy));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  return payload.View().WriteReadable();
}




