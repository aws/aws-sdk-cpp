/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/ListRegistriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRegistriesRequest::ListRegistriesRequest() : 
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_registryNamePrefixHasBeenSet(false),
    m_scopeHasBeenSet(false)
{
}

Aws::String ListRegistriesRequest::SerializePayload() const
{
  return {};
}

void ListRegistriesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_registryNamePrefixHasBeenSet)
    {
      ss << m_registryNamePrefix;
      uri.AddQueryStringParameter("registryNamePrefix", ss.str());
      ss.str("");
    }

    if(m_scopeHasBeenSet)
    {
      ss << m_scope;
      uri.AddQueryStringParameter("scope", ss.str());
      ss.str("");
    }

}



