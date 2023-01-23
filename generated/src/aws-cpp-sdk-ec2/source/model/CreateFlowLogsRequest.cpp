/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_deliverCrossAccountRoleHasBeenSet(false),
    m_logGroupNameHasBeenSet(false),
    m_resourceIdsHasBeenSet(false),
    m_resourceType(FlowLogsResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_trafficType(TrafficType::NOT_SET),
    m_trafficTypeHasBeenSet(false),
    m_logDestinationType(LogDestinationType::NOT_SET),
    m_logDestinationTypeHasBeenSet(false),
    m_logDestinationHasBeenSet(false),
    m_logFormatHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false),
    m_maxAggregationInterval(0),
    m_maxAggregationIntervalHasBeenSet(false),
    m_destinationOptionsHasBeenSet(false)
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

  if(m_deliverCrossAccountRoleHasBeenSet)
  {
    ss << "DeliverCrossAccountRole=" << StringUtils::URLEncode(m_deliverCrossAccountRole.c_str()) << "&";
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

  if(m_logFormatHasBeenSet)
  {
    ss << "LogFormat=" << StringUtils::URLEncode(m_logFormat.c_str()) << "&";
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

  if(m_maxAggregationIntervalHasBeenSet)
  {
    ss << "MaxAggregationInterval=" << m_maxAggregationInterval << "&";
  }

  if(m_destinationOptionsHasBeenSet)
  {
    m_destinationOptions.OutputToStream(ss, "DestinationOptions");
  }

  ss << "Version=2016-11-15";
  return ss.str();
}


void  CreateFlowLogsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
