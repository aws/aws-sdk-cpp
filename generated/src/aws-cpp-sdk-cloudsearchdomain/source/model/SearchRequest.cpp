/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

Aws::String SearchRequest::SerializePayload() const
{
  return {};
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



