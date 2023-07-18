/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/ListProfileObjectsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListProfileObjectsRequest::ListProfileObjectsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_objectTypeNameHasBeenSet(false),
    m_profileIdHasBeenSet(false),
    m_objectFilterHasBeenSet(false)
{
}

Aws::String ListProfileObjectsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_objectTypeNameHasBeenSet)
  {
   payload.WithString("ObjectTypeName", m_objectTypeName);

  }

  if(m_profileIdHasBeenSet)
  {
   payload.WithString("ProfileId", m_profileId);

  }

  if(m_objectFilterHasBeenSet)
  {
   payload.WithObject("ObjectFilter", m_objectFilter.Jsonize());

  }

  return payload.View().WriteReadable();
}

void ListProfileObjectsRequest::AddQueryStringParameters(URI& uri) const
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



