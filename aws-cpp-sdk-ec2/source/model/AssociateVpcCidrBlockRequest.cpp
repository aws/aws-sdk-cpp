/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateVpcCidrBlockRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssociateVpcCidrBlockRequest::AssociateVpcCidrBlockRequest() : 
    m_amazonProvidedIpv6CidrBlock(false),
    m_amazonProvidedIpv6CidrBlockHasBeenSet(false),
    m_cidrBlockHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ipv6CidrBlockNetworkBorderGroupHasBeenSet(false),
    m_ipv6PoolHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false)
{
}

Aws::String AssociateVpcCidrBlockRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateVpcCidrBlock&";
  if(m_amazonProvidedIpv6CidrBlockHasBeenSet)
  {
    ss << "AmazonProvidedIpv6CidrBlock=" << std::boolalpha << m_amazonProvidedIpv6CidrBlock << "&";
  }

  if(m_cidrBlockHasBeenSet)
  {
    ss << "CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_ipv6CidrBlockNetworkBorderGroupHasBeenSet)
  {
    ss << "Ipv6CidrBlockNetworkBorderGroup=" << StringUtils::URLEncode(m_ipv6CidrBlockNetworkBorderGroup.c_str()) << "&";
  }

  if(m_ipv6PoolHasBeenSet)
  {
    ss << "Ipv6Pool=" << StringUtils::URLEncode(m_ipv6Pool.c_str()) << "&";
  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
    ss << "Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssociateVpcCidrBlockRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
