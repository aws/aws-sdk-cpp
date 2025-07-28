/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListExecutionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListExecutionsRequest::SerializePayload() const
{
  return {};
}

void ListExecutionsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_targetResourceTypeHasBeenSet)
    {
      ss << TargetResourceTypeMapper::GetNameForTargetResourceType(m_targetResourceType);
      uri.AddQueryStringParameter("targetResourceType", ss.str());
      ss.str("");
    }

    if(m_targetResourceIdHasBeenSet)
    {
      ss << m_targetResourceId;
      uri.AddQueryStringParameter("targetResourceId", ss.str());
      ss.str("");
    }

    if(m_resolveToResourceTypeHasBeenSet)
    {
      ss << ResolveToResourceTypeMapper::GetNameForResolveToResourceType(m_resolveToResourceType);
      uri.AddQueryStringParameter("resolveToResourceType", ss.str());
      ss.str("");
    }

    if(m_resolveToResourceIdHasBeenSet)
    {
      ss << m_resolveToResourceId;
      uri.AddQueryStringParameter("resolveToResourceId", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("nextToken", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("maxResults", ss.str());
      ss.str("");
    }

    if(m_actionTypeHasBeenSet)
    {
      ss << m_actionType;
      uri.AddQueryStringParameter("actionType", ss.str());
      ss.str("");
    }

}



