/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eks/model/DescribeClusterVersionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EKS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DescribeClusterVersionsRequest::SerializePayload() const
{
  return {};
}

void DescribeClusterVersionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clusterTypeHasBeenSet)
    {
      ss << m_clusterType;
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

    if(m_defaultOnlyHasBeenSet)
    {
      ss << m_defaultOnly;
      uri.AddQueryStringParameter("defaultOnly", ss.str());
      ss.str("");
    }

    if(m_includeAllHasBeenSet)
    {
      ss << m_includeAll;
      uri.AddQueryStringParameter("includeAll", ss.str());
      ss.str("");
    }

    if(m_clusterVersionsHasBeenSet)
    {
      for(const auto& item : m_clusterVersions)
      {
        ss << item;
        uri.AddQueryStringParameter("clusterVersions", ss.str());
        ss.str("");
      }
    }

    if(m_versionStatusHasBeenSet)
    {
      ss << VersionStatusMapper::GetNameForVersionStatus(m_versionStatus);
      uri.AddQueryStringParameter("versionStatus", ss.str());
      ss.str("");
    }

}



