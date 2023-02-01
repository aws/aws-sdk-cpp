/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyInstancePlacementRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

ModifyInstancePlacementRequest::ModifyInstancePlacementRequest() : 
    m_affinity(Affinity::NOT_SET),
    m_affinityHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_tenancy(HostTenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_partitionNumber(0),
    m_partitionNumberHasBeenSet(false),
    m_hostResourceGroupArnHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

Aws::String ModifyInstancePlacementRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyInstancePlacement&";
  if(m_affinityHasBeenSet)
  {
    ss << "Affinity=" << AffinityMapper::GetNameForAffinity(m_affinity) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_hostIdHasBeenSet)
  {
    ss << "HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }

  if(m_instanceIdHasBeenSet)
  {
    ss << "InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
    ss << "Tenancy=" << HostTenancyMapper::GetNameForHostTenancy(m_tenancy) << "&";
  }

  if(m_partitionNumberHasBeenSet)
  {
    ss << "PartitionNumber=" << m_partitionNumber << "&";
  }

  if(m_hostResourceGroupArnHasBeenSet)
  {
    ss << "HostResourceGroupArn=" << StringUtils::URLEncode(m_hostResourceGroupArn.c_str()) << "&";
  }

  if(m_groupIdHasBeenSet)
  {
    ss << "GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  ModifyInstancePlacementRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
