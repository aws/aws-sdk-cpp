/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/redshift/model/CreateEventSubscriptionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CreateEventSubscriptionRequest::CreateEventSubscriptionRequest() : 
    m_subscriptionNameHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_sourceTypeHasBeenSet(false),
    m_sourceIdsHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_severityHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateEventSubscriptionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateEventSubscription&";
  if(m_subscriptionNameHasBeenSet)
  {
    ss << "SubscriptionName=" << StringUtils::URLEncode(m_subscriptionName.c_str()) << "&";
  }

  if(m_snsTopicArnHasBeenSet)
  {
    ss << "SnsTopicArn=" << StringUtils::URLEncode(m_snsTopicArn.c_str()) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
    ss << "SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }

  if(m_sourceIdsHasBeenSet)
  {
    unsigned sourceIdsCount = 1;
    for(auto& item : m_sourceIds)
    {
      ss << "SourceIds.member." << sourceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      sourceIdsCount++;
    }
  }

  if(m_eventCategoriesHasBeenSet)
  {
    unsigned eventCategoriesCount = 1;
    for(auto& item : m_eventCategories)
    {
      ss << "EventCategories.member." << eventCategoriesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      eventCategoriesCount++;
    }
  }

  if(m_severityHasBeenSet)
  {
    ss << "Severity=" << StringUtils::URLEncode(m_severity.c_str()) << "&";
  }

  if(m_enabledHasBeenSet)
  {
    ss << "Enabled=" << m_enabled << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

