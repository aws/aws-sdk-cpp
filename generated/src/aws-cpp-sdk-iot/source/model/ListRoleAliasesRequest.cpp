/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListRoleAliasesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListRoleAliasesRequest::ListRoleAliasesRequest() : 
    m_pageSize(0),
    m_pageSizeHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_ascendingOrder(false),
    m_ascendingOrderHasBeenSet(false)
{
}

Aws::String ListRoleAliasesRequest::SerializePayload() const
{
  return {};
}

void ListRoleAliasesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_pageSizeHasBeenSet)
    {
      ss << m_pageSize;
      uri.AddQueryStringParameter("pageSize", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

    if(m_ascendingOrderHasBeenSet)
    {
      ss << m_ascendingOrder;
      uri.AddQueryStringParameter("isAscendingOrder", ss.str());
      ss.str("");
    }

}



