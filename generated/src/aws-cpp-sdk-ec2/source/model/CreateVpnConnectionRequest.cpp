﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVpnConnectionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreateVpnConnectionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpnConnection&";
  if(m_customerGatewayIdHasBeenSet)
  {
    ss << "CustomerGatewayId=" << StringUtils::URLEncode(m_customerGatewayId.c_str()) << "&";
  }

  if(m_typeHasBeenSet)
  {
    ss << "Type=" << StringUtils::URLEncode(m_type.c_str()) << "&";
  }

  if(m_vpnGatewayIdHasBeenSet)
  {
    ss << "VpnGatewayId=" << StringUtils::URLEncode(m_vpnGatewayId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
    ss << "TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
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

  if(m_preSharedKeyStorageHasBeenSet)
  {
    ss << "PreSharedKeyStorage=" << StringUtils::URLEncode(m_preSharedKeyStorage.c_str()) << "&";
  }

  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_optionsHasBeenSet)
  {
    m_options.OutputToStream(ss, "Options");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVpnConnectionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
