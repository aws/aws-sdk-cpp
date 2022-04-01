/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteIpamScopeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteIpamScopeRequest::DeleteIpamScopeRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamScopeIdHasBeenSet(false)
{
}

Aws::String DeleteIpamScopeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteIpamScope&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamScopeIdHasBeenSet)
  {
    ss << "IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteIpamScopeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
