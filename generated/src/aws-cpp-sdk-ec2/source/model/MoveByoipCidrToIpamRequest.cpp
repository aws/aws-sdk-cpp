/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MoveByoipCidrToIpamRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

MoveByoipCidrToIpamRequest::MoveByoipCidrToIpamRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_cidrHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_ipamPoolOwnerHasBeenSet(false)
{
}

Aws::String MoveByoipCidrToIpamRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=MoveByoipCidrToIpam&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_cidrHasBeenSet)
  {
    ss << "Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
    ss << "IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_ipamPoolOwnerHasBeenSet)
  {
    ss << "IpamPoolOwner=" << StringUtils::URLEncode(m_ipamPoolOwner.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  MoveByoipCidrToIpamRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
