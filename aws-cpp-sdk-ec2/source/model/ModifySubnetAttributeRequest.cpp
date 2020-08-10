/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifySubnetAttributeRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifySubnetAttributeRequest::ModifySubnetAttributeRequest() : 
    m_assignIpv6AddressOnCreationHasBeenSet(false),
    m_mapPublicIpOnLaunchHasBeenSet(false),
    m_subnetIdHasBeenSet(false)
{
}

Aws::String ModifySubnetAttributeRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifySubnetAttribute&";
  if(m_assignIpv6AddressOnCreationHasBeenSet)
  {
    m_assignIpv6AddressOnCreation.OutputToStream(ss, "AssignIpv6AddressOnCreation");
  }

  if(m_mapPublicIpOnLaunchHasBeenSet)
  {
    m_mapPublicIpOnLaunch.OutputToStream(ss, "MapPublicIpOnLaunch");
  }

  if(m_subnetIdHasBeenSet)
  {
    ss << "SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifySubnetAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
