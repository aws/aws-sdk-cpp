/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeprovisionIpamPoolCidrRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeprovisionIpamPoolCidrRequest::DeprovisionIpamPoolCidrRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
}

Aws::String DeprovisionIpamPoolCidrRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeprovisionIpamPoolCidr&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
    ss << "IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_cidrHasBeenSet)
  {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeprovisionIpamPoolCidrRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
