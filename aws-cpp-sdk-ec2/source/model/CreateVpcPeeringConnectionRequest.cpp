/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateVpcPeeringConnectionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateVpcPeeringConnectionRequest::CreateVpcPeeringConnectionRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_peerOwnerIdHasBeenSet(false),
    m_peerVpcIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_peerRegionHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String CreateVpcPeeringConnectionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateVpcPeeringConnection&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_peerOwnerIdHasBeenSet)
  {
    ss << "PeerOwnerId=" << StringUtils::URLEncode(m_peerOwnerId.c_str()) << "&";
  }

  if(m_peerVpcIdHasBeenSet)
  {
    ss << "PeerVpcId=" << StringUtils::URLEncode(m_peerVpcId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
    ss << "VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_peerRegionHasBeenSet)
  {
    ss << "PeerRegion=" << StringUtils::URLEncode(m_peerRegion.c_str()) << "&";
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

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateVpcPeeringConnectionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
