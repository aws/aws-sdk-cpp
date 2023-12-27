/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListDataSourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDataSourcesRequest::ListDataSourcesRequest() : 
    m_domainIdentifierHasBeenSet(false),
    m_environmentIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_projectIdentifierHasBeenSet(false),
    m_status(DataSourceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_typeHasBeenSet(false)
{
}

Aws::String ListDataSourcesRequest::SerializePayload() const
{
  return {};
}

void ListDataSourcesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_environmentIdentifierHasBeenSet)
    {
      ss << m_environmentIdentifier;
      uri.AddQueryStringParameter("environmentIdentifier", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nameHasBeenSet)
    {
      ss << m_name;
      uri.AddQueryStringParameter("name", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_projectIdentifierHasBeenSet)
    {
      ss << m_projectIdentifier;
      uri.AddQueryStringParameter("projectIdentifier", ss.str());
      ss.str("");
    }

    if(m_statusHasBeenSet)
    {
      ss << DataSourceStatusMapper::GetNameForDataSourceStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << m_type;
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



