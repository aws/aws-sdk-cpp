﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteIpamPoolRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteIpamPoolRequest::DeleteIpamPoolRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false)
{
}

Aws::String DeleteIpamPoolRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteIpamPool&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
    ss << "IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteIpamPoolRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
