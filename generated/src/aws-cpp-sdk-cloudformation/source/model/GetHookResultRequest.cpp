/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudformation/model/GetHookResultRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudFormation::Model;
using namespace Aws::Utils;

Aws::String GetHookResultRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetHookResult&";
  if (m_hookResultIdHasBeenSet) {
    ss << "HookResultId=" << StringUtils::URLEncode(m_hookResultId.c_str()) << "&";
  }

  ss << "Version=2010-05-15";
  return ss.str();
}

void GetHookResultRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
