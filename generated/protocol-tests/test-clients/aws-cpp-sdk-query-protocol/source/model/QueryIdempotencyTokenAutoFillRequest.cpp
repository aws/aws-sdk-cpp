/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/query-protocol/model/QueryIdempotencyTokenAutoFillRequest.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

Aws::String QueryIdempotencyTokenAutoFillRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=QueryIdempotencyTokenAutoFill&";
  if (m_tokenHasBeenSet) {
    ss << "token=" << StringUtils::URLEncode(m_token.c_str()) << "&";
  }

  ss << "Version=2020-01-08";
  return ss.str();
}

void QueryIdempotencyTokenAutoFillRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
