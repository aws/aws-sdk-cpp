/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListActiveViolationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListActiveViolationsRequest::ListActiveViolationsRequest() : 
    m_thingNameHasBeenSet(false),
    m_securityProfileNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListActiveViolationsRequest::SerializePayload() const
{
  return {};
}

void ListActiveViolationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_thingNameHasBeenSet)
    {
      ss << m_thingName;
      uri.AddQueryStringParameter("thingName", ss.str());
      ss.str("");
    }

    if(m_securityProfileNameHasBeenSet)
    {
      ss << m_securityProfileName;
      uri.AddQueryStringParameter("securityProfileName", ss.str());
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



