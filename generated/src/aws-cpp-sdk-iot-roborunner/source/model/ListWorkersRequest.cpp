/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-roborunner/model/ListWorkersRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTRoboRunner::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListWorkersRequest::ListWorkersRequest() : 
    m_siteHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_fleetHasBeenSet(false)
{
}

Aws::String ListWorkersRequest::SerializePayload() const
{
  return {};
}

void ListWorkersRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_siteHasBeenSet)
    {
      ss << m_site;
      uri.AddQueryStringParameter("site", ss.str());
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

    if(m_fleetHasBeenSet)
    {
      ss << m_fleet;
      uri.AddQueryStringParameter("fleet", ss.str());
      ss.str("");
    }

}



