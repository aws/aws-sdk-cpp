/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListSecurityProfilesForTargetRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSecurityProfilesForTargetRequest::ListSecurityProfilesForTargetRequest() : 
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_recursive(false),
    m_recursiveHasBeenSet(false),
    m_securityProfileTargetArnHasBeenSet(false)
{
}

Aws::String ListSecurityProfilesForTargetRequest::SerializePayload() const
{
  return {};
}

void ListSecurityProfilesForTargetRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
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

    if(m_recursiveHasBeenSet)
    {
      ss << m_recursive;
      uri.AddQueryStringParameter("recursive", ss.str());
      ss.str("");
    }

    if(m_securityProfileTargetArnHasBeenSet)
    {
      ss << m_securityProfileTargetArn;
      uri.AddQueryStringParameter("securityProfileTargetArn", ss.str());
      ss.str("");
    }

}



