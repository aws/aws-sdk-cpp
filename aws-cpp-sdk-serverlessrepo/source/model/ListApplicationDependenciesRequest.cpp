/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/serverlessrepo/model/ListApplicationDependenciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ServerlessApplicationRepository::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListApplicationDependenciesRequest::ListApplicationDependenciesRequest() : 
    m_applicationIdHasBeenSet(false),
    m_maxItems(0),
    m_maxItemsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_semanticVersionHasBeenSet(false)
{
}

Aws::String ListApplicationDependenciesRequest::SerializePayload() const
{
  return {};
}

void ListApplicationDependenciesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxItemsHasBeenSet)
    {
      ss << m_maxItems;
      uri.AddQueryStringParameter("maxItems", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_semanticVersionHasBeenSet)
    {
      ss << m_semanticVersion;
      uri.AddQueryStringParameter("semanticVersion", ss.str());
      ss.str("");
    }

}



