/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/GetVpnConnectionDeviceSampleConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetVpnConnectionDeviceSampleConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetVpnConnectionDeviceSampleConfiguration&";
  if(m_vpnConnectionIdHasBeenSet)
  {
    ss << "VpnConnectionId=" << StringUtils::URLEncode(m_vpnConnectionId.c_str()) << "&";
  }

  if(m_vpnConnectionDeviceTypeIdHasBeenSet)
  {
    ss << "VpnConnectionDeviceTypeId=" << StringUtils::URLEncode(m_vpnConnectionDeviceTypeId.c_str()) << "&";
  }

  if(m_internetKeyExchangeVersionHasBeenSet)
  {
    ss << "InternetKeyExchangeVersion=" << StringUtils::URLEncode(m_internetKeyExchangeVersion.c_str()) << "&";
  }

  if(m_sampleTypeHasBeenSet)
  {
    ss << "SampleType=" << StringUtils::URLEncode(m_sampleType.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  GetVpnConnectionDeviceSampleConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
