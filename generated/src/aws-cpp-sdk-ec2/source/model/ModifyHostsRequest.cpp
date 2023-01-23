/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyHostsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyHostsRequest::ModifyHostsRequest() : 
    m_autoPlacement(AutoPlacement::NOT_SET),
    m_autoPlacementHasBeenSet(false),
    m_hostIdsHasBeenSet(false),
    m_hostRecovery(HostRecovery::NOT_SET),
    m_hostRecoveryHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instanceFamilyHasBeenSet(false)
{
}

Aws::String ModifyHostsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyHosts&";
  if(m_autoPlacementHasBeenSet)
  {
    ss << "AutoPlacement=" << AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement) << "&";
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

  if(m_hostRecoveryHasBeenSet)
  {
    ss << "HostRecovery=" << HostRecoveryMapper::GetNameForHostRecovery(m_hostRecovery) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_instanceFamilyHasBeenSet)
  {
    ss << "InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyHostsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
