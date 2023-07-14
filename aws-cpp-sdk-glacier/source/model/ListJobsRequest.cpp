/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/ListJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListJobsRequest::ListJobsRequest() : 
    m_accountIdHasBeenSet(false),
    m_vaultNameHasBeenSet(false),
    m_limitHasBeenSet(false),
    m_markerHasBeenSet(false),
    m_statuscodeHasBeenSet(false),
    m_completedHasBeenSet(false)
{
}

Aws::String ListJobsRequest::SerializePayload() const
{
  return {};
}

void ListJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_limitHasBeenSet)
    {
      ss << m_limit;
      uri.AddQueryStringParameter("limit", ss.str());
      ss.str("");
    }

    if(m_markerHasBeenSet)
    {
      ss << m_marker;
      uri.AddQueryStringParameter("marker", ss.str());
      ss.str("");
    }

    if(m_statuscodeHasBeenSet)
    {
      ss << m_statuscode;
      uri.AddQueryStringParameter("statuscode", ss.str());
      ss.str("");
    }

    if(m_completedHasBeenSet)
    {
      ss << m_completed;
      uri.AddQueryStringParameter("completed", ss.str());
      ss.str("");
    }

}



