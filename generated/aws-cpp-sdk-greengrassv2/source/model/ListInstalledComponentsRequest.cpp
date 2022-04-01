/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ListInstalledComponentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListInstalledComponentsRequest::ListInstalledComponentsRequest() : 
    m_coreDeviceThingNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_topologyFilter(InstalledComponentTopologyFilter::NOT_SET),
    m_topologyFilterHasBeenSet(false)
{
}

Aws::String ListInstalledComponentsRequest::SerializePayload() const
{
  return {};
}

void ListInstalledComponentsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_topologyFilterHasBeenSet)
    {
      ss << InstalledComponentTopologyFilterMapper::GetNameForInstalledComponentTopologyFilter(m_topologyFilter);
      uri.AddQueryStringParameter("topologyFilter", ss.str());
      ss.str("");
    }

}



