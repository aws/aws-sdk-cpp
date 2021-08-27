/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ListJobsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListJobsRequest::ListJobsRequest() : 
    m_status(JobStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_targetSelection(TargetSelection::NOT_SET),
    m_targetSelectionHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_thingGroupNameHasBeenSet(false),
    m_thingGroupIdHasBeenSet(false),
    m_namespaceIdHasBeenSet(false)
{
}

Aws::String ListJobsRequest::SerializePayload() const
{
  return {};
}

void ListJobsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_statusHasBeenSet)
    {
      ss << JobStatusMapper::GetNameForJobStatus(m_status);
      uri.AddQueryStringParameter("status", ss.str());
      ss.str("");
    }

    if(m_targetSelectionHasBeenSet)
    {
      ss << TargetSelectionMapper::GetNameForTargetSelection(m_targetSelection);
      uri.AddQueryStringParameter("targetSelection", ss.str());
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

    if(m_thingGroupNameHasBeenSet)
    {
      ss << m_thingGroupName;
      uri.AddQueryStringParameter("thingGroupName", ss.str());
      ss.str("");
    }

    if(m_thingGroupIdHasBeenSet)
    {
      ss << m_thingGroupId;
      uri.AddQueryStringParameter("thingGroupId", ss.str());
      ss.str("");
    }

    if(m_namespaceIdHasBeenSet)
    {
      ss << m_namespaceId;
      uri.AddQueryStringParameter("namespaceId", ss.str());
      ss.str("");
    }

}



