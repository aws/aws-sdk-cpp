/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/query-protocol/model/QueryTimestampsRequest.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

Aws::String QueryTimestampsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=QueryTimestamps&";
  if (m_normalFormatHasBeenSet) {
    ss << "normalFormat=" << StringUtils::URLEncode(m_normalFormat.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_epochMemberHasBeenSet) {
    ss << "epochMember=" << StringUtils::to_string(m_epochMember.Seconds()) << "&";
  }

  if (m_epochTargetHasBeenSet) {
    ss << "epochTarget=" << StringUtils::to_string(m_epochTarget.Seconds()) << "&";
  }

  ss << "Version=2020-01-08";
  return ss.str();
}

void QueryTimestampsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
