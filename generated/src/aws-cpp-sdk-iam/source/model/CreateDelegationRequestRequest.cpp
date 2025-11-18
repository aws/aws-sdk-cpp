/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/CreateDelegationRequestRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String CreateDelegationRequestRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateDelegationRequest&";
  if (m_ownerAccountIdHasBeenSet) {
    ss << "OwnerAccountId=" << StringUtils::URLEncode(m_ownerAccountId.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_permissionsHasBeenSet) {
    m_permissions.OutputToStream(ss, "Permissions");
  }

  if (m_requestMessageHasBeenSet) {
    ss << "RequestMessage=" << StringUtils::URLEncode(m_requestMessage.c_str()) << "&";
  }

  if (m_requestorWorkflowIdHasBeenSet) {
    ss << "RequestorWorkflowId=" << StringUtils::URLEncode(m_requestorWorkflowId.c_str()) << "&";
  }

  if (m_redirectUrlHasBeenSet) {
    ss << "RedirectUrl=" << StringUtils::URLEncode(m_redirectUrl.c_str()) << "&";
  }

  if (m_notificationChannelHasBeenSet) {
    ss << "NotificationChannel=" << StringUtils::URLEncode(m_notificationChannel.c_str()) << "&";
  }

  if (m_sessionDurationHasBeenSet) {
    ss << "SessionDuration=" << m_sessionDuration << "&";
  }

  if (m_onlySendByOwnerHasBeenSet) {
    ss << "OnlySendByOwner=" << std::boolalpha << m_onlySendByOwner << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

void CreateDelegationRequestRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
