/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DescribeFolderContentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeFolderContentsRequest::DescribeFolderContentsRequest() : 
    m_authenticationTokenHasBeenSet(false),
    m_folderIdHasBeenSet(false),
    m_sort(ResourceSortType::NOT_SET),
    m_sortHasBeenSet(false),
    m_order(OrderType::NOT_SET),
    m_orderHasBeenSet(false),
    m_limit(0),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_type(FolderContentType::NOT_SET),
    m_typeHasBeenSet(false),
    m_includeHasBeenSet(false)
{
}

Aws::String DescribeFolderContentsRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection DescribeFolderContentsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_authenticationTokenHasBeenSet)
  {
    ss << m_authenticationToken;
    headers.emplace("authentication",  ss.str());
    ss.str("");
  }

  return headers;

}

void DescribeFolderContentsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_sortHasBeenSet)
    {
      ss << ResourceSortTypeMapper::GetNameForResourceSortType(m_sort);
      uri.AddQueryStringParameter("sort", ss.str());
      ss.str("");
    }

    if(m_orderHasBeenSet)
    {
      ss << OrderTypeMapper::GetNameForOrderType(m_order);
      uri.AddQueryStringParameter("order", ss.str());
      ss.str("");
    }

    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << FolderContentTypeMapper::GetNameForFolderContentType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

    if(m_includeHasBeenSet)
    {
      ss << m_include;
      uri.AddQueryStringParameter("include", ss.str());
      ss.str("");
    }

}



