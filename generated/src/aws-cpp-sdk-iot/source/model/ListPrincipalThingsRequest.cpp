/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListPrincipalThingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListPrincipalThingsRequest::ListPrincipalThingsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_principalHasBeenSet(false)
{
}

Aws::String ListPrincipalThingsRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection ListPrincipalThingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_principalHasBeenSet)
  {
    ss << m_principal;
    headers.emplace("x-amzn-principal",  ss.str());
    ss.str("");
  }

  return headers;

}

void ListPrincipalThingsRequest::AddQueryStringParameters(URI& uri) const
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



