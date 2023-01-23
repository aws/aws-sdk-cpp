/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SetIdentityNotificationTopicRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SetIdentityNotificationTopicRequest::SetIdentityNotificationTopicRequest() : 
    m_identityHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false),
    m_snsTopicHasBeenSet(false)
{
}

Aws::String SetIdentityNotificationTopicRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetIdentityNotificationTopic&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }

  if(m_notificationTypeHasBeenSet)
  {
    ss << "NotificationType=" << NotificationTypeMapper::GetNameForNotificationType(m_notificationType) << "&";
  }

  if(m_snsTopicHasBeenSet)
  {
    ss << "SnsTopic=" << StringUtils::URLEncode(m_snsTopic.c_str()) << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SetIdentityNotificationTopicRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
