/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/scheduler/model/DeleteScheduleRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Scheduler::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteScheduleRequest::DeleteScheduleRequest() : 
    m_clientToken(Aws::Utils::UUID::RandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_groupNameHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

Aws::String DeleteScheduleRequest::SerializePayload() const
{
  return {};
}

void DeleteScheduleRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_clientTokenHasBeenSet)
    {
      ss << m_clientToken;
      uri.AddQueryStringParameter("clientToken", ss.str());
      ss.str("");
    }

    if(m_groupNameHasBeenSet)
    {
      ss << m_groupName;
      uri.AddQueryStringParameter("groupName", ss.str());
      ss.str("");
    }

}



