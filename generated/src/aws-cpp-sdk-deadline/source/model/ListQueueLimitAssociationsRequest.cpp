﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/ListQueueLimitAssociationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListQueueLimitAssociationsRequest::ListQueueLimitAssociationsRequest() : 
    m_farmIdHasBeenSet(false),
    m_queueIdHasBeenSet(false),
    m_limitIdHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false)
{
}

Aws::String ListQueueLimitAssociationsRequest::SerializePayload() const
{
  return {};
}

void ListQueueLimitAssociationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_queueIdHasBeenSet)
    {
      ss << m_queueId;
      uri.AddQueryStringParameter("queueId", ss.str());
      ss.str("");
    }

    if(m_limitIdHasBeenSet)
    {
      ss << m_limitId;
      uri.AddQueryStringParameter("limitId", ss.str());
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



