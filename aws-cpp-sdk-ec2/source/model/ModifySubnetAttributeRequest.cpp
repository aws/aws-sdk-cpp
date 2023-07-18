﻿/**
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
    m_subnetIdHasBeenSet(false),
    m_mapCustomerOwnedIpOnLaunchHasBeenSet(false),
    m_customerOwnedIpv4PoolHasBeenSet(false),
    m_enableDns64HasBeenSet(false),
    m_privateDnsHostnameTypeOnLaunch(HostnameType::NOT_SET),
    m_privateDnsHostnameTypeOnLaunchHasBeenSet(false),
    m_enableResourceNameDnsARecordOnLaunchHasBeenSet(false),
    m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet(false),
    m_enableLniAtDeviceIndex(0),
    m_enableLniAtDeviceIndexHasBeenSet(false),
    m_disableLniAtDeviceIndexHasBeenSet(false)
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

  if(m_mapCustomerOwnedIpOnLaunchHasBeenSet)
  {
    m_mapCustomerOwnedIpOnLaunch.OutputToStream(ss, "MapCustomerOwnedIpOnLaunch");
  }

  if(m_customerOwnedIpv4PoolHasBeenSet)
  {
    ss << "CustomerOwnedIpv4Pool=" << StringUtils::URLEncode(m_customerOwnedIpv4Pool.c_str()) << "&";
  }

  if(m_enableDns64HasBeenSet)
  {
    m_enableDns64.OutputToStream(ss, "EnableDns64");
  }

  if(m_privateDnsHostnameTypeOnLaunchHasBeenSet)
  {
    ss << "PrivateDnsHostnameTypeOnLaunch=" << HostnameTypeMapper::GetNameForHostnameType(m_privateDnsHostnameTypeOnLaunch) << "&";
  }

  if(m_enableResourceNameDnsARecordOnLaunchHasBeenSet)
  {
    m_enableResourceNameDnsARecordOnLaunch.OutputToStream(ss, "EnableResourceNameDnsARecordOnLaunch");
  }

  if(m_enableResourceNameDnsAAAARecordOnLaunchHasBeenSet)
  {
    m_enableResourceNameDnsAAAARecordOnLaunch.OutputToStream(ss, "EnableResourceNameDnsAAAARecordOnLaunch");
  }

  if(m_enableLniAtDeviceIndexHasBeenSet)
  {
    ss << "EnableLniAtDeviceIndex=" << m_enableLniAtDeviceIndex << "&";
  }

  if(m_disableLniAtDeviceIndexHasBeenSet)
  {
    m_disableLniAtDeviceIndex.OutputToStream(ss, "DisableLniAtDeviceIndex");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifySubnetAttributeRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
