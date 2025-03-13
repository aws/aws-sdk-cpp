/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/ListAccessPoliciesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String ListAccessPoliciesRequest::SerializePayload() const
{
  return {};
}

void ListAccessPoliciesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_identityTypeHasBeenSet)
    {
      ss << IdentityTypeMapper::GetNameForIdentityType(m_identityType);
      uri.AddQueryStringParameter("identityType", ss.str());
      ss.str("");
    }

    if(m_identityIdHasBeenSet)
    {
      ss << m_identityId;
      uri.AddQueryStringParameter("identityId", ss.str());
      ss.str("");
    }

    if(m_resourceTypeHasBeenSet)
    {
      ss << ResourceTypeMapper::GetNameForResourceType(m_resourceType);
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

    if(m_resourceIdHasBeenSet)
    {
      ss << m_resourceId;
      uri.AddQueryStringParameter("resourceId", ss.str());
      ss.str("");
    }

    if(m_iamArnHasBeenSet)
    {
      ss << m_iamArn;
      uri.AddQueryStringParameter("iamArn", ss.str());
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

}



