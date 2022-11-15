/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrassv2/model/ListDeploymentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::GreengrassV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDeploymentsRequest::ListDeploymentsRequest() : 
    m_targetArnHasBeenSet(false),
    m_historyFilter(DeploymentHistoryFilter::NOT_SET),
    m_historyFilterHasBeenSet(false),
    m_parentTargetArnHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false)
{
}

Aws::String ListDeploymentsRequest::SerializePayload() const
{
  return {};
}

void ListDeploymentsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_targetArnHasBeenSet)
    {
      ss << m_targetArn;
      uri.AddQueryStringParameter("targetArn", ss.str());
      ss.str("");
    }

    if(m_historyFilterHasBeenSet)
    {
      ss << DeploymentHistoryFilterMapper::GetNameForDeploymentHistoryFilter(m_historyFilter);
      uri.AddQueryStringParameter("historyFilter", ss.str());
      ss.str("");
    }

    if(m_parentTargetArnHasBeenSet)
    {
      ss << m_parentTargetArn;
      uri.AddQueryStringParameter("parentTargetArn", ss.str());
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



