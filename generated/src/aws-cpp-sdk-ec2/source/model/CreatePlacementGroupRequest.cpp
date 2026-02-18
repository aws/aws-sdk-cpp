/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/CreatePlacementGroupRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String CreatePlacementGroupRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreatePlacementGroup&";
  if (m_partitionCountHasBeenSet) {
    ss << "PartitionCount=" << m_partitionCount << "&";
  }

  if (m_tagSpecificationsHasBeenSet) {
    unsigned tagSpecificationsCount = 1;
    for (auto& item : m_tagSpecifications) {
      item.OutputToStream(ss, "TagSpecification.", tagSpecificationsCount, "");
      tagSpecificationsCount++;
    }
  }

  if (m_spreadLevelHasBeenSet) {
    ss << "SpreadLevel=" << StringUtils::URLEncode(SpreadLevelMapper::GetNameForSpreadLevel(m_spreadLevel)) << "&";
  }

  if (m_linkedGroupIdHasBeenSet) {
    ss << "LinkedGroupId=" << StringUtils::URLEncode(m_linkedGroupId.c_str()) << "&";
  }

  if (m_operatorHasBeenSet) {
    m_operator.OutputToStream(ss, "Operator");
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  if (m_groupNameHasBeenSet) {
    ss << "GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if (m_strategyHasBeenSet) {
    ss << "Strategy=" << StringUtils::URLEncode(PlacementStrategyMapper::GetNameForPlacementStrategy(m_strategy)) << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void CreatePlacementGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
