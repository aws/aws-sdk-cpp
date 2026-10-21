/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/DescribeAccountSettingsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils;

Aws::String DescribeAccountSettingsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DescribeAccountSettings&";
  if (m_nameHasBeenSet) {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if (m_nextTokenHasBeenSet) {
    ss << "NextToken=" << StringUtils::URLEncode(m_nextToken.c_str()) << "&";
  }

  if (m_maxRecordsHasBeenSet) {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  ss << "Version=2011-01-01";
  return ss.str();
}

void DescribeAccountSettingsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
