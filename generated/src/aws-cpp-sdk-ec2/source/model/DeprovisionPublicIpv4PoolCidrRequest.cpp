/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeprovisionPublicIpv4PoolCidrRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeprovisionPublicIpv4PoolCidrRequest::DeprovisionPublicIpv4PoolCidrRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_poolIdHasBeenSet(false),
    m_cidrHasBeenSet(false)
{
}

Aws::String DeprovisionPublicIpv4PoolCidrRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeprovisionPublicIpv4PoolCidr&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_poolIdHasBeenSet)
  {
    ss << "PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }

  if(m_cidrHasBeenSet)
  {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeprovisionPublicIpv4PoolCidrRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
