/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/ListNotificationsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

ListNotificationsRequest::ListNotificationsRequest() : 
    m_afterTimestampHasBeenSet(false),
    m_beforeTimestampHasBeenSet(false),
    m_domainIdentifierHasBeenSet(false),
    m_maxResults(0),
    m_maxResultsHasBeenSet(false),
    m_nextTokenHasBeenSet(false),
    m_subjectsHasBeenSet(false),
    m_taskStatus(TaskStatus::NOT_SET),
    m_taskStatusHasBeenSet(false),
    m_type(NotificationType::NOT_SET),
    m_typeHasBeenSet(false)
{
}

Aws::String ListNotificationsRequest::SerializePayload() const
{
  return {};
}

void ListNotificationsRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_afterTimestampHasBeenSet)
    {
      ss << m_afterTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("afterTimestamp", ss.str());
      ss.str("");
    }

    if(m_beforeTimestampHasBeenSet)
    {
      ss << m_beforeTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("beforeTimestamp", ss.str());
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

    if(m_subjectsHasBeenSet)
    {
      for(const auto& item : m_subjects)
      {
        ss << item;
        uri.AddQueryStringParameter("subjects", ss.str());
        ss.str("");
      }
    }

    if(m_taskStatusHasBeenSet)
    {
      ss << TaskStatusMapper::GetNameForTaskStatus(m_taskStatus);
      uri.AddQueryStringParameter("taskStatus", ss.str());
      ss.str("");
    }

    if(m_typeHasBeenSet)
    {
      ss << NotificationTypeMapper::GetNameForNotificationType(m_type);
      uri.AddQueryStringParameter("type", ss.str());
      ss.str("");
    }

}



