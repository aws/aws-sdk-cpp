/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyHostsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String ModifyHostsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyHosts&";
  if(m_hostRecoveryHasBeenSet)
  {
    ss << "HostRecovery=" << StringUtils::URLEncode(HostRecoveryMapper::GetNameForHostRecovery(m_hostRecovery)) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_instanceFamilyHasBeenSet)
  {
    ss << "InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }

  if(m_hostMaintenanceHasBeenSet)
  {
    ss << "HostMaintenance=" << StringUtils::URLEncode(HostMaintenanceMapper::GetNameForHostMaintenance(m_hostMaintenance)) << "&";
  }

  if(m_hostIdsHasBeenSet)
  {
    unsigned hostIdsCount = 1;
    for(auto& item : m_hostIds)
    {
      ss << "HostId." << hostIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      hostIdsCount++;
    }
  }

  if(m_autoPlacementHasBeenSet)
  {
    ss << "AutoPlacement=" << StringUtils::URLEncode(AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyHostsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
