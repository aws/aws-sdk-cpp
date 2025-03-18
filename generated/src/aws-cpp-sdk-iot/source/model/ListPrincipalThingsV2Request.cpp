/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListPrincipalThingsV2Request.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListPrincipalThingsV2Request::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection ListPrincipalThingsV2Request::GetRequestSpecificHeaders() const
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

void ListPrincipalThingsV2Request::AddQueryStringParameters(URI& uri) const
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

    if(m_thingPrincipalTypeHasBeenSet)
    {
      ss << ThingPrincipalTypeMapper::GetNameForThingPrincipalType(m_thingPrincipalType);
      uri.AddQueryStringParameter("thingPrincipalType", ss.str());
      ss.str("");
    }

}



