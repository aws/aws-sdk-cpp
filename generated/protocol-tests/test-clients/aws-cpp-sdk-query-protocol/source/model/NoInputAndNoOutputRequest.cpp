/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/query-protocol/model/NoInputAndNoOutputRequest.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

Aws::String NoInputAndNoOutputRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=NoInputAndNoOutput&";
  ss << "Version=2020-01-08";
  return ss.str();
}

void NoInputAndNoOutputRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
