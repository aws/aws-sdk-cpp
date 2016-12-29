/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#include <aws/cloudsearchdomain/model/SearchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudSearchDomain::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

SearchRequest::SearchRequest() : 
    m_cursorHasBeenSet(false),
    m_exprHasBeenSet(false),
    m_facetHasBeenSet(false),
    m_filterQueryHasBeenSet(false),
    m_highlightHasBeenSet(false),
    m_partial(false),
    m_partialHasBeenSet(false),
    m_queryHasBeenSet(false),
    m_queryOptionsHasBeenSet(false),
    m_queryParser(QueryParser::NOT_SET),
    m_queryParserHasBeenSet(false),
    m_returnHasBeenSet(false),
    m_size(0),
    m_sizeHasBeenSet(false),
    m_sortHasBeenSet(false),
    m_start(0),
    m_startHasBeenSet(false),
    m_statsHasBeenSet(false)
{
}

Aws::String SearchRequest::SerializePayload() const
{
  return "";
}

void SearchRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_cursorHasBeenSet)
    {
      ss << m_cursor;
      uri.AddQueryStringParameter("cursor", ss.str());
      ss.str("");
    }

    if(m_exprHasBeenSet)
    {
      ss << m_expr;
      uri.AddQueryStringParameter("expr", ss.str());
      ss.str("");
    }

    if(m_facetHasBeenSet)
    {
      ss << m_facet;
      uri.AddQueryStringParameter("facet", ss.str());
      ss.str("");
    }

    if(m_filterQueryHasBeenSet)
    {
      ss << m_filterQuery;
      uri.AddQueryStringParameter("fq", ss.str());
      ss.str("");
    }

    if(m_highlightHasBeenSet)
    {
      ss << m_highlight;
      uri.AddQueryStringParameter("highlight", ss.str());
      ss.str("");
    }

    if(m_partialHasBeenSet)
    {
      ss << m_partial;
      uri.AddQueryStringParameter("partial", ss.str());
      ss.str("");
    }

    if(m_queryHasBeenSet)
    {
      ss << m_query;
      uri.AddQueryStringParameter("q", ss.str());
      ss.str("");
    }

    if(m_queryOptionsHasBeenSet)
    {
      ss << m_queryOptions;
      uri.AddQueryStringParameter("q.options", ss.str());
      ss.str("");
    }

    if(m_queryParserHasBeenSet)
    {
      ss << QueryParserMapper::GetNameForQueryParser(m_queryParser);
      uri.AddQueryStringParameter("q.parser", ss.str());
      ss.str("");
    }

    if(m_returnHasBeenSet)
    {
      ss << m_return;
      uri.AddQueryStringParameter("return", ss.str());
      ss.str("");
    }

    if(m_sizeHasBeenSet)
    {
      ss << m_size;
      uri.AddQueryStringParameter("size", ss.str());
      ss.str("");
    }

    if(m_sortHasBeenSet)
    {
      ss << m_sort;
      uri.AddQueryStringParameter("sort", ss.str());
      ss.str("");
    }

    if(m_startHasBeenSet)
    {
      ss << m_start;
      uri.AddQueryStringParameter("start", ss.str());
      ss.str("");
    }

    if(m_statsHasBeenSet)
    {
      ss << m_stats;
      uri.AddQueryStringParameter("stats", ss.str());
      ss.str("");
    }

}


