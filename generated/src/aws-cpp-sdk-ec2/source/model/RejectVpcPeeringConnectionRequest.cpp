/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RejectVpcPeeringConnectionRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

RejectVpcPeeringConnectionRequest::RejectVpcPeeringConnectionRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_vpcPeeringConnectionIdHasBeenSet(false)
{
}

Aws::String RejectVpcPeeringConnectionRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RejectVpcPeeringConnection&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_vpcPeeringConnectionIdHasBeenSet)
  {
    ss << "VpcPeeringConnectionId=" << StringUtils::URLEncode(m_vpcPeeringConnectionId.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  RejectVpcPeeringConnectionRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
