/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ListQueueFleetAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListQueueFleetAssociationsRequest::ListQueueFleetAssociationsRequest() : 
    m_farmIdHasBeenSet(false),
    m_fleetIdHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_queueIdHasBeenSet(false)
{
}

Aws::String ListQueueFleetAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListQueueFleetAssociationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_fleetIdHasBeenSet)
    {
      ss << m_fleetId;
      uri.AddQueryStringParameter("fleetId", ss.str());
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

    if(m_queueIdHasBeenSet)
    {
      ss << m_queueId;
      uri.AddQueryStringParameter("queueId", ss.str());
      ss.str("");
    }

}



