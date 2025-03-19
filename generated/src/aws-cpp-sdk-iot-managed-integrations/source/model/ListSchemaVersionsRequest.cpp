/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/ListSchemaVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListSchemaVersionsRequest::SerializePayload() const
{
  return {};
}

void ListSchemaVersionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_schemaIdHasBeenSet)
    {
      ss << m_schemaId;
      uri.AddQueryStringParameter("SchemaIdFilter", ss.str());
      ss.str("");
    }

    if(m_namespaceHasBeenSet)
    {
      ss << m_namespace;
      uri.AddQueryStringParameter("NamespaceFilter", ss.str());
      ss.str("");
    }

    if(m_visibilityHasBeenSet)
    {
      ss << SchemaVersionVisibilityMapper::GetNameForSchemaVersionVisibility(m_visibility);
      uri.AddQueryStringParameter("VisibilityFilter", ss.str());
      ss.str("");
    }

    if(m_semanticVersionHasBeenSet)
    {
      ss << m_semanticVersion;
      uri.AddQueryStringParameter("SemanticVersionFilter", ss.str());
      ss.str("");
    }

}



