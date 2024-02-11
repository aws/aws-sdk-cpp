/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetSimilarProfilesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

GetSimilarProfilesRequest::GetSimilarProfilesRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_matchType(MatchType::NOT_SET),
    m_matchTypeHasBeenSet(false),
    m_searchKeyHasBeenSet(false),
    m_searchValueHasBeenSet(false)
{
}

Aws::String GetSimilarProfilesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_matchTypeHasBeenSet)
  {
   payload.WithString("MatchType", MatchTypeMapper::GetNameForMatchType(m_matchType));
  }

  if(m_searchKeyHasBeenSet)
  {
   payload.WithString("SearchKey", m_searchKey);

  }

  if(m_searchValueHasBeenSet)
  {
   payload.WithString("SearchValue", m_searchValue);

  }

  return payload.View().WriteReadable();
}

void GetSimilarProfilesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next-token", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("max-results", ss.str());
      ss.str("");
    }

}



