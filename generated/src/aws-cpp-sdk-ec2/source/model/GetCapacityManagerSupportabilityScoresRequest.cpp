/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/ec2/model/GetCapacityManagerSupportabilityScoresRequest.h>

using namespace Aws::EC2::Model;
using namespace Aws::Utils;

Aws::String GetCapacityManagerSupportabilityScoresRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetCapacityManagerSupportabilityScores&";
  if (m_marketTypeHasBeenSet) {
    ss << "MarketType=" << StringUtils::URLEncode(SupportabilityMarketTypeMapper::GetNameForSupportabilityMarketType(m_marketType)) << "&";
  }

  if (m_capacityAmountHasBeenSet) {
    ss << "CapacityAmount=" << m_capacityAmount << "&";
  }

  if (m_capacityUnitHasBeenSet) {
    ss << "CapacityUnit=" << StringUtils::URLEncode(CapacityUnitMapper::GetNameForCapacityUnit(m_capacityUnit)) << "&";
  }

  if (m_capacityAvailabilityZoneIdsHasBeenSet) {
    unsigned capacityAvailabilityZoneIdsCount = 1;
    for (auto& item : m_capacityAvailabilityZoneIds) {
      ss << "CapacityAvailabilityZoneId." << capacityAvailabilityZoneIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      capacityAvailabilityZoneIdsCount++;
    }
  }

  if (m_instanceTypesHasBeenSet) {
    unsigned instanceTypesCount = 1;
    for (auto& item : m_instanceTypes) {
      ss << "InstanceType." << instanceTypesCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      instanceTypesCount++;
    }
  }

  if (m_instanceRequirementsWithMetadataHasBeenSet) {
    m_instanceRequirementsWithMetadata.OutputToStream(ss, "InstanceRequirementsWithMetadata");
  }

  if (m_dryRunHasBeenSet) {
    ss << "DryRun=" << std::boolalpha << m_dryRun << "&";
  }

  ss << "Version=2016-11-15";
  return ss.str();
}

void GetCapacityManagerSupportabilityScoresRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
