/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/ListDatasetContentsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTAnalytics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListDatasetContentsRequest::ListDatasetContentsRequest() : 
    m_datasetNameHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_scheduledOnOrAfterHasBeenSet(false),
    m_scheduledBeforeHasBeenSet(false)
{
}

Aws::String ListDatasetContentsRequest::SerializePayload() const
{
  return {};
}

void ListDatasetContentsRequest::AddQueryStringParameters(URI& uri) const
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

    if(m_scheduledOnOrAfterHasBeenSet)
    {
      ss << m_scheduledOnOrAfter.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("scheduledOnOrAfter", ss.str());
      ss.str("");
    }

    if(m_scheduledBeforeHasBeenSet)
    {
      ss << m_scheduledBefore.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("scheduledBefore", ss.str());
      ss.str("");
    }

}



