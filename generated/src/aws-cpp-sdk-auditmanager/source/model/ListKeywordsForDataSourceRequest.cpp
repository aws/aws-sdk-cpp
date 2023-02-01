/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/auditmanager/model/ListKeywordsForDataSourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AuditManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListKeywordsForDataSourceRequest::ListKeywordsForDataSourceRequest() : 
    m_source(SourceType::NOT_SET),
    m_sourceHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListKeywordsForDataSourceRequest::SerializePayload() const
{
  return {};
}

void ListKeywordsForDataSourceRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sourceHasBeenSet)
    {
      ss << SourceTypeMapper::GetNameForSourceType(m_source);
      uri.AddQueryStringParameter("source", ss.str());
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



