/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SearchGroupProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchGroupProfilesRequest::SearchGroupProfilesRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_groupType(GroupSearchType::NOT_SET),
    m_groupTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_searchTextHasBeenSet(false)
{
}

Aws::String SearchGroupProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_groupTypeHasBeenSet)
  {
   payload.WithString("groupType", GroupSearchTypeMapper::GetNameForGroupSearchType(m_groupType));
  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("maxResults", m_maxResults);

  }

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_searchTextHasBeenSet)
  {
   payload.WithString("searchText", m_searchText);

  }

  return payload.View().WriteReadable();
}




