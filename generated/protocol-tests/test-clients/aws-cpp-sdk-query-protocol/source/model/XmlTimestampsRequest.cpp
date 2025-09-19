/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/query-protocol/model/XmlTimestampsRequest.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

Aws::String XmlTimestampsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=XmlTimestamps&";
  ss << "Version=2020-01-08";
  return ss.str();
}

void XmlTimestampsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
