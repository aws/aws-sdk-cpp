/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ListSchemasRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRooms::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSchemasRequest::ListSchemasRequest() : 
    m_collaborationIdentifierHasBeenSet(false),
    m_schemaType(SchemaType::NOT_SET),
    m_schemaTypeHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListSchemasRequest::SerializePayload() const
{
  return {};
}

void ListSchemasRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_schemaTypeHasBeenSet)
    {
      ss << SchemaTypeMapper::GetNameForSchemaType(m_schemaType);
      uri.AddQueryStringParameter("schemaType", ss.str());
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



