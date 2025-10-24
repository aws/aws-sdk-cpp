﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/GetRouteServerPropagationsRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetRouteServerPropagationsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetRouteServerPropagations&";
  if (m_routeServerIdHasBeenSet) {
    ss << "RouteServerId=" << StringUtils::URLEncode(m_routeServerId.c_str()) << "&";
  }

  if (m_routeTableIdHasBeenSet) {
    ss << "RouteTableId=" << StringUtils::URLEncode(m_routeTableId.c_str()) << "&";
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void GetRouteServerPropagationsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
