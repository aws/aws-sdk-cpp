/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appsync/model/ListTypesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListTypesRequest::ListTypesRequest() : 
    m_apiIdHasBeenSet(false),
    m_format(TypeDefinitionFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListTypesRequest::SerializePayload() const
{
  return {};
}

void ListTypesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_formatHasBeenSet)
    {
      ss << TypeDefinitionFormatMapper::GetNameForTypeDefinitionFormat(m_format);
      uri.AddQueryStringParameter("format", ss.str());
      ss.str("");
    }

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



