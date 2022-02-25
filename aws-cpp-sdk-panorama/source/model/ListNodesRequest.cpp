/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/ListNodesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListNodesRequest::ListNodesRequest() : 
    m_category(NodeCategory::NOT_SET),
    m_categoryHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_ownerAccountHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_packageVersionHasBeenSet(false),
    m_patchVersionHasBeenSet(false)
{
}

Aws::String ListNodesRequest::SerializePayload() const
{
  return {};
}

void ListNodesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_categoryHasBeenSet)
    {
      ss << NodeCategoryMapper::GetNameForNodeCategory(m_category);
      uri.AddQueryStringParameter("category", ss.str());
      ss.str("");
    }

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

    if(m_ownerAccountHasBeenSet)
    {
      ss << m_ownerAccount;
      uri.AddQueryStringParameter("ownerAccount", ss.str());
      ss.str("");
    }

    if(m_packageNameHasBeenSet)
    {
      ss << m_packageName;
      uri.AddQueryStringParameter("packageName", ss.str());
      ss.str("");
    }

    if(m_packageVersionHasBeenSet)
    {
      ss << m_packageVersion;
      uri.AddQueryStringParameter("packageVersion", ss.str());
      ss.str("");
    }

    if(m_patchVersionHasBeenSet)
    {
      ss << m_patchVersion;
      uri.AddQueryStringParameter("patchVersion", ss.str());
      ss.str("");
    }

}



