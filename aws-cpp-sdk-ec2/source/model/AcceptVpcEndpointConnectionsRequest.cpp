﻿/*
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

#include <aws/ec2/model/AcceptVpcEndpointConnectionsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

AcceptVpcEndpointConnectionsRequest::AcceptVpcEndpointConnectionsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_vpcEndpointIdsHasBeenSet(false)
{
}

Aws::String AcceptVpcEndpointConnectionsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AcceptVpcEndpointConnections&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
    ss << "ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
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


void  AcceptVpcEndpointConnectionsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
