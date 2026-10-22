/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/PutAccountSettingRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String PutAccountSettingRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=PutAccountSetting&";
  if (m_nameHasBeenSet) {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if (m_valueHasBeenSet) {
    ss << "Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

void PutAccountSettingRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
