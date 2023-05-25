/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ProvisionPublicIpv4PoolCidrRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ProvisionPublicIpv4PoolCidrRequest::ProvisionPublicIpv4PoolCidrRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_netmaskLength(0),
    m_netmaskLengthHasBeenSet(false)
{
}

Aws::String ProvisionPublicIpv4PoolCidrRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ProvisionPublicIpv4PoolCidr&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
    ss << "IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_poolIdHasBeenSet)
  {
    ss << "PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }

  if(m_netmaskLengthHasBeenSet)
  {
    ss << "NetmaskLength=" << m_netmaskLength << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ProvisionPublicIpv4PoolCidrRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
