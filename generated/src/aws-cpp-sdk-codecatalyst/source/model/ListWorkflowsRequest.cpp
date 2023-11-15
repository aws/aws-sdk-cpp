/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecatalyst/model/ListWorkflowsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CodeCatalyst::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListWorkflowsRequest::ListWorkflowsRequest() : 
    m_spaceNameHasBeenSet(false),
    m_projectNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_sortByHasBeenSet(false)
{
}

Aws::String ListWorkflowsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_sortByHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> sortByJsonList(m_sortBy.size());
   for(unsigned sortByIndex = 0; sortByIndex < sortByJsonList.GetLength(); ++sortByIndex)
   {
     sortByJsonList[sortByIndex].AsObject(m_sortBy[sortByIndex].Jsonize());
   }
   payload.WithArray("sortBy", std::move(sortByJsonList));

  }

  return payload.View().WriteReadable();
}

void ListWorkflowsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

}



