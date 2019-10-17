/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
