/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/email/model/SetIdentityHeadersInNotificationsEnabledRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SES::Model;
using namespace Aws::Utils;

SetIdentityHeadersInNotificationsEnabledRequest::SetIdentityHeadersInNotificationsEnabledRequest() : 
    m_identityHasBeenSet(false),
    m_notificationType(NotificationType::NOT_SET),
    m_notificationTypeHasBeenSet(false),
    m_enabled(false),
    m_enabledHasBeenSet(false)
{
}

Aws::String SetIdentityHeadersInNotificationsEnabledRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=SetIdentityHeadersInNotificationsEnabled&";
  if(m_identityHasBeenSet)
  {
    ss << "Identity=" << StringUtils::URLEncode(m_identity.c_str()) << "&";
  }

  if(m_notificationTypeHasBeenSet)
  {
    ss << "NotificationType=" << NotificationTypeMapper::GetNameForNotificationType(m_notificationType) << "&";
  }

  if(m_enabledHasBeenSet)
  {
    ss << "Enabled=" << std::boolalpha << m_enabled << "&";
  }

  ss << "Version=2010-12-01";
  return ss.str();
}


void  SetIdentityHeadersInNotificationsEnabledRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
