/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/ec2/model/FilterByDimension.h>

using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {
namespace FilterByDimensionMapper {

static const int resource_region_HASH = HashingUtils::HashString("resource-region");
static const int availability_zone_id_HASH = HashingUtils::HashString("availability-zone-id");
static const int account_id_HASH = HashingUtils::HashString("account-id");
static const int instance_family_HASH = HashingUtils::HashString("instance-family");
static const int instance_type_HASH = HashingUtils::HashString("instance-type");
static const int instance_platform_HASH = HashingUtils::HashString("instance-platform");
static const int reservation_arn_HASH = HashingUtils::HashString("reservation-arn");
static const int reservation_id_HASH = HashingUtils::HashString("reservation-id");
static const int reservation_type_HASH = HashingUtils::HashString("reservation-type");
static const int reservation_create_timestamp_HASH = HashingUtils::HashString("reservation-create-timestamp");
static const int reservation_start_timestamp_HASH = HashingUtils::HashString("reservation-start-timestamp");
static const int reservation_end_timestamp_HASH = HashingUtils::HashString("reservation-end-timestamp");
static const int reservation_end_date_type_HASH = HashingUtils::HashString("reservation-end-date-type");
static const int tenancy_HASH = HashingUtils::HashString("tenancy");
static const int reservation_state_HASH = HashingUtils::HashString("reservation-state");
static const int reservation_instance_match_criteria_HASH = HashingUtils::HashString("reservation-instance-match-criteria");
static const int reservation_unused_financial_owner_HASH = HashingUtils::HashString("reservation-unused-financial-owner");

FilterByDimension GetFilterByDimensionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == resource_region_HASH) {
    return FilterByDimension::resource_region;
  } else if (hashCode == availability_zone_id_HASH) {
    return FilterByDimension::availability_zone_id;
  } else if (hashCode == account_id_HASH) {
    return FilterByDimension::account_id;
  } else if (hashCode == instance_family_HASH) {
    return FilterByDimension::instance_family;
  } else if (hashCode == instance_type_HASH) {
    return FilterByDimension::instance_type;
  } else if (hashCode == instance_platform_HASH) {
    return FilterByDimension::instance_platform;
  } else if (hashCode == reservation_arn_HASH) {
    return FilterByDimension::reservation_arn;
  } else if (hashCode == reservation_id_HASH) {
    return FilterByDimension::reservation_id;
  } else if (hashCode == reservation_type_HASH) {
    return FilterByDimension::reservation_type;
  } else if (hashCode == reservation_create_timestamp_HASH) {
    return FilterByDimension::reservation_create_timestamp;
  } else if (hashCode == reservation_start_timestamp_HASH) {
    return FilterByDimension::reservation_start_timestamp;
  } else if (hashCode == reservation_end_timestamp_HASH) {
    return FilterByDimension::reservation_end_timestamp;
  } else if (hashCode == reservation_end_date_type_HASH) {
    return FilterByDimension::reservation_end_date_type;
  } else if (hashCode == tenancy_HASH) {
    return FilterByDimension::tenancy;
  } else if (hashCode == reservation_state_HASH) {
    return FilterByDimension::reservation_state;
  } else if (hashCode == reservation_instance_match_criteria_HASH) {
    return FilterByDimension::reservation_instance_match_criteria;
  } else if (hashCode == reservation_unused_financial_owner_HASH) {
    return FilterByDimension::reservation_unused_financial_owner;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FilterByDimension>(hashCode);
  }

  return FilterByDimension::NOT_SET;
}

Aws::String GetNameForFilterByDimension(FilterByDimension enumValue) {
  switch (enumValue) {
    case FilterByDimension::NOT_SET:
      return {};
    case FilterByDimension::resource_region:
      return "resource-region";
    case FilterByDimension::availability_zone_id:
      return "availability-zone-id";
    case FilterByDimension::account_id:
      return "account-id";
    case FilterByDimension::instance_family:
      return "instance-family";
    case FilterByDimension::instance_type:
      return "instance-type";
    case FilterByDimension::instance_platform:
      return "instance-platform";
    case FilterByDimension::reservation_arn:
      return "reservation-arn";
    case FilterByDimension::reservation_id:
      return "reservation-id";
    case FilterByDimension::reservation_type:
      return "reservation-type";
    case FilterByDimension::reservation_create_timestamp:
      return "reservation-create-timestamp";
    case FilterByDimension::reservation_start_timestamp:
      return "reservation-start-timestamp";
    case FilterByDimension::reservation_end_timestamp:
      return "reservation-end-timestamp";
    case FilterByDimension::reservation_end_date_type:
      return "reservation-end-date-type";
    case FilterByDimension::tenancy:
      return "tenancy";
    case FilterByDimension::reservation_state:
      return "reservation-state";
    case FilterByDimension::reservation_instance_match_criteria:
      return "reservation-instance-match-criteria";
    case FilterByDimension::reservation_unused_financial_owner:
      return "reservation-unused-financial-owner";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FilterByDimensionMapper
}  // namespace Model
}  // namespace EC2
}  // namespace Aws
