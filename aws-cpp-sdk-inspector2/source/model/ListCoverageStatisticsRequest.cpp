/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCoverageStatisticsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCoverageStatisticsRequest::ListCoverageStatisticsRequest() : 
    m_filterCriteriaHasBeenSet(false),
    m_groupBy(GroupKey::NOT_SET),
    m_groupByHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListCoverageStatisticsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_filterCriteriaHasBeenSet)
  {
   payload.WithObject("filterCriteria", m_filterCriteria.Jsonize());

  }

  if(m_groupByHasBeenSet)
  {
   payload.WithString("groupBy", GroupKeyMapper::GetNameForGroupKey(m_groupBy));
  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  return payload.View().WriteReadable();
}




