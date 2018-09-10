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

#include <aws/ec2/model/CreateFlowLogsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreateFlowLogsRequest::CreateFlowLogsRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_clientTokenHasBeenSet(false),
    m_deliverLogsPermissionArnHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_resourceType(FlowLogsResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false),
    m_logDestinationType(LogDestinationType::NOT_SET),
    m_logDestinationTypeHasBeenSet(false),
    m_logDestinationHasBeenSet(false)
{
}

Aws::String CreateFlowLogsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateFlowLogs&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_clientTokenHasBeenSet)
  {
    ss << "ClientToken=" << StringUtils::URLEncode(m_clientToken.c_str()) << "&";
  }

  if(m_deliverLogsPermissionArnHasBeenSet)
  {
    ss << "DeliverLogsPermissionArn=" << StringUtils::URLEncode(m_deliverLogsPermissionArn.c_str()) << "&";
  }

  if(m_logGroupNameHasBeenSet)
  {
    ss << "LogGroupName=" << StringUtils::URLEncode(m_logGroupName.c_str()) << "&";
  }

  if(m_resourceIdsHasBeenSet)
  {
    unsigned resourceIdsCount = 1;
    for(auto& item : m_resourceIds)
    {
      ss << "ResourceId." << resourceIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      resourceIdsCount++;
    }
  }

  if(m_resourceTypeHasBeenSet)
  {
    ss << "ResourceType=" << FlowLogsResourceTypeMapper::GetNameForFlowLogsResourceType(m_resourceType) << "&";
  }

  if(m_trafficTypeHasBeenSet)
  {
    ss << "TrafficType=" << TrafficTypeMapper::GetNameForTrafficType(m_trafficType) << "&";
  }

  if(m_logDestinationTypeHasBeenSet)
  {
    ss << "LogDestinationType=" << LogDestinationTypeMapper::GetNameForLogDestinationType(m_logDestinationType) << "&";
  }

  if(m_logDestinationHasBeenSet)
  {
    ss << "LogDestination=" << StringUtils::URLEncode(m_logDestination.c_str()) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateFlowLogsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
