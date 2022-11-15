/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/ListSchedulesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListSchedulesRequest::ListSchedulesRequest() : 
    m_groupNameHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_namePrefixHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_state(ScheduleState::NOT_SET),
    m_stateHasBeenSet(false)
{
}

Aws::String ListSchedulesRequest::SerializePayload() const
{
  return {};
}

void ListSchedulesRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_groupNameHasBeenSet)
    {
      ss << m_groupName;
      uri.AddQueryStringParameter("ScheduleGroup", ss.str());
      ss.str("");
    }

    if(m_maxResultsHasBeenSet)
    {
      ss << m_maxResults;
      uri.AddQueryStringParameter("MaxResults", ss.str());
      ss.str("");
    }

    if(m_namePrefixHasBeenSet)
    {
      ss << m_namePrefix;
      uri.AddQueryStringParameter("NamePrefix", ss.str());
      ss.str("");
    }

    if(m_nextTokenHasBeenSet)
    {
      ss << m_nextToken;
      uri.AddQueryStringParameter("NextToken", ss.str());
      ss.str("");
    }

    if(m_stateHasBeenSet)
    {
      ss << ScheduleStateMapper::GetNameForScheduleState(m_state);
      uri.AddQueryStringParameter("State", ss.str());
      ss.str("");
    }

}



