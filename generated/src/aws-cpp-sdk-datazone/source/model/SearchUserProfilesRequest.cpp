/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/SearchUserProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

SearchUserProfilesRequest::SearchUserProfilesRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_searchTextHasBeenSet(false),
    m_userType(UserSearchType::NOT_SET),
    m_userTypeHasBeenSet(false)
{
}

Aws::String SearchUserProfilesRequest::SerializePayload() const
{
  JsonValue payload;

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

  if(m_userTypeHasBeenSet)
  {
   payload.WithString("userType", UserSearchTypeMapper::GetNameForUserSearchType(m_userType));
  }

  return payload.View().WriteReadable();
}




