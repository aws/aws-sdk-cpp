/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/iam/model/ListDelegationRequestsRequest.h>

using namespace Aws::IAM::Model;
using namespace Aws::Utils;

Aws::String ListDelegationRequestsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ListDelegationRequests&";
  if (m_ownerIdHasBeenSet) {
    ss << "OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_markerHasBeenSet) {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if (m_maxItemsHasBeenSet) {
    ss << "MaxItems=" << m_maxItems << "&";
  }

  ss << "Version=2010-05-08";
  return ss.str();
}

void ListDelegationRequestsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
