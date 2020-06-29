/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateCustomAvailabilityZoneRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateCustomAvailabilityZoneRequest::CreateCustomAvailabilityZoneRequest() : 
    m_customAvailabilityZoneNameHasBeenSet(false),
    m_existingVpnIdHasBeenSet(false),
    m_newVpnTunnelNameHasBeenSet(false),
    m_vpnTunnelOriginatorIPHasBeenSet(false)
{
}

Aws::String CreateCustomAvailabilityZoneRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateCustomAvailabilityZone&";
  if(m_customAvailabilityZoneNameHasBeenSet)
  {
    ss << "CustomAvailabilityZoneName=" << StringUtils::URLEncode(m_customAvailabilityZoneName.c_str()) << "&";
  }

  if(m_existingVpnIdHasBeenSet)
  {
    ss << "ExistingVpnId=" << StringUtils::URLEncode(m_existingVpnId.c_str()) << "&";
  }

  if(m_newVpnTunnelNameHasBeenSet)
  {
    ss << "NewVpnTunnelName=" << StringUtils::URLEncode(m_newVpnTunnelName.c_str()) << "&";
  }

  if(m_vpnTunnelOriginatorIPHasBeenSet)
  {
    ss << "VpnTunnelOriginatorIP=" << StringUtils::URLEncode(m_vpnTunnelOriginatorIP.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateCustomAvailabilityZoneRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
