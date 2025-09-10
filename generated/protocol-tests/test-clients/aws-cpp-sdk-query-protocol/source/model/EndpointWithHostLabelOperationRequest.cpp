/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/query-protocol/model/EndpointWithHostLabelOperationRequest.h>

using namespace Aws::QueryProtocol::Model;
using namespace Aws::Utils;

Aws::String EndpointWithHostLabelOperationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=EndpointWithHostLabelOperation&";
  if (m_labelHasBeenSet) {
    ss << "label=" << StringUtils::URLEncode(m_label.c_str()) << "&";
  }

  ss << "Version=2020-01-08";
  return ss.str();
}

void EndpointWithHostLabelOperationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
