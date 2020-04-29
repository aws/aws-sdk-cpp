/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

ListAccessPoliciesRequest::ListAccessPoliciesRequest() : 
    m_identityType(IdentityType::NOT_SET),
    m_identityTypeHasBeenSet(false),
    m_identityIdHasBeenSet(false),
    m_resourceType(ResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

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



