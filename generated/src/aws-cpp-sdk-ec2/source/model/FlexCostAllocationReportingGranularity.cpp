/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FlexCostAllocationReportingGranularity.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FlexCostAllocationReportingGranularityMapper {

static const int eni_HASH = HashingUtils::HashString("eni");
static const int ec2_HASH = HashingUtils::HashString("ec2");
static const int subnet_HASH = HashingUtils::HashString("subnet");
static const int vpc_HASH = HashingUtils::HashString("vpc");
static const int account_HASH = HashingUtils::HashString("account");
static const int peering_id_HASH = HashingUtils::HashString("peering-id");
static const int cidr_HASH = HashingUtils::HashString("cidr");

FlexCostAllocationReportingGranularity GetFlexCostAllocationReportingGranularityForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == eni_HASH) {
    return FlexCostAllocationReportingGranularity::eni;
  } else if (hashCode == ec2_HASH) {
    return FlexCostAllocationReportingGranularity::ec2;
  } else if (hashCode == subnet_HASH) {
    return FlexCostAllocationReportingGranularity::subnet;
  } else if (hashCode == vpc_HASH) {
    return FlexCostAllocationReportingGranularity::vpc;
  } else if (hashCode == account_HASH) {
    return FlexCostAllocationReportingGranularity::account;
  } else if (hashCode == peering_id_HASH) {
    return FlexCostAllocationReportingGranularity::peering_id;
  } else if (hashCode == cidr_HASH) {
    return FlexCostAllocationReportingGranularity::cidr;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FlexCostAllocationReportingGranularity>(hashCode);
  }

  return FlexCostAllocationReportingGranularity::NOT_SET;
}

Aws::String GetNameForFlexCostAllocationReportingGranularity(FlexCostAllocationReportingGranularity enumValue) {
  switch (enumValue) {
    case FlexCostAllocationReportingGranularity::NOT_SET:
      return {};
    case FlexCostAllocationReportingGranularity::eni:
      return "eni";
    case FlexCostAllocationReportingGranularity::ec2:
      return "ec2";
    case FlexCostAllocationReportingGranularity::subnet:
      return "subnet";
    case FlexCostAllocationReportingGranularity::vpc:
      return "vpc";
    case FlexCostAllocationReportingGranularity::account:
      return "account";
    case FlexCostAllocationReportingGranularity::peering_id:
      return "peering-id";
    case FlexCostAllocationReportingGranularity::cidr:
      return "cidr";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FlexCostAllocationReportingGranularityMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
