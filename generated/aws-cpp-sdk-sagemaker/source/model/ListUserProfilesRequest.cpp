/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sagemaker/model/ListUserProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::SageMaker::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListUserProfilesRequest::ListUserProfilesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false),
    m_sortBy(UserProfileSortKey::NOT_SET),
    m_sortByHasBeenSet(false),
    m_domainIdEqualsHasBeenSet(false),
    m_userProfileNameContainsHasBeenSet(false)
{
}

Aws::String ListUserProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("NextToken", m_nextToken);

  }

  if(m_maxResultsHasBeenSet)
  {
   payload.WithInteger("MaxResults", m_maxResults);

  }

  if(m_sortOrderHasBeenSet)
  {
   payload.WithString("SortOrder", SortOrderMapper::GetNameForSortOrder(m_sortOrder));
  }

  if(m_sortByHasBeenSet)
  {
   payload.WithString("SortBy", UserProfileSortKeyMapper::GetNameForUserProfileSortKey(m_sortBy));
  }

  if(m_domainIdEqualsHasBeenSet)
  {
   payload.WithString("DomainIdEquals", m_domainIdEquals);

  }

  if(m_userProfileNameContainsHasBeenSet)
  {
   payload.WithString("UserProfileNameContains", m_userProfileNameContains);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListUserProfilesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "SageMaker.ListUserProfiles"));
  return headers;

}




