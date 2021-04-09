/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AssociateSubnetCidrBlockRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AssociateSubnetCidrBlockRequest::AssociateSubnetCidrBlockRequest() : 
    m_subnetIdHasBeenSet(false),
    m_ipv6CidrBlockHasBeenSet(false)
{
}

Aws::String AssociateSubnetCidrBlockRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AssociateSubnetCidrBlock&";
  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_ipv6CidrBlockHasBeenSet)
  {
    ss << "Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AssociateSubnetCidrBlockRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
