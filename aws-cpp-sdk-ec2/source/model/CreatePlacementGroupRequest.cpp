/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreatePlacementGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

CreatePlacementGroupRequest::CreatePlacementGroupRequest() : 
    m_dryRun(false),
    m_dryRunHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_strategy(PlacementStrategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_partitionCount(0),
    m_partitionCountHasBeenSet(false),
    m_tagSpecificationsHasBeenSet(false)
{
}

Aws::String CreatePlacementGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreatePlacementGroup&";
  if(m_dryRunHasBeenSet)
  {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if(m_groupNameHasBeenSet)
  {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_strategyHasBeenSet)
  {
    ss << "Strategy=" << PlacementStrategyMapper::GetNameForPlacementStrategy(m_strategy) << "&";
  }

  if(m_partitionCountHasBeenSet)
  {
    ss << "PartitionCount=" << m_partitionCount << "&";
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


void  CreatePlacementGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
