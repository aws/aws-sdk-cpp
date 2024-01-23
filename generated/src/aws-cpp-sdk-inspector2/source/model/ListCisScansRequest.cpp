/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ListCisScansRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListCisScansRequest::ListCisScansRequest() : 
    m_detailLevel(ListCisScansDetailLevel::NOT_SET),
    m_detailLevelHasBeenSet(false),
    m_filterCriteriaHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortBy(ListCisScansSortBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(CisSortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListCisScansRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_detailLevelHasBeenSet)
  {
   payload.WithString("detailLevel", ListCisScansDetailLevelMapper::GetNameForListCisScansDetailLevel(m_detailLevel));
  }

  if(m_filterCriteriaHasBeenSet)
  {
   payload.WithObject("filterCriteria", m_filterCriteria.Jsonize());

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("sortBy", ListCisScansSortByMapper::GetNameForListCisScansSortBy(m_sortBy));
  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("sortOrder", CisSortOrderMapper::GetNameForCisSortOrder(m_sortOrder));
  }

  return payload.View().WriteReadable();
}




