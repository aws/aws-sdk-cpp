/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/GetDelegationRequestRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String GetDelegationRequestRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetDelegationRequest&";
  if (m_delegationRequestIdHasBeenSet) {
    ss << "DelegationRequestId=" << StringUtils::URLEncode(m_delegationRequestId.c_str()) << "&";
  }

  if (m_delegationPermissionCheckHasBeenSet) {
    ss << "DelegationPermissionCheck=" << std::boolalpha << m_delegationPermissionCheck << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

void GetDelegationRequestRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
