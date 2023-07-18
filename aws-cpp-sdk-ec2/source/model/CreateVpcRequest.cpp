/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVpcRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateVpcRequest::CreateVpcRequest() : 
    m_cidrBlockHasBeenSet(false),
    m_amazonProvidedIpv6CidrBlock(false),
    m_amazonProvidedIpv6CidrBlockHasBeenSet(false),
    m_ipv6PoolHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false),
    m_ipv4IpamPoolIdHasBeenSet(false),
    m_ipv4NetmaskLength(0),
    m_ipv4NetmaskLengthHasBeenSet(false),
    m_ipv6IpamPoolIdHasBeenSet(false),
    m_ipv6NetmaskLength(0),
    m_ipv6NetmaskLengthHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_instanceTenancy(Tenancy::NOT_SET),
    m_instanceTenancyHasBeenSet(false),
    m_ipv6CidrBlockNetworkBorderGroupHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String CreateVpcRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpc&";
  if(m_cidrBlockHasBeenSet)
  {
    ss << "CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_amazonProvidedIpv6CidrBlockHasBeenSet)
  {
    ss << "AmazonProvidedIpv6CidrBlock=" << std::boolalpha << m_amazonProvidedIpv6CidrBlock << "&";
  }

  if(m_ipv6PoolHasBeenSet)
  {
    ss << "Ipv6Pool=" << StringUtils::URLEncode(m_ipv6Pool.c_str()) << "&";
  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
    ss << "Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
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

  if(m_instanceTenancyHasBeenSet)
  {
    ss << "InstanceTenancy=" << TenancyMapper::GetNameForTenancy(m_instanceTenancy) << "&";
  }

  if(m_ipv6CidrBlockNetworkBorderGroupHasBeenSet)
  {
    ss << "Ipv6CidrBlockNetworkBorderGroup=" << StringUtils::URLEncode(m_ipv6CidrBlockNetworkBorderGroup.c_str()) << "&";
  }

  if(m_tagSpecificationsHasBeenSet)
  {
    unsigned tagSpecificationsCount = 1;
    for(auto& item : m_tagSpecifications)
    {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVpcRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
