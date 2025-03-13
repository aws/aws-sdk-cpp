/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateSubnetRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateSubnetRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateSubnet&";
  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
    ss << "AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
    ss << "CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
    ss << "Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
    ss << "OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_ipv6NativeHasBeenSet)
  {
    ss << "Ipv6Native=" << std::boolalpha << m_ipv6Native << "&";
  }

  if(m_ipv4IpamPoolIdHasBeenSet)
  {
    ss << "Ipv4IpamPoolId=" << StringUtils::URLEncode(m_ipv4IpamPoolId.c_str()) << "&";
  }

  if(m_ipv4NetmaskLengthHasBeenSet)
  {
    ss << "Ipv4NetmaskLength=" << m_ipv4NetmaskLength << "&";
  }

  if(m_ipv6IpamPoolIdHasBeenSet)
  {
    ss << "Ipv6IpamPoolId=" << StringUtils::URLEncode(m_ipv6IpamPoolId.c_str()) << "&";
  }

  if(m_ipv6NetmaskLengthHasBeenSet)
  {
    ss << "Ipv6NetmaskLength=" << m_ipv6NetmaskLength << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateSubnetRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
