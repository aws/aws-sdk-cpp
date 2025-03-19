/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateCustomerGatewayRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateCustomerGatewayRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCustomerGateway&";
  if(m_bgpAsnHasBeenSet)
  {
    ss << "BgpAsn=" << m_bgpAsn << "&";
  }

  if(m_publicIpHasBeenSet)
  {
    ss << "PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_certificateArnHasBeenSet)
  {
    ss << "CertificateArn=" << StringUtils::URLEncode(m_certificateArn.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(GatewayTypeMapper::GetNameForGatewayType(m_type)) << "&";
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

  if(m_deviceNameHasBeenSet)
  {
    ss << "DeviceName=" << StringUtils::URLEncode(m_deviceName.c_str()) << "&";
  }

  if(m_ipAddressHasBeenSet)
  {
    ss << "IpAddress=" << StringUtils::URLEncode(m_ipAddress.c_str()) << "&";
  }

  if(m_bgpAsnExtendedHasBeenSet)
  {
    ss << "BgpAsnExtended=" << m_bgpAsnExtended << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateCustomerGatewayRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
