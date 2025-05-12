/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AllocateHostsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String AllocateHostsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AllocateHosts&";
  if(m_instanceFamilyHasBeenSet)
  {
    ss << "InstanceFamily=" << StringUtils::URLEncode(m_instanceFamily.c_str()) << "&";
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

  if(m_hostRecoveryHasBeenSet)
  {
    ss << "HostRecovery=" << StringUtils::URLEncode(HostRecoveryMapper::GetNameForHostRecovery(m_hostRecovery)) << "&";
  }

  if(m_outpostArnHasBeenSet)
  {
    ss << "OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_hostMaintenanceHasBeenSet)
  {
    ss << "HostMaintenance=" << StringUtils::URLEncode(HostMaintenanceMapper::GetNameForHostMaintenance(m_hostMaintenance)) << "&";
  }

  if(m_assetIdsHasBeenSet)
  {
    unsigned assetIdsCount = 1;
    for(auto& item : m_assetIds)
    {
      ss << "AssetId." << assetIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      assetIdsCount++;
    }
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
    ss << "AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_autoPlacementHasBeenSet)
  {
    ss << "AutoPlacement=" << StringUtils::URLEncode(AutoPlacementMapper::GetNameForAutoPlacement(m_autoPlacement)) << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
    ss << "InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_quantityHasBeenSet)
  {
    ss << "Quantity=" << m_quantity << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
    ss << "AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  AllocateHostsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
