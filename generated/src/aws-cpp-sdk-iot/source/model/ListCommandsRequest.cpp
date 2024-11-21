﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListCommandsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListCommandsRequest::ListCommandsRequest() : 
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_namespace(CommandNamespace::NOT_SET),
    m_namespaceHasBeenSet(false),
    m_commandParameterNameHasBeenSet(false),
    m_sortOrder(SortOrder::NOT_SET),
    m_sortOrderHasBeenSet(false)
{
}

Aws::String ListCommandsRequest::SerializePayload() const
{
  return {};
}

void ListCommandsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_namespaceHasBeenSet)
    {
      ss << CommandNamespaceMapper::GetNameForCommandNamespace(m_namespace);
      uri.AddQueryStringParameter("namespace", ss.str());
      ss.str("");
    }

    if(m_commandParameterNameHasBeenSet)
    {
      ss << m_commandParameterName;
      uri.AddQueryStringParameter("commandParameterName", ss.str());
      ss.str("");
    }

    if(m_sortOrderHasBeenSet)
    {
      ss << SortOrderMapper::GetNameForSortOrder(m_sortOrder);
      uri.AddQueryStringParameter("sortOrder", ss.str());
      ss.str("");
    }

}



