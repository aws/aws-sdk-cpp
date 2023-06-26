﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/DeleteVpcEndpointsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

DeleteVpcEndpointsRequest::DeleteVpcEndpointsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_vpcEndpointIdsHasBeenSet(false)
{
}

Aws::String DeleteVpcEndpointsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteVpcEndpoints&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_vpcEndpointIdsHasBeenSet)
  {
    unsigned vpcEndpointIdsCount = 1;
    for(auto& item : m_vpcEndpointIds)
    {
      ss << "VpcEndpointId." << vpcEndpointIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcEndpointIdsCount++;
    }
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  DeleteVpcEndpointsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
