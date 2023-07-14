/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/schemas/model/SearchSchemasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Schemas::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

SearchSchemasRequest::SearchSchemasRequest() : 
    m_keywordsHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_registryNameHasBeenSet(false)
{
}

Aws::String SearchSchemasRequest::SerializePayload() const
{
  return {};
}

void SearchSchemasRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keywordsHasBeenSet)
    {
      ss << m_keywords;
      uri.AddQueryStringParameter("keywords", ss.str());
      ss.str("");
    }

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

}



