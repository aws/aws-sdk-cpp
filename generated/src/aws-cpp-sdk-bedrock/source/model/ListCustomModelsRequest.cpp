/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/ListCustomModelsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListCustomModelsRequest::ListCustomModelsRequest() : 
    m_creationTimeBeforeHasBeenSet(false),
    m_creationTimeAfterHasBeenSet(false),
    m_nameContainsHasBeenSet(false),
    m_baseModelArnEqualsHasBeenSet(false),
    m_foundationModelArnEqualsHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_sortBy(SortModelsBy::NOT_SET),
    m_sortByHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListCustomModelsRequest::SerializePayload() const
{
  return {};
}

void ListCustomModelsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_creationTimeBeforeHasBeenSet)
    {
      ss << m_creationTimeBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("creationTimeBefore", ss.str());
      ss.str("");
    }

    if(m_creationTimeAfterHasBeenSet)
    {
      ss << m_creationTimeAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("creationTimeAfter", ss.str());
      ss.str("");
    }

    if(m_nameContainsHasBeenSet)
    {
      ss << m_nameContains;
      uri.AddQueryStringParameter("nameContains", ss.str());
      ss.str("");
    }

    if(m_baseModelArnEqualsHasBeenSet)
    {
      ss << m_baseModelArnEquals;
      uri.AddQueryStringParameter("baseModelArnEquals", ss.str());
      ss.str("");
    }

    if(m_foundationModelArnEqualsHasBeenSet)
    {
      ss << m_foundationModelArnEquals;
      uri.AddQueryStringParameter("foundationModelArnEquals", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_sortByHasBeenSet)
    {
      ss << SortModelsByMapper::GetNameForSortModelsBy(m_sortBy);
      uri.AddQueryStringParameter("sortBy", ss.str());
      ss.str("");
    }

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("sortOrder", ss.str());
      ss.str("");
    }

}



