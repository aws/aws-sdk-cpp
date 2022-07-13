/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/ListExtensionAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListExtensionAssociationsRequest::ListExtensionAssociationsRequest() : 
    m_resourceIdentifierHasBeenSet(false),
    m_extensionIdentifierHasBeenSet(false),
    m_extensionVersionNumber(0),
    m_extensionVersionNumberHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListExtensionAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListExtensionAssociationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceIdentifierHasBeenSet)
    {
      ss << m_resourceIdentifier;
      uri.AddQueryStringParameter("resource_identifier", ss.str());
      ss.str("");
    }

    if(m_extensionIdentifierHasBeenSet)
    {
      ss << m_extensionIdentifier;
      uri.AddQueryStringParameter("extension_identifier", ss.str());
      ss.str("");
    }

    if(m_extensionVersionNumberHasBeenSet)
    {
      ss << m_extensionVersionNumber;
      uri.AddQueryStringParameter("extension_version_number", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("max_results", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("next_token", ss.str());
      ss.str("");
    }

}



