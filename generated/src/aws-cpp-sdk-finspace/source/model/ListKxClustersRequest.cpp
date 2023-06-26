/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/finspace/model/ListKxClustersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::finspace::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListKxClustersRequest::ListKxClustersRequest() : 
    m_environmentIdHasBeenSet(false),
    m_clusterType(KxClusterType::NOT_SET),
    m_clusterTypeHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListKxClustersRequest::SerializePayload() const
{
  return {};
}

void ListKxClustersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clusterTypeHasBeenSet)
    {
      ss << KxClusterTypeMapper::GetNameForKxClusterType(m_clusterType);
      uri.AddQueryStringParameter("clusterType", ss.str());
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

}



