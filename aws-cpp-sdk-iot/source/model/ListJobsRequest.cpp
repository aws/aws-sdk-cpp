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
    m_thingGroupIdHasBeenSet(false)
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

}



